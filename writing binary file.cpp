#include <iostream>
#include <fstream>
using namespace std;

// Define a structure to hold employee data
struct Employee {
    int id;
    char name[50];
};

int main() {
    // Open the binary file for writing
    ofstream outFile("employees.bin", ios::binary);
    if (!outFile) {
        cerr << "Error: Could not open file for writing." << endl;
        return 1;
    }

    // Create employee data
    Employee emp1 = {101, "Mansi"};
    Employee emp2 = {102, "Avinash"};
    Employee emp3 = {103, "Tanvi"};

    // Write employee data to the binary file
    outFile.write(reinterpret_cast<char*>(&emp1), sizeof(emp1));
    outFile.write(reinterpret_cast<char*>(&emp2), sizeof(emp2));
    outFile.write(reinterpret_cast<char*>(&emp3), sizeof(emp3));

    // Close the file
    outFile.close();

    // Success message
    cout << "Employee records written to binary file successfully." << endl;

    return 0;
}
