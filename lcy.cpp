#include<bits/stdc++.h>
#include"head/lcystd.h"
using namespace std;
int main(){
  string s;
  cout<<"LCY Command-tool"<<endl;
  cout<<"Please update at https://github.com/MinecraftDreamcn/Long-Cyan"<<endl;
  cout<<"Version 1.0.3 Realese"<<endl;
  cout<<"Insert 'help' to open help menu.Insert 'exit' to exit program."<<endl;
  cout<<">>>";
  while(getline(cin,s)){
    if(take(s)==0){
      return 1036;
    }  
  }
  return 0;
}
