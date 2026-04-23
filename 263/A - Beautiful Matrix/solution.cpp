#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
 
      int m=5, n=5;
      
 
 
      vector<vector<int>>arr(m,vector<int>(n,0));
 
      pair<int, int> one = {-1, -1};
 
      for (int i = 1; i <= m; i++)
      {
 
            for (int j = 1; j <= n; j++)
            {
                 
 
                  cin>>arr[i-1][j-1];
 
                
            }
      }
 
      bool s=false;
 
      for (int i = 1; i <= m&&!s; i++)
      {
 
            for (int j = 1; j <= n; j++)
            {
                  if(arr[i-1][j-1]==1){
                        one.first=i;
                        one.second=j;
                        s=true;
                        break;
                  }
            }
      }
 
      int ans=abs(one.first-3)+abs(one.second-3);
 
     
      cout << ans << endl;
}