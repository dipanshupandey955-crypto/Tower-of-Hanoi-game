#include <iostream>
#include <stack>
using namespace std;

// Function to move a disk from one rod to another
void moveDisk(stack<int> &from, stack<int> &to, char source, char destination)
{
    int disk = from.top();
    from.pop();
    to.push(disk);

    cout << "Move disk " << disk
         << " from " << source
         << " to " << destination << endl;
}

// Recursive Tower of Hanoi function
void towerOfHanoi(int n,
                  stack<int> &source,
                  stack<int> &auxiliary,
                  stack<int> &destination,
                  char s, char a, char d)
{
    if (n == 1)
    {
        moveDisk(source, destination, s, d);
        return;
    }

    towerOfHanoi(n - 1, source, destination, auxiliary, s, d, a);

    moveDisk(source, destination, s, d);

    towerOfHanoi(n - 1, auxiliary, source, destination, a, s, d);
}

int main()
{
    int n;

    cout << "Enter number of disks: ";
    cin >> n;

    stack<int> source, auxiliary, destination;

    // Push disks onto source stack (largest at bottom)
    for (int i = n; i >= 1; i--)
    {
        source.push(i);
    }

    towerOfHanoi(n, source, auxiliary, destination, 'A', 'B', 'C');

    return 0;
}