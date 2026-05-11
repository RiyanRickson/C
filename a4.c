// Riyan Rickson Castelino
// Pes2ug25am339
// week 10 program 4
#include<string.h>
#include <stdio.h>

struct Student {
    char usn[20], name[50],res[10],grade,elig[20];
    int m1, m2, m3,tot;
    float att,avg,sch;
};

int main() {
    struct Student s[50];
    int n, i;
    int pass = 0, fail = 0, notElig = 0;
    int max = -1;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i + 1);

        printf("Enter name: ");
        getchar();
        scanf("%s",s[i].name);
        printf("Enter usn: ");
        scanf("%s", s[i].usn);
        printf("Enter marks: ");
        scanf("%d %d %d", &s[i].m1, &s[i].m2, &s[i].m3);
        printf("Enter attendence: ");
        scanf("%f", &s[i].att);

        s[i].tot = s[i].m1 + s[i].m2 + s[i].m3;
        s[i].avg = s[i].tot / 3.0;

        if (s[i].m1 < 35 || s[i].m2 < 35 || s[i].m3 < 35) {
            printf("%s",s[i].res, "Fail");
            fail++;
        } else {
            printf("%s",s[i].res, "Pass");
            pass++;

            if (s[i].avg >= 85) s[i].grade = 'A';
            else if (s[i].avg >= 70) s[i].grade = 'B';
            else if (s[i].avg >= 50) s[i].grade = 'C';
            else s[i].grade = 'D';
        }
        if (s[i].att < 75) {
                sprintf(s[i].elig, "Not Eligible");
                notElig++;
            } else {
                sprintf(s[i].elig, "Eligible");
            }

        if (strcmp(s[i].res, "Pass") == 0 && strcmp(s[i].elig, "Eligible") == 0) {
            if (s[i].avg >= 90 && s[i].att >= 90)
                s[i].sch = 10000;
            else if (s[i].avg >= 80 && s[i].att >= 85)
                s[i].sch = 5000;
            else
                s[i].sch = 0;

            if (max == -1 || s[i].avg > s[max].avg)
                max = i;
        } else {
            s[i].sch= 0;
        }
    }

    printf("\n===== Student Details =====\n");
    for (i = 0; i < n; i++) {
        printf("\nUSN : %s\nName : %s\nMarks : %d, %d, %d\nAttendance : %.2f%%\n",
               s[i].usn, s[i].name, s[i].m1, s[i].m2, s[i].m3, s[i].att);
        printf("Total : %d\nAverage : %.2f\nResult : %s\n",
               s[i].tot, s[i].avg, s[i].res);

        if (s[i].res[0] == 'P')
            printf("Grade : %c\n", s[i].grade);
        else
            printf("Grade : -\n");

        printf("Eligibility : %s\nScholarship : %.2f\n",
               s[i].elig, s[i].sch);
    }

    printf("\n===== Summary =====\n");
    printf("Passed : %d\nFailed : %d\nNot Eligible : %d\n",
           pass, fail, notElig);

    if (max!= -1) {
        printf("\n===== Top Eligible Student =====\n");
        printf("USN : %s\nName : %s\nAverage : %.2f\nAttendance : %.2f%%\n",
               s[max].usn, s[max].name,
               s[max].avg, s[max].att);
    }

    return 0;
}
