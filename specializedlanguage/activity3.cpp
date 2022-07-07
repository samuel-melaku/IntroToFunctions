#include <iostream>
#include <cmath>
using namespace std;

void PrintPizzaArea(float pizzaDiameter, float pizzaRadius) {
   float piVal = 3.14159265;
   float pizzaArea;
   pizzaRadius = pizzaDiameter / 2.0;
   pizzaArea = piVal * pizzaRadius * pizzaRadius;
   cout << pizzaDiameter;
   cout << " in. pizza is ";
   cout << pizzaArea;
   cout << " sq. in.\n";
}
int main() {
   PrintPizzaArea(12.0, 0.3);
   PrintPizzaArea(12.0, 0.8);
   PrintPizzaArea(16.0, 0.8);
}