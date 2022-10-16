#include <stdio.h>

int main(void)
{
    char programkod[]="[ThisprogramprintsSierpinskitriangleon80-columndisplay.]>++++[<++++++++>-]>++++++++[>++++<-]>>++>>>+>>>+<<<<<<<<<<[-[->+<]>[-<+>>>.<<]>>>[[->++++++++[>++++<-]>.<<[->+<]+>[->++++++++++<<+>]>.[-]>]]+<<<[-[->+<]+>[-<+>>>-[->+<]++>[-<->]<<<]<<<<]++++++++++.+++.[-]<]+++++*****Made*By:*NYYRIKKI*2002*****";
    signed char szalag[32768] = {0};
    int p = 0, x;
    for(x = 0;programkod[x] != '\0';x++){
        switch(programkod[x]){
            case '<':
                if(!p){
                    printf("Hiba!");
                    return 1;
                }
                p--;
                break;
            case '>':
                if(p == 32767){
                    printf("Hiba!");
                    return 1;
                }
                p++;
                break;
            case '+':
                szalag[p]++;
                break;
            case '-':
                szalag[p]--;
                break;
            case '.':
                printf("%c",szalag[p]);
                break;
            case ',':
                if((szalag[p] = getchar()) == EOF){
                    szalag[p] = -1;
                }
                break;
            case '[':
                if(!szalag[p]){
                    int ciklus = 1;
                    while(ciklus){
                        x++;
                        if(programkod[x] == ']')
                            ciklus--;
                        else if(programkod[x] == '[')
                            ciklus++;
                        else if(programkod[x] == '\0'){
                            printf("Hiba!");
                            return 1;
                        }
                    }
                }
                break;
            case ']':
                if(szalag[p]){
                    int ciklus = 1;
                    while(ciklus){
                        x--;
                        if(programkod[x] == '[')
                            ciklus--;
                        else if(programkod[x] == ']')
                            ciklus++;
						else{
                            printf("Hiba!");
                            return 1;
                    }
                }
                break;
        }
    }
    return 0;
}
