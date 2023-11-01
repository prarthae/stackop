#include<stdio.h>
#include<stdlib.h>
//#define max 5;
int max= 5;
int arr[5];

int top=-1;
void push()
{
 if(top==max-1)
  {
   printf("Stack is full");
  }
 else
  {
   printf("Give number to be inserted : ");
   top=top+1;
   scanf("%d",&arr[top]);
  }
}
void pop()
{
 if(top==-1)
  {
   printf("Stack is empty :");
  }
 else
  {
   printf("%d is poped out ",arr[top]);
   top=top-1;
  }
}
void display()
{
 int i;
 if(top==-1)
  {
   printf("stack is empty");
  }
 else
  {
   for(i=0;i<=top;++i)
    printf("%d \n",arr[i]);
  }
}
void peak()
{
 if(top==-1)
  printf("Stack is empty");
 else
  printf("%d is the top element ",arr[top]);
}
void main()
{
 int op;
do{
   printf("\n1.PUSH: ");
   printf("\n2.POP:");
   printf("\n3.PEAK: ");
   printf("\n4.DISPLAY:");
   printf("\n5.EXIT: ");
   printf("\nChose eny of the above : ");
   scanf("%d",&op);
  switch(op)
  {
   case 1:
      push();
      break;
   case 2:
      pop();
      break;
   case 3:
      peak();
      break;
   case 4:
      display();
      break;
   case 5:
      exit(0);
      break;
   default:
      printf("\nInvalid selection");
 }
}while(1);
}











