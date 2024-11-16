#include <iostream>
#include <fstream>
using namespace std;

struct Data {
int id;
char name[50];
};
int main() {
Data d1 = {1, "Mansi"};
ofstream outFile("data.bin", ios::binary); 
if (outFile.is_open()) {
outFile.write(reinterpret_cast<char*>(&d1), sizeof(d1));


outFile.close();
cout << "Data written to binary file." << endl;
} else {
cout << "Error: Could not open file." << endl;
}
return 0;
}