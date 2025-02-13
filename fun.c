#include <string.h>
#include <stdlib.h>

int* czy_g_s(char file[8], char ** argv){
    if ((strcmp(*(argv +0), "-path") != 0 ||  strcmp(*(argv + 2), "-domena") != 0) && (strcmp(*(argv + 0), "-domena") != 0 || strcmp(*(argv + 2), "-path") != 0 ))
    {
        int *ret = (int *)calloc(3, sizeof(int));
        *(ret + 0) = -1;
        *(ret + 1) = -1;
        *(ret + 2) = -2;
    }
    //Pierwsyz[0] indesk muwi nam o tym czy argumeny są ok drógi[1] o położeniu -domena a ostatni[2] mówi o położeniu -path
    
    
}