#include <termios.h>
#include <unistd.h>
#include <termio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>



struct termios orig_terminos;

void disableRawMode(){
    tcsetattr(STDIN_FILENO,TCSAFLUSH,&orig_terminos);
}

void enableRawMode(){
    tcgetattr(STDIN_FILENO,&orig_terminos);
    atexit(disableRawMode);

    struct termios raw = orig_terminos;
    
    tcgetattr(STDERR_FILENO,&raw);
    raw.c_lflag &= ~(ECHO | ICANON);

    tcsetattr(STDERR_FILENO,TCSAFLUSH, &raw);

}

int main(){
    enableRawMode();

    char c;

    while(read(STDIN_FILENO,&c,1)==1 && c!='q'){
        if(iscntrl(c)){
            printf("%d\n",c);
        }
        else{
            printf("%d('%c')\n",c,c);
        }
    }
    return 0;
}
