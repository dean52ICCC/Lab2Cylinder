#ifndef Cylinder_H
#define Cylinder_H

// Creates the Cylinder class
class Cylinder {
private:
	float radius;
	float height;

// Creates Methods for the Cylinder
public:
	Cylinder();
	~Cylinder();

	void setHeight(float height_);
	float getHeight();

	void setRadius(float radius_);
	float getRadius();

	float calculateVolume();
	float surfaceArea();
};

#endif // !Cylinder