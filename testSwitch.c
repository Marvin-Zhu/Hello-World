#include <stdio.h>

int main(int argc, char *argv[])
{
    int tmp = 4;
    int val = tmp;
    switch(tmp)
    {
        case 1:
        {
            val++;
            break;
        }
        case 2:
        {
            val++;
            break;
        }
        default:
        {
            val++;
            //break;
        }
        case 3:
        {
            val++;
            //break;
        }
        case 10:
        {
            val++;
            break;
        }
    }
    printf("val = %d\n", val);
    return 0;
}
