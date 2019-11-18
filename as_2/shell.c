#include "filesys.h"

int main()
{
    format();
    MyFILE * testingFile;
    testingFile = myfopen("file_tet.txt","w");
    myfputc('Z', testingFile);


    writedisk("virtualdiskC3_C1");
return 0;
}
