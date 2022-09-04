/* 4. Define a function to print Pascal Triangle up to N lines. */
void PascalTriangle(int x)
{
    int **c;
    c=new int*[x+1];
    for(int i=0;i<=x;i++)
    {
    c[i]=new int[x+1];
		for(int k=i;k<=x;k++)
		{
			cout<<" ";	
		}	
        for(int j=0;j<=i;j++)
        {
            if(j==0)
            c[i][j]=1;
            else if(i==j)
            c[i][j]=1;
            else
            c[i][j]=c[i-1][j-1]+c[i-1][j];
            cout<<c[i][j];
            cout<<" ";
        }
    cout<<endl;
    }
}