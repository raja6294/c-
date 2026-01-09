// WAP TO PRINT REVERSE OF A GIVEN NUMBER AND STORE IT.
#include <stdio.h>

int main() {
  int n;
  printf("enter a number:");
  scanf("%d",&n);
  int r=0;
  while(n>0){           //let us take a number 1234    
     r=r+(n%10);        //r=0+(1234%10)=0+4=4,  next loop->  r=40+(123%10)=43,
      r=r*10;           //r=4*10=40,                        r=43*10=430,
      n=n/10;           //n=1234/10=123,                   n=123/10=12,
                        //by this format the ans will come 43210,to remove the extra zero we have to do r/10 at last.or swap the two lines
  }                                     //r=r*10      this will be first line
  r=r/10;                                      //r=r+(n%10)   this will be second 
  printf("the reverse number is %d",r);
  
    return 0;
}