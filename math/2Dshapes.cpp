#include <iostream>
#include <cmath>

using namespace std;

// global variables
double const PI = 3.42;
int const null = NULL;

// functions
double square(double area, double side){if (area == null && side != null){area = pow(side, 2);return area;}else if (area != null && side == null){double side = sqrt(area);return side;}else if (area != null && side != null){return false;}}
double rectangle(double area, double base, double height){if (area == null && not(base == null && height == null)){area = base * height;return area;}else if (base == null && not(area == null && height == null)){base = area / height;return base;}else if (height == null && not(area == null && base == null)){height = area / base;return height;}else if (not(area == null && base == null && height == null)){return false;}}
double parallelogram(double area, double base, double height){if (area == null && not(base == null && height == null)){area = base * height;return area;}else if (base == null && not(area == null && height == null)){base = area / height;return base;}else if (height == null && not(area == null && base == null)){height = area / base;return height;}else if (not(area == null && base == null && height == null)){return false;}}double trapezoid(double area, double a, double b, double height){if (area == null and not(a == null && b == null && height == null)){area = (a + b) * height / 2;return area;}else if (a == null and not(area == null && b == null && height == null)){a = area / (height / 2) - b;return a;}else if (b == null and not(area == null && a == null && height == null)){b = area / (height / 2) - a;return b;}else if (height == null and not(area == null && a == null && b == null)){height = area / ((a + b) / 2);return height;}else if (not(height == null && area == null && a == null && b == null)){return false;}}
double triangle(double area, double base, double height){if (area == null and not(base == null and height == null)){area = (base * height) / 2;return area;}else if (base == null and not(area == null and height == null)){base = area / (height / 2);return base;}else if (height == null and not(area == null and base == null)){height = area / (base / 2);return height;}else if (not(area == null && base == null && height == null)){return false;}}
double circle(double area, double radius){if (area == null and not(radius == null)){area = PI * pow(radius, 2);return area;}else if (radius == null and not(area == null)){radius = sqrt(area / PI);return radius;}else if (not(area == null and radius == null)){return false;}}
double ellipse(double area, double a, double b){if (area == null and not(a == null and b == null)){area = PI * a * b;return area;}else if (a == null and not(area == null and b == null)){a = area / (PI * b);return a;}}

// 2D shapes
	// square(null, 3.20); A = S^s
	// rectangle(null, 36, 2); A = bh
	// parallelogram(null, 2, 2); A = bh
	// trapezoid(null, 2, 3, 3); A = (a+b)h/2
	// triangle(null, 2, 4); A = 1 / 2 * bh
	// circle(null, 3); A = πr^2
	// ellipse(null, 2, 2); A = πab

// for Debugging only
//int main()
//{
	//cout << square(null, 3.20);
	//cout << rectangle(null, 36, 2);
	//cout << parallelogram(null, 2, 3);
	//cout << trapezoid(30, null, 8, 5);
	//cout << triangle(79.825,10.3,null);
	//cout << circle(null, 4);
	//cout << ellipse(null, 15, 8);
	
	
	//return 0;
//}