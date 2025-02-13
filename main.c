#include "index.h"
#include "fun.c"




int main(int argc, char** argv){
    /*
        Argumenty:
            -domena "domena.local"
            -path "\\domena.local\path\.."
    */

   if (argc != 4)
   {
    //Program zawsze otrzyma 4 argumenty jeśli czegoś brakuje lub jest nadpisane to należy unikać wykonania programu
    return -1;
   }
   
    int* ret = (int *)calloc(3, sizeof(int));
    if (*(ret + 0) == -1)
    {
        //Jest błąd w argumentach
        return -1;
    }
    


    free(ret);
    return 0;
}