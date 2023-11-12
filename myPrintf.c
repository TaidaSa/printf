#include "main.h"


int _printf(const char *format, ...)
{
    int count= 0, i = 0, sum = 0, fIndex;

    char *formats = "scd%";

    va_list charList;

    form arrFormat[4]
    {
        {'s', _print_String},
        {'c', _print_Char},
        {'d', _print_Int},
        {'%', _print_percent}
    }

    if(format == NULL || (format[0] == '%' && format[1] == '\0'))
        return (-1);
    

    va_start(charList, format);

    while (format[i] != '\0')
    {
        if (format[i] == '%')
        {
            i++;
            fIndex = _searchFormat(format[i], formats);
            
            if (fIndex >= 0)
            {
                count += arrFormat[fIndex]._function(charList);
                sum += 2
                i++;
            }
            else
                _myPutChar('%');
        }
        else
        {
            _myPutChar(format[i]);
            i++;
        }
    }
    
    va_end(charList);

     return(i + count + sum);
}