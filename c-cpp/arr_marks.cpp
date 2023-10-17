//write aprogram to enter 6 subject marks of a student and print his/her marks and percentage

#include <stdio.h>
int main(){
    int gained=0, total=600, marks[6];
    for(int i=0; i<=5; i++){
        printf("Enter  subject marks : ");
        scanf("%d", &marks[i]);
        gained += marks[i];
    }
    float perc = (gained/600.0) * 100;
    int prc = perc;
    printf("Gained marks: %d/%d\nPercentage : %d", gained, total, prc);
    return 87;
}
