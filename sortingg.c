#include <stdio.h>
int main()
 {
    int data[10],i,n,place,temp;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter The element: ");
    for(i=0;i<n;++i)
    {

       scanf("%d",&data[i]);
    }
    for(place=0;place<n;++place)
    for(i=place+1;i<n;++i)
     {
         if(data[place]>data[i])

          {
             temp=data[place];
             data[place]=data[i];
             data[i]=temp;
         }
    }
    printf("In ascending order: ");
    for(i=0;i<n;++i)
        printf("%d  ",data[i]);
    return 0;
}
