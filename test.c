#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	char arr1[] = "abcdef";
	char arr2[] = { 'a','b','c','d','e','f','\0'};   // \0为bit.\n结束标志

	printf("%d\n", strlen(arr1));
	printf("%d\n", strlen(arr2));
	/*int len = strlen("abc");
	printf("%d\n",len);*/

	/*printf("%s\n", arr1);
	printf("%s\n", arr2);*/

	return 0;
}
