#include<stdio.h>
#include<stdlib.h>
int max=5;
int top=-1;
void push();
void pop();
void display();
void main()
{
    int ch;
    while(1)
    {
        printf("\n *** Stack Menu****");
        printf("\n\nn1.push\n2.Pop\n3.Display\n4.Exit");
        printf("\n Enter the choice 1-4::-");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
          push(); /* code */
            break;
        case 2:
           pop();
           break;    
        case 3:
          display();
          break;
        case 4:
         exit(0);
        default:
            printf("wrong input");

        }
    }
}

void push()
{
       int stack[max];
       int item;
       if(top==max-1)
       {
        printf("\n can't insert:-overflow condition");
       }
       else{
        printf("\n Enter the item which item want to insert:::-");
        scanf("%d",&item);
        top=top+1;
        stack[top]=item;
       }
}
void pop()
{
    int stack[max];
    if(top=-1)
    {
        printf("\n Not able to delete item:-underflor condition");

    }
    else
    {
        ("\nDeleted element is %d",stack[top]);
        top=top-1;
    }
}

  void display()
  {
    int stack[max];
    int i;
    if(top==-1)
    {
    printf("\n Stack is empty!!!");
    }
  else
  {
    printf("\n Stack is....");
    for(i=top;i>=0;--i)
    printf("%d\n,stack[i]");
  }
  }