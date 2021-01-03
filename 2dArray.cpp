#include <iostream>
using namespace std;

int** my2DAlloc(int, int);
void my2DdeAlloc(int**, int);

int main()
{
    int rows = 4;
    int cols = 5;
    int** ptr;
    
    ptr = my2DAlloc(rows, cols);

    for (int i=0;i<rows;i++)
    {
    	for (int j=0;j<cols;j++)
    	{
    		cout<<ptr[i][j];
    	}
    }

    my2DdeAlloc(ptr, rows);
    return 0;
}

int** my2DAlloc(int rows, int cols)
{
    int** rowptr;
    rowptr = (int**) malloc(rows*sizeof(int*));
    for (int i=0;i<rows;i++)
    {
        rowptr[i] = (int*)malloc(cols*sizeof(int));
    }
    return rowptr;
}

void my2DdeAlloc(int** rowptr, int rows)
{
    for (int i=0;i<rows;i++)
    {
        free(rowptr[i]);
    }
    free(rowptr);
}