#include <stdio.h>

int main() {
    char name[2][50];
    double math_score[2], physics_score[2], chemistry_score[2];

    printf("请分别输入姓名、数学分数、物理分数和化学分数：\n");
    for (int i = 0; i < 2; i++) {
        scanf("%s %lf %lf %lf", name[i], &math_score[i], &physics_score[i], &chemistry_score[i]);
    }

    printf("*******************************************************************************************************\n");
    printf("NAME\tMATH\tPHYSICS\tCHEMISTRY\tSUM\tAVERAGE\n");

    for (int i = 0; i < 2; i++) {
        double sum = math_score[i] + physics_score[i] + chemistry_score[i];
        double average = sum / 3.0;
        printf("%4s%10.3f %10.3f %8.3f %11.3f %8.3f\n", name[i], math_score[i], physics_score[i], chemistry_score[i], sum, average);
    }  

    printf("*******************************************************************************************************\n");

    return 0;
}