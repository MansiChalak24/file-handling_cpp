#include <fstream>
#include <iostream>
using namespace std;

int main() {
ifstream inFile("manu.txt"); 
string line;
if (inFile.is_open()) {
while (getline(inFile, line)) { 
cout << line << endl; 
}
inFile.close(); 
} else {
cout << "Error: Could not open the file." << endl;
}

return 0;
}