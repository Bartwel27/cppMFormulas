#include <iostream>
#include <cmath>

using namespace std;

// functions
double square(int area, double side){if (area == NULL && side != NULL){double area = pow(side,2);return area;} else if(area != NULL && side == NULL) {double side = sqrt(area);return side;} else if(area != NULL && side != NULL) {return false;}}


int main(){
	// 2D shapes
		// square(3.20); A = S^s
		// rectangle(36,2); A = bh
		// parallelogram(2,2); A = bh
		// trapezoid(2,3,3); A = (a+b)h/2
		// triangle(2,4); A = 1 / 2 * bh
		// circle(3); A = πr^2
		// ellipes(2,2); A = πab
		
		

	return 0;	
}