#include <iostream>
# include <string>// heade for string function
#include <algorithm>// header for reverse function
using namespace std;


int main() {
    string *ptr = new string;// dynamically allocates memory to string
    cout<< " Enter the string: ";// input from user 
   getline(cin,*ptr);// considers spaces 
    cout<< " You entered: "<< *ptr<<endl;
    reverse(ptr->begin(), ptr->end()); // built in function that reverses the string
    cout<< "reversed String: "<< *ptr<<endl;
    delete ptr;// deleted the string
    return 0;
}