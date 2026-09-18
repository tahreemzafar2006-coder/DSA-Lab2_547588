#include <iostream>
using namespace std;

void analyze_pointer(int *ptr) {
    cout << "Memory location: " << ptr << endl;
    cout << "Value: " << *ptr << endl;
}

int main() {
     int iValue= 500;

    analyze_pointer(&iValue);
    int *ptr = new int;//  allocate number on heap
    *ptr = 10;
    analyze_pointer(ptr);

    return 0;
}