#include<stdio.h>
int main()
{
    int m,i,num[100],k,flag,temp,flag_b,temp_b,count,max;
    scanf("%d",&m);
    for(i=0;i<m;i++)
        scanf("%d",&num[i]);
    max=0;
    flag=0;
    flag_b=0;
    count=0;
    temp=0;
    temp_b=0;
    
    for(k=m-1;k>=0;k--){
                        if(flag==0){
                                    if(num[k]>0){
                                                 temp=num[k];
                                                 flag=1;
                                                 }
                                    }
                        else {
                             if(flag_b==0){
                                           if(num[k]>0){
                                                        temp_b=num[k];
                                                        flag_b=1;
                                                        }
                                           }
                             count+=num[k];
                             if(count>=0)
                             temp+=count;
                             else {
                                  temp=temp_b;
                                  flag_b=0;
                                  }
                             }
                        if(temp>max)
                        max=temp;
                        }
    if(flag==0){
                max=num[0];
                for(k=1;k<m;k++)
                if(max<num[k])
                max=num[k];
                }
    printf("%d",max);
    return 0;
                                  
                                  
                                  
    
                    
    }
