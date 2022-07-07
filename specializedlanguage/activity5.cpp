#include <iostream>
#include <cmath>
using namespace std;

int HeightFtInToCm(int heightFt, int heightIn) {
    int heightCm;
    float cmPerInch;
    int inchesPerFeet;
    int totalInches;
    cmPerInch = 2.54;
    inchesPerFeet = 12;
    // Total inches
    totalInches = (heightFt * inchesPerFeet) + heightIn;
   
    // Convert inches to cm;
    heightCm = totalInches * cmPerInch;
    return heightCm;
}

int main() {
    int userFt;
    int userIn;
    cout << "Enter a number: ";
    cin >> userFt;
    cout << "Enter a number: ";
    cin >> userIn;
    cout << "Centimeters: ";
    cout << HeightFtInToCm(userFt, userIn);
    return 0;
}