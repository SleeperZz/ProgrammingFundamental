    #include <stdio.h>
    void main ()
    {
 
        int number[3];
        int i, j, a, n;
        printf("Enter 3 numbers \n");
        for (i = 0; i < 3; ++i)
	        scanf("%d", &number[i]);
        for (i = 0; i < 3; ++i) 
        {
            for (j = i + 1; j < 3; ++j) 
            {
                if (number[i] < number[j]) 
                {
                    a = number[i];
                    number[i] = number[j];
                    number[j] = a;
                }
            }
        }
 
        printf("The max numbers is : %d",number[0]);
 
     
    }