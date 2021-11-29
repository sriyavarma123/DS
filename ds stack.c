include<stdio.h>
  2 #include<stdlib.h>
  3
  4 int a[20];int top=-1;
  5 void push();
  6 int pop();
  7 void display();
  8 int main()
  9 {
 10
 11 int choice,element;
 12 int t;
 13 while(1)
 14  {
 15    printf("1.push\n 2.pop\n 3.display\n 4.exit\n");
 16    printf("enter your choice");
 17    scanf("%d",&choice);
 18    switch(choice)
 19    {
 20      case 1:
 21      printf("enter the element to be inserted");
 22      scanf("%d",&element);
 23      push(element);
 24      break;
 25
 26      case 2:
 27
 28      t=pop();
 29
 30      printf("%d element is deleted",t);
 31      break;
 32
 33      case 3:
 34      display();
 35      break;
 36
 37      case 4:
 38      exit(0);
 39
 40      default:
 41      printf("enter the valid choice number");
 42      }
 43      }
 44      }
 45       void push(int element)
Type  :qa  and press <Enter> to exit Vim                                                                                            1,1           Top


