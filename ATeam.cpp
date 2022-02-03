#include <iostream>
using namespace std;
int main()
{
    // int n, a, b, c, solve;
    // solve = 0;
    // cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a;
    //     cout << " ";
    //     cin >> b;
    //     cout << " ";
    //     cin >> c;
    //     if ((a + b + c) > 2)
    //         solve++;
    // }

    // cout<<solve;
    // first approach

    int n, solve,sum;
    solve = 0;
    sum=0;
    int solution[3];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
         for (int j = 0; j < 3; j++)
         {
             cin>>solution[j];
             sum=+solution[j];
         }
          if (sum>3)   
            solve++;
    }

    cout<<solve;
    return 0;
}
