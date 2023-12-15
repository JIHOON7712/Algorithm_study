#include<stdio.h>

/*이분 탐색이 '원하는 값 k를 찾는 과정' 이라면 Lower Bound는 '원하는 값 k 이상이 처음 나오는 위치를 찾는 과정' 이며,
Upper Bound는 '원하는 값 k를 초과한 값이 처음 나오는 위치를 찾는 과정'이다. */

void calcount(int* card,int* inp,int size){
    int data = *inp;
    int lower_bound = 0;
    int upper_bound =0;
    int count = 0;

    int first =0; int last = size; int mid;
    while(last >first){
        mid = (first+last)/2;
        card[mid] > data ?last = mid : (first = mid+1 );
    }   
    upper_bound = first;
    first=0;last =size;
    while(last >first){
        mid = (first+last)/2;
        card[mid] >= data ?last = mid : (first = mid+1 );
    }   
    lower_bound = last;

    *inp = upper_bound - lower_bound;
}

int compare(int* a, int* b) {
    return (*a > *b ? 1 : (*a < *b ? -1: 0));
}

int main(){
    int N;
    int M;

    scanf("%d",&N);
    int card[N];
    for(int i =0;i<N;i++){
        scanf("%d",&card[i]);
        // printf("card %d\n",card[i]);
    }

    qsort(card,N,sizeof(int),compare);

    scanf("%d",&M);
    int inp[M];
    for(int j =0;j<M;j++){
        scanf("%d",&inp[j]);
        // printf("inp %d\n",inp[j]);
        calcount(card,&inp[j],N);
    }

    for(int k =0;k<M;k++){
        printf("%d ",inp[k]);
    }
    printf("\n");
    
    return 0;
}