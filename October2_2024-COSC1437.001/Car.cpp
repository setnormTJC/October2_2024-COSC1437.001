#include "Car.h"

#include"iostream" 

#include"iomanip"

using std::cout; 
using std::setprecision; 


void Car::setMilesDriven(int clientSpecifiedMileage)
{
	Car::milesDriven = clientSpecifiedMileage; 
}

void Car::setCarModel(string clientSpecifiedModel)
{
	if (Car::carMake == "Ford")
	{
		if (Car::carModel != "F-150" || Car::carModel != "Taurus")
		{
			std::cout << "That model is NOT made by Ford!\n";
			std::cin >> clientSpecifiedModel; 
		}
	}

	Car::carModel = clientSpecifiedModel; 
}

void Car::setCarMake(string userSpecifiedMake)
{
	carMake = userSpecifiedMake; 
}

string Car::getCarMake()
{
	return Car::carMake; //bare bones and lame 
	//string
}


//Begin the constructor defintions: 
Car::Car()
{
	std::cout << "Enter the car make: \n";
	string userCarMake; 
	std::cin >> userCarMake; 

	Car::setCarMake(userCarMake); 
	
	Car::carModel = "Model to be determined";

	Car::milesDriven = 13; 

}


Car::Car(string clientMake, string clientModel, int clientMiles)
{
	carMake = clientMake;
	Car::carModel = clientModel;
	Car::milesDriven = clientMiles;
}

void Car::print()
{

	cout << "Model: " << carModel << "\n";

	cout << "Make: " << getCarMake() << "\n";
	
	cout << "Miles: " << std::fixed << setprecision(1) << milesDriven << "\n"; 


}