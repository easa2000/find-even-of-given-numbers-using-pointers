#include<stdio.h>
void main()
{
    int m, *pm = &m;
    int n, *pn = &n;
    printf("\n Enter the starting and ending limit of the numbers: \n");
    scanf("%d %d",pm,pn);
    while(*pm <= *pn)
    {
        if(*pm % 2 == 0)
        printf("\n %d is Even ", *pm);
        (*pm)++;
    }
}
