#include <stdio.h>
int binomialCoefficient(int n,int k) 
{
    if(k==0||k==n)
    return 1;
    return binomialCoefficient(n-1,k-1)+binomialCoefficient(n-1,k);
}
void generatePascalsTriangle(int rows) 
{
    for (int i=0;i<rows;i++) 
	{
        for (int j=0;j<=i;j++) 
		{
            printf("%d ", binomialCoefficient(i,j));
        }
        printf("\n");
    }
}
int main() 
{
    int rows;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d",&rows);
    if (rows<=0) 
	{
        printf("Invalid input.\n");
        return 1;
    }
    generatePascalsTriangle(rows);
    return 0;
}
