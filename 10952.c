#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char A[50][50];

int main(){
int T,i,N,j,k;
int size,tail,count;
char tar1[50]={'\0'};
char tar1_2[50]={'\0'};
char tar2[50]={'\0'};
int ans;
scanf("%d",&T);
for(i=0;i<T;i++){
    scanf("%d",&N);
    for(j=0;j<N;j++){
        scanf("%s",&A[j]);
    }

    ans=0;
    for(size=1;size<30;size++){
        j=0;
        while(j+1<N){
            tail=strlen(A[j]);
            if(size>tail){
                j++;
                continue;
            }
            count=0;
            for(k=tail-1;k>tail-1-size;k--){
                tar1[count]=A[j][k];
                count++;
            }
            for(k=0;k<strlen(tar1);k++){
                tar1_2[k]=tar1[strlen(tar1)-1-k];
            }
            printf("%s\n",tar1_2);
            count=0;
            for(k=0;k<size;k++){
                tar2[count]=A[j+1][k];
                count++;
            }
            printf("%s\n",tar2);
            if(strcmp(tar1_2,tar2)==0){
                    ans=size;
            }
             for(k=0;k<50;k++){
                tar1[j]='\0';
                tar1_2[j]='\0';
                tar2[j]='\0';
            }
            j++;
        }
    }
    printf("%d\n",ans);
    for(j=0;j<50;j++){
        tar1[j]='\0';
        tar1_2[j]='\0';
        tar2[j]='\0';
    }
}

return 0;
}
