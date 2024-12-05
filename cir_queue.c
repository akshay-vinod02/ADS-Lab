#include<stdio.h>
#include<stdlib.h>
void enqueue(),dequeue(),display();
int queue[50],n,front=-1,rear=-1,choice,item,x;
int main()
{
printf("Enter the size of the queue:");
scanf("%d",&n);
printf("\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
while(1){
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:enqueue();
break;
case 2:dequeue();
break;
case 3:display();
break;
case 4:exit(0);
}
}
return 0;
}
void enqueue()
{
if((front==rear+1) || (front==0 && rear==n-1))
{
printf("\nOverflow\n");
}
else
{
if(front==-1)
front=0;
rear=(rear+1)%n;
printf("\nEnter element:");
scanf("%d",&x);
queue[rear]=x;
printf("\nInserted element is %d\n",x);
}
}
void dequeue()
{
if(front==-1)
{
printf("\nUnderflow\n");
}
else{
x=queue[front];
if(front==rear)
{
front=rear=-1;
}
else
{
 front=(front+1)%n;
}
printf("\nDeleted element is %d\n",x);
}
}
void display()
{
int i;
if(front==-1)
{
 printf("\n Empty queue\n");
}
else
{
printf("Queue elements are:");
for(i=front;i!=rear;i=(i+1)%n)
{
printf("\t%d",queue[i]);
}
printf("\t%d",queue[i]);
printf("\n");
} 
}
