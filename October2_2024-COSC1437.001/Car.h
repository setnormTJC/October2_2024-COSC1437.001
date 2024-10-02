#pragma once


#include<iostream> 



using std::string; 


//this specifies what it means to be a "Car" object (in our world) 
class Car
{
//private: (because "encapsulation"!) -> the shell of a turtle  
	string carModel; 
	string carMake;
	int milesDriven; 

public: 
	//setter ("mutator") functions
	void setMilesDriven(int clientSpecifiedMileage); //this is NOT a definition -> just a declaration
	void setCarModel(string clientSpecifiedModel); 
	void setCarMake(string userSpecifiedMake); 

	//getter ("accessor") functions: 
	string getCarMake(); 
	string getCarModel();
	int getMilesDriven(); 

	//Constructor functions 
	/*default (takes 0 params/args/inputs)*/
	Car();
	Car(string, string, int); 

	bool isSameCar(Car);
};

