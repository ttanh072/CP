#include <iostream>

using namespace std;

int main()
{

    int tc;
    cin>>tc;

    for (int t = 1; t <= tc; ++t) {
        char s[100001];
        int memory[100]={};
        int index = 0;
        scanf("%s", &s);
        for (int i = 0; s[i]; ++i){
            switch (s[i]){
                case '>':
                    index++;
                    if (index == 100) index = 0;
                    break;
                case '<':
                    --index;
                    if (index == -1) index = 99;
                    break;
                case '+':
                    ++memory[index];
                    if (memory[index] == 256) memory[index] = 0;
                    break;
                case '-':
                    --memory[index];
                    if (memory[index] == -1) memory[index] = 255;
                    break;
                }
        }
        printf("Case %d:", t);
        for (int i = 0; i < 100; ++i)
            printf(" %02X", memory[i]);
        printf("\n");
    }

    return 0;
}
