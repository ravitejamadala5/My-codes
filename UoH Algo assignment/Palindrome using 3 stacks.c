#include  <stdio.h>
#include <stdlib.h>

struct node {
  struct node *next;
  int data;
}*top1, *top2, *top3;

void push(struct node **top, int val){
  struct node *n1 = (struct node*)malloc(sizeof(struct node));
  n1 -> data = val;
  if(*top == NULL) {
    *top = n1;
    n1 -> next = NULL;
  }
  else{
    n1 -> next = *top;
    *top = n1;
  }
}

int pop(struct node **top){
    struct node *save = *top;
    *top = (*top) -> next;
    int a = (save) -> data;
    free(save);
    return a;
}

int main()
{
  int n;
  int flag = 0;
  scanf("%d", &n);
  while(n != 0){
    int r = n % 10;

    push(&top1,r);
    push(&top2,r);
    n = n /10;
  }
  // while((*top1) -> data != NULL){
  //   printf("%d\n", top1 -> data);
  //   int temp = pop(&top1);
  // }
  // while((*top2) -> data != NULL){
  //   printf("%d\n", top2 -> data);
  //   int temp = pop(&top2);
  // }
  while(top2 != NULL){
    int b = pop(&top2);
    push(&top3, b);
  }
  while(top1 != NULL){
    printf("%d\n", (top1) -> data);
    int c,d;
    c = pop(&top1);
    d = pop(&top3);
    printf("Elements in the stack 1 %d\n",c );

    printf("Elements in the stack 3 %d\n",d);
    if(c != d){
      flag = 1;
    }
  }
  if(flag == 0){
    printf("It is a palindrome\n");
  }
  else{
    printf("Its not a palindrome\n");
  }
}
