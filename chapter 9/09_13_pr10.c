#include <stdio.h>

typedef struct time{
    int min;
    int hour;
}time;

void display(time t){
printf("The time is:- %d:%d\n",t.min,t.hour);
}
int timeCmp(time t1, time t2){
        // Make decision on the basis of hour comparison
        if(t1.hour>t2.hour){
            return 1;
        }
        if(t1.hour<t2.hour){
            return -1;
        }
         // Make decision on the basis of min comparison
        if(t1.min>t2.min){
            return 1;
        }
        if(t1.min<t2.min){
            return -1;
        }
        
        return 0;
}
int main()
{
    time t1 = {10, 21};
    time t2 = {18, 00};
    display(t1);
    display(t2);
    int a = timeCmp(t1, t2);
    printf("Time comparison function returns: %d",a);
    return 0;
}