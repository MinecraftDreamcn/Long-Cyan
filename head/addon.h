#include<bits/stdc++.h>
#include <conio.h>
using namespace std;
bool i[5000000];
bool switcher(string fn,int n);
void use(string n){
	if(n=="?")
	cout<<"Import helplist\n-------------------------\nmath: download the math tools.\n\nmgr:launch addon manager.\n>>>";
	else if(n=="mgr"){
    	i[0]=1;
        string t;
        cout << "What Add-on do you want manage?" << endl;
        if(i[1]!=0){
        	cout<<"1:math\n"; 
		}
		else{
			cout<<"1:math(off/none)\n";
		}
        cout << "-->";
        getline(cin, t);
        if(t=="1"){
        	switcher("math",1); 
		}
	}
	else{
		if(n=="math"&&i[1]!=0){
		system("start addon\\math.exe");
		cout<<">>>";
		}
	}
}
bool switcher(string fn,int n) {
    char input;
    while(1){
    	system("cls");
    	cout<<"Switch the fuction:"<<fn;
    cout << "[";
    if (i[n]==1) {
        cout << "ON";
    }
	else {
        cout << "OFF";
    }
    cout << "] ";
    cout<<"\n";
    cout<<"Space:Switch switch           Q:Exit";
    input=_getch();
    if(input==32){
    	i[n]=!i[n];
    	cout<<"\a";
	}
	else if(input==81||input==113){
		break;
	}
}
	cout<<"\n>>>";
}

int import(string n){
	/*
		0:mgr
		1:mathtools
		2:commandcanaddspace
	*/ 
	 if(n=="math"){
		string url = "https://github.com/MinecraftDreamcn/LCY-Add_on/math.exe";
    	string output_file = "addon\\math.exe";
    	string command = "curl -s -o " + output_file + " " + url;
    	int result = system(command.c_str());
    	if (result != 0) {
      		cerr << "Failed to download the Add-on." << endl;
     		return 1;
    	}
    	i[1]=1;
    	cout << "Import the fuction:Math!"<< endl;
	}
	return 0;
}

