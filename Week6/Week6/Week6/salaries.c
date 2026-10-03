#include <stdio.h>
int main(){
    float salaries[50], total=0, average, highest, lowest, search;
    int found=0;
    for(int i=0;i<50;i++){
        printf("Enter salary %d: ", i+1);
        scanf("%f", &salaries[i]);
        total+=salaries[i];
    }
    printf("\nAll salaries:\n");
    for(int i=0;i<50;i++) printf("%.2f ", salaries[i]);

    highest=salaries[0]; lowest=salaries[0];
    for(int i=1;i<50;i++){
        if(salaries[i]>highest) highest=salaries[i];
        if(salaries[i]<lowest) lowest=salaries[i];
    }
    average=total/50;
    printf("\nAverage: %.2f\nHighest: %.2f\nLowest: %.2f\n", average, highest, lowest);

    printf("Enter salary to search: ");
    scanf("%f", &search);
    for(int i=0;i<50;i++){
        if(salaries[i]==search){ printf("Found at employee %d\n", i+1); found=1; break; }
    }
    if(!found) printf("Not found\n");
    return 0;
}