/* 5. Define a function to check whether a given number is a term in a
 Fibonacci series or not.*/
 void Fibonacci(int x)
 {
    int i,Term1=0,Term2=1,Next_Term;
    if(x=0)
    printf("given number is a term in a Fibonacci Series.");
    else if(x>0)
    for(i=1;i<=x;i++)
    {
        Next_Term=Term1+Term2;
        Term1=Term2;
        Term2=Next_Term;
        if(Next_Term==x)
        {
            printf("given number is a term in a Fibonacci Series");
            break;
        }

    }
    else
    printf("given number is not term in a Fibonacci Series");   
 }