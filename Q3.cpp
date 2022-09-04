/* 3. Define a function to calculate x raised to the power y */
long Power(long x, unsigned int y);
{
    if(y==0)
        return(1);
    else if (x==0)
        return(0);
    else if(y%2==0)
        return Power(x,y/2)*Power(x,y/2);
    else
        return x*Power(x,y/2)*Power(x,y/2);.


}