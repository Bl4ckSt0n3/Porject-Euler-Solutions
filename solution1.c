/*
Two different solutions using both array and pointers for the first question of project euler 

Solution of the first question using array in the code below: 
*/
        int arr[1000], sum=0;

		for(int i=1; i<=999; i++)
                {
                        arr[i] = i;
                        if((i%3 == 0) || (i%5 ==0))
                        {
                                printf("%d\n", arr[i]);
                                sum += arr[i];
                        }
                }
                printf("%d\n",sum);
        return 0;
/*
And the second, however if we use a pointer then need 'malloc' function for the memory, 
here we are going to show that how to use malloc with a pointer in the memory 
*/
	int* ptr = (int*)malloc(1000 * sizeof(int));
        int sum=0;

		for(int i=1; i<=999; i++)
                {
                        ptr[i] = i;
                        if((i%3 == 0) || (i%5 ==0))
                        {
                                printf("%d\n", ptr[i]);
                                sum += ptr[i];
                        }
                }
                printf("the sum of these multiples is : %d\n",sum);
        return 0;
