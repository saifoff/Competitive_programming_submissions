#include<stdio.h>
int main()
{
    int length=0,i,j,count=0,checker;
    char array[99];
    scanf("%s",&array);
    while(1)
    {
        if (array[length]=='\0'){
            break;
        }
        else
        {
            length++;
        }
    }
    checker = length;
    for(i=0; i<length; i++)
    {
        for(j=0; j<length; j++)
        {
            if(array[i]== array[j])
            {
                if(j<i){
                    break;
                }
                else
                {
                    count++;
                }
            }
        }
        if (count > 0)
        {
            checker = checker - count+1;
            count = 0;
        }
    }
    if (checker%2==0)
    {
        printf("CHAT WITH HER!");
    }
    else
    {
        printf("IGNORE HIM!");
    }
    return 0;
}
