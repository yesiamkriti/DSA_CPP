#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
struct Node {
    int data;
    struct Node* next;
} *first = NULL;

void Create(int a[],int n){
    int i;
    struct Node *temp,*last;
    first = (struct Node*)malloc(sizeof(struct Node));
    first->data = a[0];
    first->next = NULL;
    last = first;

    for(i=1;i<n;i++){
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = a[i];
        temp->next = NULL;
        last->next = temp;
        last = temp;
    }
}
// normal display function 
void display(struct Node * p){
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}
// recursivaly displaying the function
void RDisplay(struct Node * p){
    if(p!=NULL){
        printf("%d ",p->data);
    RDisplay(p->next);
    }
}
// normal counting the function
 int count(struct Node *p){
    int l = 0;
    while(p){
        l++;
        p = p -> next;
    }
    return l;
}
// recursive count
int Rcount(struct Node* p){
    if(p!=NULL){
        Rcount(p->next)+1;
    }else{return 0;}
}
// normal sum
int sum(struct Node* p){
    int i=0;
    while(p!=NULL){
        i+=p->data;
        p=p->next;
    }
    return i;
}
//recursive sum
int Rsum(struct Node * p){
    if(p!=NULL){
        return Rsum(p->next) + p->data;
    }else{
        return 0;
    }
}
// normal max
int max(struct Node *p){
    int max =INT_MIN;
    while(p){
        if(p->data > max)
            max = p->data;
        p=p->next;
    }
    return max;
}
// recursive max 

// linear search
struct Node* Lsearch(struct Node * p,int newdata){
    while(p!=NULL){
        if(p->data == newdata)
            return p;
        p=p->next;
    }
    return 0;
}
// linear search and bring it to the front 
struct Node* Lfsearch(struct Node * p,int newdata){
    struct Node* temp;
    while(p!=NULL){
        if(p->data == newdata){
            temp->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        temp =p;
        p=p->next;
    }
    return 0;
}
// recursive search
struct  Node* Rsearch(struct Node*p,int newdata){
    if(p==NULL){
        return NULL;
    }
    if(p->data == newdata)
        return p;
    return Rsearch(p->next,newdata);
}
// 

int main(){
    int a[]={4,2,9,5,10};
    Create(a,5);
    display(first);
    printf("\nlength is %d ",count(first));
    printf("\nlength is %d ",Rcount(first));

    printf("\nsum of the number is %d ",Rsum(first));
    printf("\nsum of the number is %d ",sum(first));
    printf("\nmax number %d ",max(first));
    if(Lsearch(first,9))
        {printf("\nfounded");}
    else{printf("\nnot founded");}

    if(Rsearch(first,22))
        {printf("\nfound\n");}
    else{printf("\nnotfounded\n");}
    display(first);
    if(Lfsearch(first,5))
        {printf("\n found......\n");}
    else{printf("\n notfounded.........\n");}
    display(first);
    return 0;
}
 