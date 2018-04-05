#ifndef CYLINDER_H
#define CYLINDER_H

#include <math.h>

class Cylinder{
private:
	double radius;
	double height;
	
public:
	double totalArea(){
		return radius * height;
	}
	
	double volume(){
		return 22.0 / 7 * radius * radius * height;
	}
};

#endif