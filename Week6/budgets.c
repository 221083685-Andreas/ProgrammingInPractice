#include <stdio.h>
int main(){
    float budgets[10], total=0, average, temp;
    for(int i=0;i<10;i++){ printf("Enter budget %d: ", i+1); scanf("%f", &budgets[i]); total+=budgets[i]; }
    average=total/10;
    printf("\nTotal: %.2f Average: %.2f\n", total, average);
    for(int i=0;i<9;i++)
        for(int j=0;j<9-i;j++)
            if(budgets[j]>budgets[j+1]){ temp=budgets[j]; budgets[j]=budgets[j+1]; budgets[j+1]=temp; }
    printf("Sorted:\n");
    for(int i=0;i<10;i++) printf("%.2f ", budgets[i]);
    return 0;
}