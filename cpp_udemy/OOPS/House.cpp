#include "House.h"
#include<iostream>
using namespace std;

// Default constructor:
House::House(){
    this->numStories = 1;
    this->numWindows = 4;
    this->color = "white";
}
// Defualt Destructor:
House::~House(){
    cout<<"The "<<color<<" house with "<<numStories<<" stories and "<< numWindows<<" windows is being destroyed!"<<endl;
}
    // add name of class and not object:
        void House::setNumStories(int numStories){
            this->numStories = numStories;
        }
        void House::setNumWindows(int numWindows){
            this->numWindows = numWindows;
        }
        void House::setColor(string color){
            this->color = color;
        }

        int House::getNumStories() const {
            return numStories;
        }
        int House::getNumWindows() const {
            return numWindows;
        }
        string House::getColor() const {
            return color;
        }

// exercise: add a print method as member function and use it to display the contents of house:

        void House::print() const {
            cout<<"The House is "<<color<<" and has "<<numStories<<" stories and "<<numWindows<< " windows."<<endl;
        }