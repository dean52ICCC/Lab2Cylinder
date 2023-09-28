#include "Cylinder.h"
#include <iostream>

// Sets pi for equations
float pi = 3.14159;

Cylinder::Cylinder()
	: radius(), height() {}

Cylinder::~Cylinder() {}

// Displays the radius and height of the cylinder
void Cylinder::setHeight(float height_) {
	height = height_;
}

float Cylinder::getHeight() {
	return height;
}

// Sets new values for the Cylinders height and radius
void Cylinder::setRadius(float radius_) {
	radius = radius_;
}

float Cylinder::getRadius() {
	return radius;
}

// Calculates and returns the volume of the Cylinder
float Cylinder::calculateVolume() {
	return pi * powf(radius, 2) * height;
}

// Calculates and returns the surface area of the Cylinder
float Cylinder::surfaceArea() {
	return 2.0 * pi * radius * height + 2.0 * pi * powf(radius, 2);
}