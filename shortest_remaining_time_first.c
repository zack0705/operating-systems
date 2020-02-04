#include<stdio.h>
#include<stdbool.h>

struct process{
	int id,at,bt,ct,tat,wt,rt;
	bool done;
};

void main(){
	int a,b,n,i;
	double avgtat=0;
	double avgwt=0;
	int left=0;
	printf("enter to number of processes");
	scanf("%d", &n);
	
	struct process ar[n];
	
	printf("enter processes' arrival time and burst time");
	for(i=0;i<n;i++){
		ar[i].id = i+1;
		ar[i].done = false;
		left++;
		scanf("%d", &ar[i].at);
		scanf("%d", &ar[i].bt);
		ar[i].rt = ar[i].bt;
	}
	
	struct process *p;
	int current=0;
	while(left!=0){
		i=0;
		while(ar[i].done!=false){
			i++;
		}
		p=&ar[i];
		i++;
		while(current<p->at){
			current++;
		}
		while(ar[i].at <= current && i<n){
			if(p->rt > ar[i].rt && ar[i].done==false){
				p = &ar[i];
			}
			i++;
		}
	//	printf("%d ", p->id);
		p->rt--;
		current++;
		if(p->rt == 0){
			left--;
			p->done=true;
			p->ct = current;// + p->bt;
//			current = current + p->bt;
			p->tat = p->ct - p->at;
			p->wt = p->ct - p->bt - p->at;
			avgtat += p->tat;
			avgwt += p->wt;
		
			printf("id = %d at = %d bt = %d ct = %d tat = %d wt = %d\n", p->id, p->at, p->bt, p->ct, p->tat, p->wt);
		}
	}
	avgtat /= n;
	avgwt /= n;
	double m = n;
	double t = (m/(current-ar[0].at));
	
	printf("avg tat = %f\n", avgtat);
	printf("avg wt = %f\n", avgwt);
	printf("throughput = %f\n", t);

}


