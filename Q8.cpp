/* 8.Define overloaded functions to calculate area of circle, area of rectangle 
and area of triangle*/
float area(float x)
{
    return((22/7)*x*x);
}
float area(float x,float y)
{
    return(x*y);
}
float area(float x,float y,float z)
{
    float s=(x+y+z)/2;
    return(sqrt(s*(s-x)*(s-y)*(s-z)));
}
