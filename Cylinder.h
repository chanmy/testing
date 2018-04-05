#ifndef CYLINDER_H
#define CYLINDER_H

#include <math.h>

class Cylinder{
private:
	double radius;
	double height;
	
public:
	Cylinder(){};
	
	Cylinder(double r){
		radius = r;
	}
	
	void setRadius(double r){
		radius = r;
	}
	
	double baseArea(){
		return 22.0 / 7 * pow(radius, 2);
	}
	
	double lateralArea(){
		return 2 * 22.0 / 7 * radius * height;
	}
	
	double totalArea(){
		return 2 * baseArea() + lateralArea();
	}
	
	double Volume(){
		return 22.0 / 7 * pow(radius, 2) * height / 3;
	}
};

#endif