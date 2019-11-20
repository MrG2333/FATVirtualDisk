#include "filesys.h"
#include <stdio.h>

int main()
{

    format();
    mymkdir("/myfirstdir/myseconddir/mythirddir");
    mylistdir("/myfirstdir/myseconddir");
    writedisk("virtualdiskB3_B1");

return 0;
}
