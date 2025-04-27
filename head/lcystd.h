#include <bits/stdc++.h>
#include"addon.h"
using namespace std;
int take(string s) {
	string fn;
    if (s.empty()) {
        cout << ">>>";
        return 0;
    } else if (s == "help") {
        cout << "helplist" << endl;
        cout << "-------------------------" << endl;
        cout << "help: open this menu." << endl;
        cout << "version: open version menu." << endl;
        cout << "cls: clean screen." << endl;
        cout << "cmd: open cmd." << endl;
        cout << "reload: reload a windows command." << endl;
        cout << "use:use a Add-on.\nimport: import a add-on ." << endl;
        cout << "exit: exit this program." << endl;
        cout << ">>>";
        return 0;
    } else if (s == "version") {
        cout << "Long Cyan Command Tools" << endl;
        cout << "Version-1.4.0" << endl;
        cout << "Test version-1.07.5.6" << endl;
        cout << "Beta version-1.4.8.9" << endl;
        cout << "Preview version-1.5.17.1" << endl;
        cout << ">>>";
        return 0;
    } else if (s == "cls") {
        system("cls");
        cout << ">>>";
        return 0;
    } else if (s == "cmd") {
        system("cls");
        system("title C:\\WINDOWS\\system32\\cmd.exe");
        system("cmd");
        return 0;
    } else if (s == "reload") {
        string t;
        cout << "What Windows command do you want to reload?" << endl;
        cout << "-->";
        getline(cin, t);
        if (t == "cmd") {
            system("cls");
            system("title C:\\WINDOWS\\system32\\cmd.exe");
            system("cmd");
        } else {
            system(t.c_str());
        }
        cout << ">>>";
        return 0;
    }
    else if(s=="import"){
		string t;
		cout << "Insert ? to show helplist." << endl;
        cout << "What Add-on do you want to use?" << endl;
        cout << "-->";
        getline(cin, t);
        import(t);
	}
	else if(s=="use"){
		string t;
		cout << "Insert ? to show helplist." << endl;
        cout << "What Add-on do you want to use?" << endl;
        cout << "-->";
        getline(cin, t);
        use(t);
	}
	else if (s == "exit") {
        return 5;
    } else if (s == " ") {
        cout << "Please don't insert solo space!" << endl;
        cout << ">>>";
        return 0;
    } else {
        cout << "Invalid command. Type 'help' for a list of commands." << endl;
        cout << ">>>";
        return 0;
    }
}

