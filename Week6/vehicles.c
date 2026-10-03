#include <stdio.h>
#include <string.h>
int main(){
    char reg[20][20], search[20];
    int found=0;
    for(int i=0;i<20;i++){ printf("Enter reg %d: ", i+1); scanf("%s", reg[i]); }
    printf("\nAll regs:\n");
    for(int i=0;i<20;i++) printf("%s\n", reg[i]);
    printf("Enter reg to search: ");
    scanf("%s", search);
    for(int i=0;i<20;i++) if(strcmp(reg[i], search)==0){ printf("Found at %d\n", i+1); found=1; break; }
    if(!found) printf("Not found\n");
    return 0;
}