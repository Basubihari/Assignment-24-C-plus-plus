/* 6.Define a function to swap data of two int variables using call by reference.*/
void swap(int &x,int &y)
{
    int temp;
    temp=x;
    x=y;
    y=temp;
}