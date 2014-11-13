#include <stdio.h>

typedef struct radu {
  int a; 
  int b;
  char c;
  float d;
} radu;

void f(char*, radu);
void g(char**);

int main(void)  {
  char *s = "hello"; 
  radu r = {.a = 123, .b = 100, .c = 5, .d = 3.14};

  f(s,r);
}

void f(char *s, radu q) {
  s = *(s + q.c);

  char *p = s;
  g(p);
}

void g(char **s) {
  printf("What is wrong with printf?\n %s", **s);
}
