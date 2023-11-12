#include "main.h"

int _print_Char(va_list arg){
    
    char c = va_arg(arg, int);

    _myPutChar(c);
    
    return(1);
}