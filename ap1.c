#include <stdio.h>
#include <stdlib.h>
void main()
{
int list[5];                    //5개의 정수를 받는 변수
int *plist[5] = {NULL,};        // 정수에 대한 5개의 포인터
plist[0] = (int *)malloc(sizeof(int)); // 메모리 공간 요구
list[0] = 1;                           
list[1] = 100;
*plist[0] = 200;
printf("value of list[0] = %d\n", list[0]);
printf("address of list[0] = %p\n", &list[0]);
printf("value of list = %p\n", list);
printf("address of list (&list) = %p\n", &list);
printf("----------------------------------------\n\n");
printf("value of list[1] = %d\n", list[1]);
printf("address of list[1] = %p\n", &list[1]);
printf("value of *(list+1) = %d\n", *(list + 1));
printf("address of list+1 = %p\n", list+1);
printf("----------------------------------------\n\n");
printf("value of *plist[0] = %d\n", *plist[0]);
printf("&plist[0] = %p\n", &plist[0]);
printf("&plist = %p\n", &plist);
printf("plist = %p\n", plist);
printf("plist[0] = %p\n", plist[0]);
printf("plist[1] = %p\n", plist[1]);
printf("plist[2] = %p\n", plist[2]);
printf("plist[3] = %p\n", plist[3]);
printf("plist[4] = %p\n", plist[4]);
free(plist[0]);
printf("[----- [cho min woo] [2019038019] -----]");
}