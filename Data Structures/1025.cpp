//1025 - Where is the Marble?
//Arissa Yoshida
//21/05/2020
#include <bits/stdc++.h>

using namespace std;

main(){
  int x=1,y=1;
  vector<int>v;
  int c =1;
  while(x!=0 && y!=0){
    scanf("%d %d",&x,&y);
    if(x!=0 && y!=0){
    int a=0;
    for(int i=0;i<x;i++){
      scanf("%d",&a);
      v.push_back(a);
    }
    
    printf("CASE# %d:\n",c);
    sort(v.begin(),v.end());
    for(int i=0;i<y;i++){
      int b=-1;
      scanf("%d",&a);
      for(int j=0;j<v.size();j++){
        if(a == v[j]){
          b = j+1;
          break;
        }
      }
      if(b==-1){
        printf("%d not found\n",a);
      }else{
        printf("%d found at %d\n",a,b);
      }
      
    }    
    v.erase(v.begin(),v.end());
    c++;
    }
  }

return 0;
}
