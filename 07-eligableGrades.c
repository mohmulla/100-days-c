// program that finds eligablity of grades
//

#include <stdio.h>

int main()
{
   // declare variables
    int math;
    int phys;
    int chem;

    void CompareGrades(int math, int phys, int chem);
    
    // take input
    printf("math:");
    scanf("%i", &math);

    printf("phys:");
    scanf("%i", &phys);

    printf("chem:");
    scanf("%i", &chem);

    // compare
    CompareGrades( math,  phys,  chem);

    
    return 0;
}

void CompareGrades(int math, int phys, int chem)
{
    if (math >= 65 && phys >= 55 && chem >= 50 && (math + phys + chem) >= 190)
        printf("eligiable\n");
    else if (math + phys >= 140)
        printf("eligiable\n");
    else
        printf("not eligiable");
}
