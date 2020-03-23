int evenFibonacci(int index)
{
        int n,temp, next, f=0, s=1;

                printf("%d",f);
                for(n=1; n<=index; n++)
                {
                        temp = f+s;
                        f = s;
                        s = temp;

                        (f%2==0)? printf("%d",f):printf(" ");
                }
}

int main()
{
	//you have to declare an index number into the function below
	evenFibonacci();	
}
