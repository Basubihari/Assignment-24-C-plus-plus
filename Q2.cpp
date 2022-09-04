/* Q2.Define a function to find the highest value digit in a given number.*/
int HighestDigit(long x)
{
	int a,b;
    while(x!=0)
    {
        int a=x%10;
        if(b<a)
        b=a;
        x/=10;
    }
return(b);
}