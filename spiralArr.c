#include<stdio.h>
int main() {
	int row=4,col=4;
	//scanf("%d%d",&row,&col);
	int a[row][col];
	int i,j,k=1,srow=0,scol=0,erow=row,ecol=col;
	for(i=0;i<row;i++) 
		for(j=0;j<col;j++) 
			a[i][j]=k++;
			//scanf("%d",&a[i][j]); 
	while( srow < erow && scol < ecol) {
		for( i=scol; i<ecol; i++ ) 
			printf("%d ",a[srow][i]);
		srow++;
		for( i=srow; i<erow ; i++ )
			printf("%d ",a[i][ecol-1]);
		ecol--;
		if( srow < erow ) { 
			for( i=ecol-1; i>=scol; i-- ) {
				printf("%d ",a[erow-1][i]);
}			erow--;
		}
		if( scol < ecol ) {
			for( i=erow-1; i>=srow; i-- )
				printf("%d ",a[i][scol]);
			scol++;
		}
	}
	return 0;
}
