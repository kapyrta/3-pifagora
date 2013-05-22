#include"stdafx.h"
#include <iostream>
#include <conio.h>
//#include <stdlib.h>
//#include <stdio.h>
#include <cmath>

using namespace std;

#define MAX 5

int main ()
{
  double side1 =0.0, side2 = 0.0, hypotenuse = 0.0;
  for (side1 ; side1 <= MAX; side1++)
		for (side2 = side1; side2 <= MAX; side2++)
		{
			double result=(side1 * side1) + (side2 * side2);
			hypotenuse = sqrt(result);
			if ( hypotenuse * hypotenuse == (side1 * side1) + (side2 * side2))
				cout<<side1<<"   "<<side2<<"   "<<hypotenuse;
			//else cout <<"side1 not equal side2";
		}
		system("pause");
		return 0;        
}

