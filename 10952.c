#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char A[50][50];
int main(){
int N,i,size,largest,len_tmp,j,k;
char tmp;
char cmp1[50];
char cmp2[50];
int len1,len2;
int ans;
while(scanf("%d",&N)!=EOF){

    tmp=getchar();
    for(i=0;i<N;i++){
        scanf("%s",&A[i]);
    }
    largest=strlen(A[0]);
    for(i=1;i<N;i++){
        len_tmp=strlen(A[i]);
        if(largest<=len_tmp){
            largest=len_tmp;
        }
    }
    //printf("%d\n",largest);
    ans=0;
    for(size=1;size<=largest;size++){
        for(i=0;i<N;i++){
            for(j=0;j<N;j++){
                if(j!=i){
                    len1=strlen(A[i]);
                    len2=strlen(A[j]);
                    for(k=0;k<size;k++){
                        cmp1[size-1-k]=A[i][len1-1-k];
                        cmp2[k]=A[j][k];
                    }
                    cmp1[size]='\0';
                    cmp2[size]='\0';
                    //printf("%s %s\n",cmp1,cmp2);
                    if(strcmp(cmp1,cmp2)==0){
                        if(ans<=size){
                            ans=size;
                        }
                    }
                }

            }
        }
    }
    printf("%d\n",ans);
}
return 0;
}
