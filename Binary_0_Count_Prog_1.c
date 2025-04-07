#include<stdio.h>

int main()
{
    int a = 0x500,max_cnt=0,cnt=0,pb=0;

    while( a!=0 ) {
        if(a&1) {
           printf("cnt:%d \n",cnt);
           cnt = 0;
           pb = 1;
        } else {
            cnt++;
            printf("cnt:%d max_cnt:%d pb:%d \n",cnt, max_cnt, pb);
            if(pb!=0)
            if(max_cnt<cnt)
                max_cnt = cnt;
        }
        a>>=1;
    }
    printf("max_cnt is %d\n", max_cnt);
}