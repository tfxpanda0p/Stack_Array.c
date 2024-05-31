#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void push();
void pop();
void display();
void count();
//void change();

#define MAX 5

int st[MAX];
int top=-1;

main()
{
    int c;
    do
    {
        printf("\nMenu: \n1:PUSH \n2:POP \n3.DISPLAY \n4.COUNT \n5.CHANGE \n6.EXIT \nEnter Your Choice: ");
        scanf("%d",&c);
        switch(c)
        {
            case 1:push();
                    break;
            case 2:pop();
                    break;
            case 3:display();
                    break;
            case 4:count();
                    break;
        //    case 5:change();
        //            break;
            case 6:exit(0);
            default:printf("\nWRONG INPUT,PLZ TRY AGAIN");
                    break;
        }                                                                
    }while(1);
}

void push()
{
    int n;
    if(top==MAX-1)//top=4//
    {
        printf("\n || STACK IS OVERLOAD || \n");
    }
    else
    {
        printf("\nENTER YOUR DATA:- ");
        scanf("%d",&n);
        top++;
        st[top]=n;
    }
}
void pop()
{
    if(top==-1)
    {        
        printf("\n || STACK IS UNDERFLOW || \n");
    }
    else
    {
        printf("\nELEMENT POPPED:%d\n",st[top]);
        //st[top]='\0';
        top--;
    }
}
void display()
{
    int a;
    if(top==-1)
    {        
        printf("\n || STACK IS UNDERFLOW || \n");
    }
    else
    {   
        printf("\nSTACK:- ");
        for(a=top;a>-1;a--)
        {
            printf("\n%d)%d",a+1,st[a]);
        }
        printf("\n");
    }
}
void count()
{
    if(top==-1)
    {        
        printf("\n || STACK IS UNDERFLOW || \n");
    }
    else
    {
        printf("\nTOTAL ELEMENT IN STACK:%d",top+1);
    }
}
/*void change()
{
    int no,p,counter,x;
    if(top==-1)
    {               
        printf("\n || STACK IS UNDERFLOW || \n");
    }
    else if(top==0)//if there is one element it will not ask the position..//
    {   
        counter=0;
        printf("\nENTER YOUR NEW ELEMENT:- ");
        scanf("%d",&no);
        x=st[counter];
     //  st[counter]='\0';
        st[counter]=no;
        printf("\n ELEMENT IS UPDATED %d (old data) ---> %d (updated data) \n",x,st[top]);
    }
    else
    {
        printf("\nENTER THE POSITION:- ");
        scanf("%d",&p);
        counter=p-1;
        printf("\nENTER YOUR NEW ELEMENT:- ");
        scanf("%d",&no);
        x=st[counter];
     // st[counter]='\0';
        st[counter]=no;
        printf("\n ELEMENT IS UPDATED %d (old data) ---> %d (updated data) \n",x,st[counter]);
    }
}
*/
