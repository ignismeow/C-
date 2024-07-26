#include <iostream>
using namespace std;

int main(){
	int x, y, z;
    x = y = z = 50;
    
    cout << x + y + z << endl;    
    return 0;
};


//use const to declare constant variable like


#include <iostream>
using namespace std;

int main() {
	int x;
    cout <<"Please enter a number: ";
    cin >> x;
    cout <<"The value of x is "<< x ;
    return 0;
}


#include <iostream>
using namespace std;

int main() {
	int x, y;
    int sum;
    cout <<"Please enter a number: ";
    cin >> x;
    cout <<"Please enter another number: ";
    cin >> y;
    
    sum = x + y;
    
    cout <<"The sum of given values is "<< sum;
    return 0;
}



#include <iostream>
#include <string>
using namespace std;
 
int main () {
 	string firstname;
    string lastname;
    string fullname;
    
 	cout << "Please enter first name: ";
    cin >> firstname;
    cout << "Please enter last name: ";
    cin >> lastname;
    
    cout << firstname +" "+ lastname << endl;
    return 0;
}
