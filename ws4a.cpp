#include<stdio.h>
int main(){
	int r,c,r1,c1,i,j,k;
	printf("Enter number of rows and columns for 1st matrix seperate by a space: ");
	scanf("%d %d",&r,&c);
	printf("\nEnter number of rows and columns for 2nd matrix seperated by a space: ");
	scanf("%d %d",&r1,&c1);
	int a[r][c],b[r1][c1];
	printf("\n");
	if((r!=r1 && c!=c1) && c!=r1) printf("\nOperations not possible\n");
	else{
		for( i=0;i<r;i++){
			for( j=0;j<c;j++){
				printf("Enter row-%d column-%d of matrix-1: ",i,j);
				scanf("%d",&a[i][j]);
			}
			printf("\n");
		}

		for( i=0;i<r1;i++){
			for( j=0;j<c1;j++){
				printf("Enter row-%d column-%d of matrix-2: ",i,j);
				scanf("%d",&b[i][j]);
			}
			printf("\n");
		}
		//system("cls");
		if(r!=r1 && c!=c1) printf("\nmatrix addition is not possible as dimesions are different\n");
		else{
			printf("\nAfter adding the two matrices is\n");
			for (int i = 0; i <r; ++i)
			{
				for (int j = 0; j < c; ++j)
				{
					a[i][j]+=b[i][j];
					printf("%2d ",a[i][j]);
				}
				printf("\n");
			}
		}
		if(c!=r1) printf("\nmatrix multiplication is not possible as dimesions are different\n");
		else{
			int mul[r][c1];
			for( k=0;k<r;k++){
				for (i = 0; i < c; ++i)
				{
					mul[k][i]=0;
					for (j = 0; j < c; ++j)
						mul[k][i]+=a[k][j]*b[j][i];
				}
				printf("\n");
			}
			printf("\nAfter multiplying the two matrices is\n");
			for(i=0;i<r;i++){
				for(j=0;j<r;j++)
					printf("%4d ",mul[i][j] );
				printf("\n");
			}
		}
	}
	return 0;
}
OUTPUT:
Enter number of rows and columns for 1st matrix seperate by a space: 2 2

Enter number of rows and columns for 2nd matrix seperated by a space: 2 2

Enter row-0 column-0 of matrix-1: 34
Enter row-0 column-1 of matrix-1: 2 4

Enter row-1 column-0 of matrix-1: Enter row-1 column-1 of matrix-1: 2 5

Enter row-0 column-0 of matrix-2: Enter row-0 column-1 of matrix-2: 4 6

Enter row-1 column-0 of matrix-2: Enter row-1 column-1 of matrix-2: 5


After adding the two matrices is
39  6
10  7



After multiplying the two matrices is
 231  186
  92   75



