#include <bits/stdc++.h>

using namespace std;

int main()
{
   int n;
   int k;
   scanf("%d%d",&n,&k);
   vector<int> v;
   vector<int>::iterator it;
    vector<int>::iterator nextIt;
   for(int i=0;i<n;i++){
       int num;
        scanf("%d",&num);
        v.push_back(num);
   }
  sort(v.begin(),v.end());
  for(it=v.begin();it!=v.end();){
        int tem=*it;
        nextIt=it+1;
        if(tem==(*nextIt)){
            it=nextIt+1;
            nextIt=it+1;
        }
        else{

            printf("%d",tem);
            break;
        }

  }
    return 0;
}