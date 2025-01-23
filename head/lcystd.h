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
			cout<<"exit:exit this program."<<endl;
			cout<<"cmd:open cmd."<<endl;
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
		cout<<">>>"; 
	}
	else if(s=="cmd"){
		system("cls");
		system("title C:\\WINDOWS\\system32\\cmd.exe");
		system("cmd");
	}
	else if(s=="reload"){
		string t;
		cout<<"What Windows command do you want to reload?"<<endl;
		cout<<"-->";
		getline(cin,t);
		if(t=="cmd"){
			system("cls");
			system("title C:\\WINDOWS\\system32\\cmd.exe");
			system("cmd");
		}
		else{
			system(t.c_str());
		}
		cout<<">>>";
	}
	else if(s=="exit"){
		return 5;
	}
	else{
		cout<<"Please insert a command!"<<endl;
    		cout<<">>>";
	}
}
