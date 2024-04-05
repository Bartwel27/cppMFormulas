# cppMFormulas
A cpp program filled with math formulas defined in functions and outputs returnable values, parameters are used to find a value of a formula, if a parameter has ```null``` value then it will find the ```null``` param given.

![image](https://articles.outlier.org/_next/image?url=https%3A%2F%2Fimages.ctfassets.net%2Fkj4bmrik9d6o%2F3Rn6lXm78lGNHpOBTl2K4r%2F9fcf9eaaaf131575f56bd6a8ba29dbdc%2FNormal_Distribution_05.png&w=3840&q=75)

## 2D shapes
**_Square function_**

*Formula:*
> A = S²

The square function is a function that calculates and finds the area of a square and is measured in squre units ```m²```, the function takes 2 parametres the first param is ```A``` and last param is ```s²``` that stands for sides of a surface of a square, When finding the area as the first param please use the NULL value.
```
square(null, 3.20); 
```

**_Rectangle function_**

*formula:*
> A = bh

The rectangle function is used to find the area of a rectangle, it takes 3 parametres, the first param is ```A```, second param ```b``` and third param is ```h```. if two params are given values, the function will use those values to find the other parameter.
``` 
rectangle(null, 36, 2);
```


**_Parallelogram function_**

*formula:*
> A = bh

The parallelogram function is much similar to the rectangle function as they both accept 3 parameters and uses them to find the area of a rectangle
```
parallelogram(null, 2, 2);
```

**_trapezoid function_**

*formula:*
> A = (a+b)h/2

The trapezoid function is a function that calculates the area of a trapezoid, basically is a quadrilateral that has at least one pair of parallel sides. The parallel sides are called the bases of the trapezoid. The trapezoid function takes 4 parameters and respectively these are ```A```, ```a```, ```b``` and ```h```.
```
trapezoid(null, 2, 3, 3);
```

**_triangle function_**

*formula:*
> A = 1 / 2 * bh

The triangle function calculates the area of a triangle and takes 3 parameters and respectively these params are ```A```, ```a``` and ```h```. To find the value of a parameter we use the ```null``` value.
```
triangle(null , 2, 4);
```

**_circle function_**

*formula:*
> A = πr²

The circle function calculates the area of a circle and accepts 2 parametres, the first and last param is ```A`` and ```r²``` respectively to find a value of a parameter we use the ```null``` value.
```
circle(NULL,3);
```

**_ellipse function_**

*formula:*
> A = πab

The Ellipse function calculates the area of a ellipse shape, and takes 3 parameters, the first second and third param is ```A```, ```a``` and ```b``` respectively, these paramaters can be found when we use the ```null``` value on a specific parameter.
```
ellipes(null, 2, 2);
```





>[!NOTE]
> Use ```NULL``` as a parameter to find its value.

>[!WARNING]
>Dont give all parameters values of a function to avoid false return outputs, You use the NULL value on a parameter to find a value of a same param.



### Installation
>folder
```
git clone https://github.com/bartwel27/cppMFormulas/
```
_or_

