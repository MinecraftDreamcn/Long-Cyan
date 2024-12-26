#include<bits/stdc++.h>
using namespace std;
void take(string s){
	if(s=="\n"){
		cout<<">>>";
	}
	else if(s=="help"){
    	cout<<"helplist"<<endl;
    	cout<<"-------------------------"<<endl;
    	cout<<"version:open version menu."<<endl;
    	cout<<"help:open this menu."<<"\n";
    	cout<<">>>";
	}
	else if(s=="version"){
    	cout<<"Long Cyan Command Tools"<<endl;
    	cout<<"Version 1.0.0"<<endl;
    	cout<<"Test version 1.0.3.7"<<endl;
    	cout<<"Beta version 1.0.2.3"<<endl;
    	cout<<"Preview version 1.0.5.3"<<endl;
    	cout<<">>>";
	}
	else if(s==" "){
		cout<<"Please don't insert a solo space!";
	}
	else if(s=="cls"){
		system("cls");
	}
	else{
		cout<<"Please insert a command!"<<endl;
    	cout<<">>>";
	}
}
