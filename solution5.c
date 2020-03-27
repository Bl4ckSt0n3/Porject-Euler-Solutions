int smallestMultiple()
{
        int t=1;
        for(int i=2; i<=20; i++)
        {
                if(t%i != 0)
                {

                        if(i%2==0)
                        {
                                t=t*2;
                        }
                        else if(i%3==0)
                        {
                                t=t*3;
                        }
                        else{t=t*i;}

                }

        }printf("%d\n",t);
}

int main()
{
	smallestMultiple();
	return 0;
}

