#include<stdio.h>
#include<stdlib.h>
#include<string.h>
# define T 2

struct prog{
	int id,at,bt,ct,tat,wt,rt,remain;
	struct prog* ptr;	
};

void display(struct prog * a){
	struct prog * b;
	b=a;
	while(b != NULL){
		printf("%d ", b->id);
		//printf("next = %d\n", b->ptr->id);
		b=b->ptr;
	}
}

void main(){
	int i=1, count=0;
	struct prog *p;
	struct prog * head, * tail, * ansh=NULL, * anst=NULL, * t ,* x; 
	while(1){
		printf("enter arrival and burst of %d", i);
		struct prog * n  = (struct prog *)malloc(sizeof(struct prog));
		scanf("%d %d", &n->at, &n->bt);
		if(n->at==-1){
			tail = p;
			break;
		}
		count++;
		n->id = i;
		n->remain = n->bt;
		n->rt = -1;
		if(i==1){
			head = n;
			p = n;
			i++;
			continue;
		}
		p->ptr = n;
		n->ptr = NULL;
		p=n;
		i++;
	}
	int current=0;
	
	printf("\nsjgvcha\n");
	
	//display(head);
	
	printf("\n");
//	printf("%d\n----------", head->at);
	
//	String p ="";
	int j=0;
	int count2 = 0;
	int z=0;
//	printf("\nhihi\n");
	while(1){
	//	printf("hi");
		if(head == NULL){
			break;
		}
		if(current < head->at){
			//p += "_"
			for(j=0;j<((head->at)-current);j++){
				printf("_");
			}
			current = head->at;
		}
		if(head->rt == -1){
			head->rt = current - head->at;
		}
		
		for(j=T;j>0;j--){
			printf("%d", head->id);
			head->remain--;
			p += head->id;
			current++;
			if(head->remain == 0){
				//insert into ans list
				//**** \|| head = head->ptr;
				break;
			}
		}
		t = head;
		head = head->ptr;
		x = head;
		
		if(t->remain == 0){
			//printf("%d", t->id);
			t->ct = current;
			t->tat = t->ct - t->at;
			t->wt = t->tat - t->bt;
			if(ansh==NULL){
				ansh = t;
				anst = t;
			}
			else{
				anst->ptr = t;
				anst = t;
			}
		}
		else{
			while(1){
				if(head==NULL || head->at > current){
					head = t;
					break;
				}
				else if(x->ptr == NULL){
					x->ptr = t;
					t->ptr = NULL;
					break;
				}
				else if(x->ptr->at > current){
					t->ptr = x->ptr;
					x->ptr = t;
					break;
				}
				else{
					x = x->ptr;
				}
			}
		}
	}
	x = ansh;
	printf("\nID CT TAT WT RT\n");
	while(x != NULL){
		printf("%d %d %d %d %d\n", x->id, x->ct, x->tat, x->wt, x->rt);
		x = x->ptr;
	}
}

