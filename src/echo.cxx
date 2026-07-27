#include<cstdio>
#include<cstring>

int main(int argc, char** argv) {
 if(argc < 2) printf(" ");
 else if(strcmp(argv[1], "-v") == 0 ||
 strcmp(argv[1],"--version") == 0 )
{
printf("echo (XUTILS) version 0.1\n");
return 0;
}
for(int i = 1; i < argc; i++)
{
    printf("%s", argv[i]);

    if(i + 1 < argc)
        printf(" ");
}

printf("\n");
}

