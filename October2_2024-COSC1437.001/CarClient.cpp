// October2_2024-COSC1437.001.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include"Car.h"

using std::cout; 


int main()
{
    Car myCar{ "Honda", "Civic", 161'500 };
    cout << "Make of myCar object is: " << myCar.getCarMake() << "\n";

    Car someDefaultCar{};

    cout << "Make, model, and miles of defaultCar: \n"; 
    someDefaultCar.printCarDetails(); 

}
