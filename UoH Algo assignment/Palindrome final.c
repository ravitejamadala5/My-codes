#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node* next;
} *top1, *top2, *top3;

void push(struct node **top, int val){
  struct node  *n1 = (struct node*)malloc(sizeof(struct node));
  n1 -> data = val;
  if(*top == NULL){
    *top = n1;
    n1 -> next = NULL;
  }
  else {
    n1 -> next = *top;
    *top = n1;
  }
}

int pop(struct node **top){
  struct node *temp = *top;
  *top = (*top) -> next;
  int a = temp -> data;
  free(temp);
  return a;
}

int main(){
  int n;
  scanf("%d", &n);
  int flag = 0;
  while(n != 0){
    int r = n % 10;
    push(&top1, r);
    push(&top2, r);
    n = n/10;
  }
  while(top2 != NULL){
    int b = pop(&top2);
    push(&top3, b);
  }
  while(top3 != NULL){
    int c,d;
    c = pop(&top1);
    d = pop(&top3);
    if(c != d){
      flag = 1;
    }
  }
  if(flag == 1){
    printf("Its not a palindrome\n");
  }
  else{
    printf("Its a palindrome" );
  }
}
