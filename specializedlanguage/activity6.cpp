#include <iostream>
#include <cmath>
using namespace std;

int CircleArea(float circleDiameter) {
    float circleArea;
    float circleRadius;
    float piVal;
    piVal = 3.14159265;
    circleRadius = circleDiameter / 2.0;
    circleArea = piVal * circleRadius * circleRadius;
    return circleArea;
}

int PizzaCalories(float pizzaDiameter) {
    float totalCalories;
    float caloriesPerSquareInch;
    // Regular crust pepperoni pizza
    caloriesPerSquareInch = 16.7;
    totalCalories = CircleArea(pizzaDiameter) * caloriesPerSquareInch;
    return totalCalories;
}

int main() {
    int pizzaDiameter;
    cout << "Enter a number: ";
    cin >> pizzaDiameter;
    cout << pizzaDiameter;
    cout << " inch pizza has ";
    cout << PizzaCalories(pizzaDiameter);
    cout << " calories.\n";
}