
#include "triangle.h"


char *getTriangleName(int line1 , int line2 ,int line3)
{
  if ((line1<=0) || (line2<=0) || (line3<=0)){
    return "not triangle";
  }
  else if ((line1==line2) && (line2==line3) && (line3==line1)){
    return "equilateral";
  }
  else if ((line1==line2) || (line2==line3) || (line3==line1)){
    return "isosceles";
  }
  else{
    return "scalene";
  }
}

int add(int value1, int value2)
{
  return value1+value2 ;
}
