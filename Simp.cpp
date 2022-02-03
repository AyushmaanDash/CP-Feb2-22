#include <iostream>
#include <string>
using namespace std;

int main()
{
    string username;
    getline(cin,username);
    int i,j,count,distinct;
    i=j=distinct=0;
    for (string::iterator it = (username.begin()); it < (username.end()); it++)
    {
        count=0;
        j=i;
        for (string::iterator jt = it; jt < (username.end()); jt++)
        {
            if (username[i] == username[j])
            {
                count++;
            }
            j++;
        }
        i++;
        if(count==1)
        {
            distinct++;
        }
    }

    if (distinct % 2)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";
    return 0;
}
