#include<stdio.h>
#include<conio.h>
#define n 5
void main()
{
    int a[n], i=0,no,count=1, j=0;
    clrscr();
        while(count<=n)
      {   printf("Enter an element");
        scanf("%d",&n);
        count ++;
        i=j-1;
        while(no<a[i] && i>=0)

  { a[i+1]=a[i];
  i--;
  }
  a[i+1]=no;
  j++;  
}
  printf("/n after insertion serting....");
 for(i=0;i<n;i++)
{ printf ("%d\t",a[i]);
}
getch();    
} 
  