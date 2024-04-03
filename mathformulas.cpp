#include <iostream>
#include <cmath>

using namespace std;

// functions
double square(double area, double side){if (area == NULL && side != NULL){area = pow(side,2);return area;} else if(area != NULL && side == NULL) {double side = sqrt(area);return side;} else if(area != NULL && side != NULL) {return false;}}
double rectangle(double area, double base, double height){if (area == NULL && not(base == NULL && height == NULL)){area = base * height;return area;} else if (base == NULL && not(area == NULL && height == NULL)) {base = area / height;return base;} else if (height == NULL && not(area == NULL && base == NULL)) {height = area / base;return height;} else if (not(area == NULL && base == NULL && height == NULL)) {return false;}}
double parallelogram(double area, double base, double height){if (area == NULL && not(base == NULL && height == NULL)){area = base * height;return area;} else if (base == NULL && not(area == NULL && height == NULL)) {base = area / height;return base;} else if (height == NULL && not(area == NULL && base == NULL)) {height = area / base;return height;} else if (not(area == NULL && base == NULL && height == NULL)) {return false;}}

// 2D shapes
	// square(NULL, 3.20); A = S^s
	// rectangle(NULL,36,2); A = bh
	// parallelogram(NULL,2,2); A = bh
	// trapezoid(NULL,2,3,3); A = (a+b)h/2
	// triangle(NULL,2,4); A = 1 / 2 * bh
	// circle(NULL,3); A = πr^2
	// ellipes(NULL,2,2); A = πab
		

// for Debugging only

/*
int main(){	

	//cout << rectangle(2,2,2);
	return 0;	
}
*/
