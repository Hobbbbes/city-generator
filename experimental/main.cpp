#include <iostream>
#include <vector>
#include "funcs.hpp"

int main() {

bool running = true;
char choice;
int a, b;

cityGenerate();

callCities();

while(running){

std::cout << "Would you liked to merge two cities?\n";
std::cout << "Yes (Y)   Exit (E)   List Cities (L)   Refresh Cities (R)   Generate New Cities (N)\n";
std::cin >> choice;

if(choice == 'E') {

	running = false;
	return 0;

} else if(choice == 'Y') {
std::cout << "Select the cities you'd like to merge by their numeric designator (Name: [x])\n";
std::cout << "Note: If selecting city 0, place value in holder (a)\n\n";
std::cout << "City Selection (a): ";
std::cin >> a; 
std::cout << "\nCity Selection (b): ";
std::cin >> b;

std::cout << merge_cities(a, b);

} else if(choice == 'L') {

callCities();

} else if(choice == 'R') {

clearCities();
cityGenerate();
callCities();

} else if(choice == 'N') {

int iTemp;

iTemp = newCities();
cityGenerate(iTemp - 1);
callCities();

}


}



}
