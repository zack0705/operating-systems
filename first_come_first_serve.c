#include<stdio.h>

struct process{
	int id,at,bt,ct,tat,wt;
};

void sort(int n, struct process p[n]){
	int i;
	struct process x;
	int count=1;
	int j=1;
	while(count!=0){
		count=0;
		for(i=0;i<n-j;i++){
			if(p[i].at > p[i+1].at){
				x = p[i];
				p[i] = p[i+1];
				p[i+1] = x;
				count++;
			}
		}
		j++;
	}
}

void main(){
	int a,b,n,i;
	printf("enter to number of processes");
	scanf("%d", &n);
	
	struct process ar[n];
	
	printf("enter processes' arrival time and burst time");
	for(i=0;i<n;i++){
		ar[i].id = i+1;
		scanf("%d", &ar[i].at);
		scanf("%d", &ar[i].bt);
	}
	
	int current=0;
	double avgtat=0;
	double avgwt=0;
	for(i=0;i<n;i++){
		if(current<ar[i].at){
			current = ar[i].at;
		}
		ar[i].ct = current + ar[i].bt;
		current = current + ar[i].bt;
		ar[i].tat = ar[i].ct - ar[i].at;
		ar[i].wt = ar[i].ct - ar[i].bt - ar[i].at;
		avgtat += ar[i].tat;
		avgwt += ar[i].wt;
		
		printf("id = %d at = %d bt = %d ct = %d tat = %d wt = %d\n", ar[i].id, ar[i].at, ar[i].bt, ar[i].ct, ar[i].tat, ar[i].wt);
	}
	
	avgtat /= n;
	avgwt /= n;
	double m = n;
	double t = (m/(current-ar[0].at));
	
	printf("avg tat = %f\n", avgtat);
	printf("avg wt = %f\n", avgwt);
	printf("throughput = %f\n", t);
}

