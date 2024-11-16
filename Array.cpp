#include <iostream>
using namespace std;

int main() {
    
int numbers[3]; 
cout << "Enter 3 numbers:\n";
for (int i = 0; i < 3; i++) {
cin >> numbers[i];
}
cout << "You entered: ";
for (int i = 0; i < 3; i++) {
cout << numbers[i] << " ";
}

return 0;
}