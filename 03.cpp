//The below code will give error
#include <iostream>
#include <string>
using namespace std;
 
int main () {
 	string x = "10";
	int y = 20;
	string z = x + y;
    
   	cout << z << endl;
    return 0;
}


#include <iostream>
#include <string>
using namespace std;
 
int main () {
 	string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    txt[0] = 'J';
    
   	cout <<"The lengthn of the string is: "<< txt.length() << endl;
    cout <<"The lengthn of the string is: "<< txt.size() << endl;
    cout << txt[txt.length() - 1] << endl;
    cout << txt;
    return 0;
}


#include <iostream>
#include <string>
using namespace std;
 
int main () {
 	string fullname;
    
    cout << "Type your full name: "<<endl;
    getline(cin, fullname)
    
    cout <<"Your fullname is: "<<fullname<<endl;
    return 0;
}
