#include "stdafx.h"
#include "locale.h"
#include "windows.h"
#include "math.h"
#include "stdio.h"
#include "stdlib.h"
#include "time.h"


int main()
{
	setlocale(0, "Rus");
	int i, j, k, k2, n, m, p, min;
	int s, s1, n1, m1, q;
	int arr[10][10];  
	int arr2[10][10]; 
	int arr3[10][10];  
	srand(time(NULL));
	// Entering size of filling of array
	printf("Enter size of the first array: "); 
	scanf("%d %d", &m,&n);

	/////////////////////////////¹ 1
	// Entering and output of array
	  /*for (j = 0; j < n; j++)     
		for (i = 0; i < m; i++)
		{
			printf("Enter numbers of array: Line %d, Column %d:  ", j, i);
			scanf("%d", &p);
			arr[j][i] = p;
		}  
		*/
		// Entering and output of array
	for (j = 0; j < m; j++) 
	{
		for (i = 0; i < n; i++)
		{
		g = 1 + rand() % 9;
			arr[j][i] = p;
			printf("%d ", arr[j][i]);
		}
		printf("\n");
	}
		printf("\n"); 

	/////////////////////////////¹ 2

		k = 0;
	for (j = 0; j < m; j++)
	{
		for (i = 0; i < n; i++)
		{
				if (k < n)
				{
					int Buf = arr[0][i];
					arr[0][i] = arr[m - 1][n - (i + 1)];
					arr[m - 1][n - (i + 1)] = Buf;
				}
			printf("%d ", arr[j][i]);
			k++;
		}
		printf("\n");
	}
		printf("\n");

		/////////////////////////////¹ 3
		// Searching minimum
		min = arr[0][0]; 
		k = 0;
		k2 = 0;
		for (j = 0; j < m; j++)    
			for (i = 0; i < n; i++)
			{
				if (min > arr[j][i])
				{
					min = arr[j][i];
					k = j;
					k2 = i;
				}
			}
		// rewriting of array 
		for (j = 0; j < m ; j++) 
		{
			for (i = 0; i < n ; i++)
			{
				if ((j != k) && (i != k2))
				{
					arr2[j][i] = arr[j][i];
					printf("%d ", arr[j][i]);
				}
		
			}
			printf("\n");	
		}
		s = 0;
		s1 = 0;
		for (j = 0; j < m; j++) 
			for (i = 0; i < n; i++)
			{
				if (arr2[j][i] > -100)
				{
					arr2[z][z1] = arr2[j][i];
					s1++; 
					if (s1 == (n - 1)) 
					{
						s1 = 0;
						s++;
					}
				}
			}
			
		/////////////////////////////¹ 4( not working)
		// Entering size of filling of array
		printf("\n Enter size of the second array: "); 
		scanf("%d %d", &n1, &q);
		// Entering of array by hands
		for (j = 0; j < n1; j++)     
			for (i = 0; i < q; i++) 
			{
				printf("Enter numbers of array: Line %d, Column %d:  ", j, i);
				scanf("%d", &p);
				mass[j][i] = p;
			}
		//  Output of the second array
		for (j = 0; j < n1; j++) 
		{
			for (i = 0; i < q; i++)
			{
				printf("%d ", arr[j][i]);
			}
			printf("\n");
		}
		printf("\n");

		/////////////////////////////¹ 5

		if (((m - 1) == q) && ((n - 1) == n1))
		{
			for (i = 0; i < m; i++)
			{
				for (j = 0; j < q; j++)
				{
					arr3[i][j] = 0;
					for (k = 0; k < n-1; k++)
						arr3[i][j] += (arr2[i][k] * arr[k][j]);
				}
			}

			//  Output of the result
			for (j = 0; j < q; j++)
			{
				for (i = 0; i < n1; i++)
				{
					printf("%d ", arr3[j][i]);
				}
				printf("\n");
			}
			printf("\n");
		}

		else printf("Matrices can not be multiplied! \n");

	system("pause");
    return 0;
}

