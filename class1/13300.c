#include<stdio.h>

int main(){
    int stu,maxstu;
    int arr[2][6]={0,};
    int room=0;

    scanf("%d %d",&stu,&maxstu);
    getchar();
    
    int sex,grade;
    for(int i=0; i<stu; i++){
        scanf("%d %d",&sex,&grade);
        getchar();

        if(sex == 0){
            arr[0][grade-1]++;
        }
        else{
            arr[1][grade-1]++;
        }
    }

    for(int j=0; j<2; j++){
        for(int k=0; k<6; k++){
            if(arr[j][k]%maxstu > 0){
                room=room+(arr[j][k]/maxstu+1);
            }
            else{
                room=room+(arr[j][k]/maxstu);
            }
        }
    }

    printf("%d\n",room);
}