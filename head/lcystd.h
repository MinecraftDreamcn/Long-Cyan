#include<bits/stdc++.h>
using namespace std;
int take(string s){
	if(s=="\n"){
		cout<<">>>";
	}
	else if(s=="help"){
    	cout<<"helplist"<<endl;
    	cout<<"-------------------------"<<endl;
    	cout<<"version:open version menu."<<endl;
    	cout<<"help:open this menu."<<"\n";
    	cout<<"cls:clean screen."<<endl;
		cout<<"reload:reload a windows command."<<endl; 
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
		cout<<"Please don't insert solo space!"<<endl;
		cout<<">>>";
	}
	else if(s=="cls"){
		system("cls");
	}
	else if(s=="reload"){
		string t;
		cout<<"What Windows command do you want to reload?"<<endl;
		cout<<"-->";
		getline(cin,t);
		system(t.c_str());
		int result = system(t.c_str());
		if (result != 0) {
    		cerr << "Command execution failed." << endl;
		}
		cout<<">>>";

	}
	else{
		cout<<"Please insert a command!"<<endl;
    	cout<<">>>";
	}
}
