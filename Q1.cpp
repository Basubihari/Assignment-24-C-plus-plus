/* Q1.Define a function to check whether a given number is a Prime number or not.*/
void CheckPrime()
{
    long Num;
    cout<<"Enter an integral number:->";
    cin>>Num;
    int count=0;
    for(int i=2;i<=Num;i++)
    {
        if(Num%i==0)
    	count++;
    if(count==2)
    break;    
    }
if(count==1)
cout<<Num<<" is Prime Number.";
else
cout<<Num<<" is not prime number.";
}