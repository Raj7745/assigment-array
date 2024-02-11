#include<stdio.h>
#include<conio.h>
#define size 5

int main()
{

int num[size];
int max=0;
int i=0;

    printf(" enter a array element\n" );

    for(i=0; i<size ; i++)
    {


        printf(" enetr %d element\n",i);
        scanf("%d",&num[i]);
    }

    for( i=0; i<size; i++)
    {

        if( i==0)
        {

            max=num[i];
            
            

        }
        if(num[i]>max)
        {
            max=num[i];
        
        }



    }
        printf(" maximum number is %d",max);


        return 0;

}



