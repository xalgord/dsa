#include <stdio.h>
#include <stdlib.h>

struct node {
  int data;
  struct node *left;
  struct node *right;
};

struct node *head = NULL;
struct node *tail = NULL;

void insert(int n) {
  struct node *t;
  t = (struct node *)malloc(sizeof(struct node));
  t->data = n;
  t->left = NULL;
  t->right = NULL;
  if (head == NULL) {
    head = t;
    tail = t;
    t->left = t;
    t->right = t;
  } else {
    struct node *p;
    p = tail;
    p->right = t;
    t->left = tail;
    tail = t;
    tail->right = head;
    head->left = tail;
  }
}

void delbegin() {
  struct node *p;
  p = head;
  head = p->right;
  free(p);
}

void delend() {
  int len = 0, i = 1;
  struct node *p, *t;
  p = head;
  t = p;
  while (p != tail) {
    len++;
    p = p->right;
  }

  p = head;
  while (i < len) {
    p = p->right;
    i++;
  }

  p->right = head;
  t->left = p;
  tail = p;
}

void delanywhere(int n) {
  int len = 0, i = 1;
  struct node *p, *t;
  p = head;
  t = p;
  while (p != tail) {
    len++;
    p = p->right;
  }

  if (n > len + 1) {
    printf("Invalid Node\n");
  } else {
    if (n == 1) {
      head = head->right;
      head->left = tail;
    } else if (n == len + 1) {
      p = head;
      t = p;
      while (p != tail) {
        len++;
        p = p->right;
      }

      p = head;
      while (i <= len) {
        p = p->right;
        i++;
      }

      p->right = head;
      t->left = p;
      tail = p;
    } else {
      p = head;
      while (i < n - 1) {
        p = p->right;
        i++;
      }

      p->right = p->right->right;
    }
  }
}

void traverse() {
  struct node *p;
  p = head;
  int len, l = 0;
  while (p != tail) {
    printf("%d \n", p->data);
    p = p->right;
  }
  printf("%d", p->data);
}

int main() {
  insert(5);
  insert(6);
  insert(7);
  insert(8);
  // delbegin();
  // delend();
  delanywhere(2);
  traverse();
}