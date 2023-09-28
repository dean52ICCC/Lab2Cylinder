/*
	Brayden Dean
	C++ 2023
	Due: 9/29/2023
	Lab 2
	Create a cylinder object that stores radius and height. Have methods for
	calculating volume, calculating surface area, and get and set functions.
	Use hard coded values and output radius, height, volume and surface area
*/

#include <iostream>
#include "Cylinder.h"

int main() {
	// Create Cylinder object
	Cylinder c;

	// Change the values of the Cylinder
	c.setRadius(7.4);
	c.setHeight(3.9);

	//Display Values of the Cylinder
	std::cout << "Radius: " << c.getRadius() << std::endl;
	std::cout << "Height: " << c.getHeight() << std::endl;

	// Calculate volume and surface area
	std::cout << "Volume: " << c.calculateVolume() << std::endl;
	std::cout << "Surface Area: " << c.surfaceArea() << std::endl;

	return 0;
}