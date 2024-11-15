#include<stdio.h>
#include<conio.h>

main()
{
  int no, calculate=0;

    clrscr();
      printf("enter any number:");
      scanf("%d",&no);

      while(no != 0)
      {
	calculate++;
	no  = no / 10;

      }
      printf("number of digit:%d \n",calculate);

    getch();
}










