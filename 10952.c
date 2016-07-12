#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char A[50][50]={'\0'};
int main(){
int N,i,size,length_max,j,k;
char tmp;
char cmp1[50]={'\0'};
char cmp2[50]={'\0'};
int len1,len2;
int ans=0;
while(scanf("%d",&N)!=EOF){
    length_max=1;
    for(i=0;i<N;i++){
        scanf("%s",&A[i]);
        j=strlen(A[i]);
        if(length_max<j){
            length_max=j;
        }
    }
    size=1;
    ans=0;
    while(size<=length_max){
        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                if(i!=j){
                    len1=strlen(A[i]);
                    len2=strlen(A[j]);
                    memset(cmp1,'\0',50);
                    memset(cmp2,'\0',50);
                    for(k=0;k<size;k++){
                        cmp1[size-1-k]=A[i][len1-1-k];
                        cmp2[k]=A[j][k];
                    }
                    if(strcmp(cmp1,cmp2)==0){
                        if(ans<size){
                            ans=size;
                        }
                    }
                }
            }
        }
        size++;
    }
    printf("%d\n",ans);
    memset(A,'\0',2500);
}
return 0;
}
