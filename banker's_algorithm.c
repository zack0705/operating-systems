#include<stdio.h>

void main(){
	int n,r,i,j,c,t,y;
	printf("enter no of resources");
	scanf("%d", &n);
	int re[n],av[n];
	for(i=0;i<n;i++){
		printf("enter no of objects of resource %d",i);
		scanf("%d", &re[i]);
		av[i] = re[i];
	}
	printf("enter no of process");
	scanf("%d",&r);
	int tab[r][2*n+1];
	for(i=0;i<r;i++)
		for(j=0;j<n;j++){
			printf("enter max for %d %d : ", i , j);
			scanf("%i", &tab[i][j]);
			printf("enter alloted for %d %d : ", i , j);
			scanf("%i", &tab[i][j+n]);
			tab[i][j] = tab[i][j] - tab[i][j+n];
			av[j] -= tab[i][j+n];
			tab[i][2*n] = 1;
		}
		
	c = r;
	t = 0;
	y = 0;
	while(c!=0){
		y = 0;
		for(i=0;i<r;i++){
			t = 0;
			if(tab[i][2*n] == 0)
				continue;
			for(j=0;j<n;j++){
				if(tab[i][j] > av[j]){
					t = 1;
					break;
				}
			}
			if(t==0){
				tab[i][2*n] = 0;
				break;
			}
			y++;
		}
		if(y==r){
			printf("DEADLOCK");
			break;
		}
		printf("%d->", i);
		c--;
		for(j=0;j<n;j++)
			av[j] += tab[i][j+n];
	}
}

