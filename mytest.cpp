#include<stdio.h>
/*
	copyright [test]
*/
int main() {
  //第二冲突
  printf("1\n");

	printf("1\n");
  printf("hello world\n");
  printf("1\n");

	printf("1\n");
  printf("hello world\n");
  //diff 测试
  return 0;
}
