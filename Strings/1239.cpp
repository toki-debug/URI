//1239 - Bloggo Shortcuts
//Arissa Yoshida
//19/05/2020
#include <bits/stdc++.h>

using namespace std;

main(){
  char c;
  stack<int>a;
  stack<int>b;
  while((c=getchar())!=EOF){
    if(c=='_'&& a.empty()){
      cout << "<i>"; 
      a.push(1);
    }else if(c=='*'&&b.empty()){
      cout << "<b>";
      b.push(1);
    }else if(c=='*'&&!b.empty()){
      cout << "</b>";
      b.pop();
    }else if(c=='_'&&!a.empty()){
      cout << "</i>";
      a.pop();
    }else{
      cout << c;
    }
  }

  
  return 0;
}
