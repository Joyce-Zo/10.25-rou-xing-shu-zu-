#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//
//void sleep(clock_t wait);
//
//void main(void)
//{
//    long    i = 600000000L;
//    clock_t start, finish;
//    double  duration;
//
//    /* Delay for a specified time. */
//    printf("Delay for three seconds\n");
//    sleep((clock_t)3 * CLOCKS_PER_SEC);
//    printf("Done!\n");
//
//    /* Measure the duration of an event. */
//    printf("Time to do %ld empty loops is ", i);
//    start = clock();
//    while (i--)
//        ;
//    finish = clock();
//    duration = (double)(finish - start) / CLOCKS_PER_SEC;
//    printf("%1f seconds\n", duration);
//}
//
///* Pauses for a specified number of milliseconds. */
//void sleep(clock_t wait)
//{
//    clock_t goal;
//    goal = wait + clock();
//    while (goal > clock())
//        ;
//}

//int main()
//{
//	int a = 0, b = 0, c = 0;
//	c = (a -= a - 5), (a = b, b + 3);
//	//	c=(a=a-(a-5) = 5|		b=0 -> a ,则a=b=0
//	printf("%d,%d,%d", a, b, c);
//	return 0;
//}

//				柔性数组
//		1.结构中的柔性数组成员前至少存在一个其他成员
//		2.sizeof返回这种结构大小不包括柔性数组的内存
//		3.动态开辟的空间应大于结构体大小

struct S1
{
	int n ;
	int arr[];
};
struct S2
{
	int n;
	int* arr;
};
int main()
{
	int i = 0;
	struct S1* p = (struct S1*)malloc(sizeof(struct S1) + 10 * sizeof(int));
	p -> n = 100;
	for (i - 0; i < 10; i++)
	{
		p->arr[i] = i;
		printf("%d ", p->arr[i]);
	}
	printf("%d ", p->n);
	free(p);
	p = NULL;
	return 0;
}