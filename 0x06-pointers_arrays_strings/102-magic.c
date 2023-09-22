#include "main.h"
/*
 * main - it's magic try it now
 * Return: always 0.
 */
 int main(void)
{
	int n;
	int a[5];
	int *p;

	 a[2] = 1024;
	 p = &n;
						/*
						 *  * write ur code here
						 *   * Remember:
						 *    * -u can't use a
						 *     * -u can't mod p
						 *      * -uR not allowed to code anything
						 *       */
						        *(p + 5) = 98;
							        /* ....it's print 98\n */
							        printf("a[2] = %d\n", a[2]);
								return (0);

