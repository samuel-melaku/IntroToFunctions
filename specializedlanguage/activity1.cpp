#include <iostream>
#include <cmath>
using namespace std;

void PrintPizzaArea() {
   float piVal = 3.14159265;
   float pizzaDiameter = 12.0;
   float pizzaRadius;
   float pizzaArea;
   pizzaRadius = pizzaDiameter / 2.0;
   pizzaArea = piVal * pizzaRadius * pizzaRadius;
   cout << pizzaDiameter;
   cout <<  " in. pizza is ";
   cout << pizzaArea;
   cout << " sq. in.\n";
}

int main() {
   PrintPizzaArea();
   return 0;
}