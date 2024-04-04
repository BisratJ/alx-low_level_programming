// Online C compiler to run C program online
#include <stdio.h>

int _islower(int c){
    if(c >= 'a' && c <= 'z'){
      return(1);  
    }
    else{
        return(0);
    }
}


int main() {
    // Write C code here
    char ltr = 'A';
    int is_lower = _islower((int)ltr);
    printf("%d", is_lower);
    return 0;
}
