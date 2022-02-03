#include <iostream>
using namespace std;
int main()
{
    int n, solve,sum;
    solve = 0;
    int solution[3];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        sum=0;
         for (int j = 0; j < 3; j++)
         {
             cin>>solution[j];
             sum+=solution[j];
         }
          if (sum>1)   
            solve++;
    }
    cout<<solve;
    return 0;
}
