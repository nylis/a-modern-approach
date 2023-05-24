#include <stdio.h>

int main(void)
{
    int i = 1;

    switch (i % 3) {
        case 0: printf("zero");
        case 1: printf("one");
        case 2: printf("two");
    }
}

// 3 doesnt fit in 1 as an int, so it just returns the 1
// without a breakm switch goes through every case starting from
// the matched integer