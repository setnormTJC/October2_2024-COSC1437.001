// October7th-DemoingInputFileReading Into a class object.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"fstream" 
#include <vector>

class TitanicPassengerInfo
{
    int PID; 
    bool didTheySurvive; 
    int passengerClass; 
    //continue in this vein...
};

class Point
{
public: 
    double x, y; //x/y -> 1/2 = 0 

    Point()
    {
        //does nothing -> bum!
    }
    Point(double x, double y) //"member initializer constructor syntax"
        :x(x), y(y)
    {

    }   

};

int main()
{
    //Point firstPoint{ 1, 2 };
    //std::cout << firstPoint.x << "\t" << firstPoint.y << "\n";
    
    //the goal of this program is to read in the three points
    // from the text file and store them in an ARRAY 
    // and then print the point to the console/terminal
    
   

    std::ifstream fileIn{"C:/Users/Work/Desktop/pointyPoints.txt" }; //a path to a file 

    if (!fileIn.is_open())
    {
        std::cout << "That file was not found ;[\n";
        return -1; 
    }

    std::vector<Point> listOfPoints;
    std::cout << "Processing file contents...\n";

    while (!fileIn.eof())
    {
        Point currentPoint; 
        fileIn >> currentPoint.x >> currentPoint.y;

        listOfPoints.push_back(currentPoint);
    }

    fileIn.close(); //"good programming style"

    for (auto& thePoint : listOfPoints)
    {
        std::cout << "(" << thePoint.x << " , " << thePoint.y << ")\n";
    }


}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
