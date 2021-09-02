#include <stdio.h>
#include <stdlib.h>
//Returns the max count of each course
int maxCourseMarks(int* arr, int N)
{
    int max = arr[0];

    for (int  i = 1; i < N; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    
    return max;

}

int main(int argc, char const *argv[])
{
    int* Sub1 = NULL;
    int* Sub2 = NULL;
    int* Sub3 = NULL;
    int* Sub4 = NULL;
    int* Sub5 = NULL;
    int* Sub6 = NULL;

    int N;

    printf("Enter the number of students: ");
    scanf("%d", &N);

    Sub1 = malloc(N * sizeof(Sub1));
    Sub2 = malloc(N * sizeof(Sub2));
    Sub3 = malloc(N * sizeof(Sub3));
    Sub4 = malloc(N * sizeof(Sub4));
    Sub5 = malloc(N * sizeof(Sub5));
    Sub6 = malloc(N * sizeof(Sub6));

    printf("Enter MArks of Sub1: ");
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &Sub1[i]);
            if(Sub1[i] > 100 || Sub1[i] < 0) {printf("Invalid Marks\n"); break;}
            
        }
    printf("Enter MArks of Sub2: ");
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &Sub2[i]);
            if(Sub2[i] > 100 ||Sub2[i] < 0) {printf("Invalid Marks\n"); break;}
        }
    printf("Enter MArks of Sub3: ");
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &Sub3[i]);
            if(Sub3[i] > 100 || Sub3[i] < 0) {printf("Invalid Marks\n"); break;}
        }
    printf("Enter MArks of Sub4: ");
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &Sub4[i]);
            if(Sub4[i] > 100 || Sub4[i] < 0) {printf("Invalid Marks\n"); break;}
        }
    printf("Enter MArks of Sub5: ");
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &Sub5[i]);
            if(Sub5[i] > 100 || Sub5[i] < 0) {printf("Invalid Marks\n"); break;}
        }
    printf("Enter MArks of Sub6: ");
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &Sub6[i]);
            if(Sub6[i] > 100 || Sub6[i] < 0) {printf("Invalid Marks\n"); break;}
        }
/*
    int Sub1[] = {16,99,63,84,95,69};
    int Sub2[] = {13,22,31,42,54,62};
    int Sub3[] = {71,23,31,41,25,36};
    int Sub4[] = {71,62,53,47,85,96};
    int Sub5[] = {61,72,83,84,75,66};
    int Sub6[] = {71,82,63,54,45,66};
    int N = 6;
  */
    printf("Maximum course marks in each subject is as follows\n");
    printf("S1 : %d\n \
            S2 : %d\n \
            S3 : %d\n \
            S4 : %d\n \
            S5 : %d\n \
            S6 : %d", maxCourseMarks(Sub1, N), maxCourseMarks(Sub2, N), maxCourseMarks(Sub3, N)
                    , maxCourseMarks(Sub4, N), maxCourseMarks(Sub5, N), maxCourseMarks(Sub6, N));
    
    return 0;
}
