#include <iostream>
using namespace std;

int main()
{
    int position, remainder, steps;
    cin >> position;
    remainder = (position % 5);
    steps = (position - remainder) / 5;
    if (remainder)
        steps++;
    cout << steps;
    return 0;
}
