#include <iostream>
using  namespace std;

// Function with default parameter
void greet(string name = "Guest") {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
   
    greet(); 
    
    greet("Alice"); 

    return 0;
}
