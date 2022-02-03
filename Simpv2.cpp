#include <iostream>
using namespace std;

int main()
{
    char username[100];
    cin >> username;
    int count, distinct;
    distinct = 0;
    for (int i = 0; i < 100; i++)
    {
        count = 0;
        for (int j = i; j < 100; j++)
        {
            if (username[i] == username[j])
                count++;
        }
        
        if (count == 1)
            distinct++;
    }

    if (distinct % 2)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";
    // cout<<distinct;

    return 0;
}