#include<stdio.h>
#include"Student_marks_and_percentage.h"

int main(void)
{
    char student_names[TOTAL_STUDENT][NAME];  // hold student names
    float quiz_score[TOTAL_STUDENT][TOTAL_QUIZ], quiz_average[TOTAL_STUDENT]; // hold quiz scores and average for all students
    float assignment_score[TOTAL_STUDENT][TOTAL_ASSIGNMENT], assignment_average[TOTAL_STUDENT]; // hold assignment scores and average for all students
    float mid_score[TOTAL_STUDENT][TOTAL_MIDTERM], mid_average[TOTAL_STUDENT]; // hold mid scores and average for all students
    float final_score[TOTAL_STUDENT]; // hold final scores for all students
    float total_average[TOTAL_STUDENT]; // hold total average for all students

    input_student_name(student_names);
    input_quiz_score(student_names,quiz_score);
    input_assignment_score(student_names,assignment_score);
    input_mid_score(student_names,mid_score);
    input_final_score(student_names,final_score);
    get_quiz_average(quiz_score,quiz_average);
    get_assignment_average(assignment_score,assignment_average);
    get_mid_average(mid_score,mid_average);
    calculate_score(quiz_average,assignment_average,mid_average,final_score,total_average);
    print_detail(student_names,quiz_average,assignment_average,mid_average,final_score,total_average);

    return 0;
}

void input_student_name(char names[][NAME])
{
    int i;
    for(i=0;i<TOTAL_STUDENT;i++){
        printf("Student name [%d]> ",i+1);
        gets(names[i]);
    }
}

void input_quiz_score(char names[][NAME], float score[][TOTAL_QUIZ])
{
    printf("\n\n");
    int i,j;
    for(i=0;i<TOTAL_STUDENT;i++){
        printf("## Quiz Scores for Student %s ##\n",names[i]);
            for(j=0;j<TOTAL_QUIZ;j++){
                printf("Quiz %d Score> ",j+1);
                scanf("%f",&score[i][j]);
        }
    printf("\n\n");
    }
}

void input_assignment_score(char names[][NAME], float score[][TOTAL_ASSIGNMENT])
{
    int i,j;
    for(i=0;i<TOTAL_STUDENT;i++){
        printf("## Assignment Scores for Student %s ##\n",names[i]);
            for(j=0;j<TOTAL_ASSIGNMENT;j++){
                printf("Assignment %d Score> ",j+1);
                scanf("%f",&score[i][j]);
        }
    printf("\n\n");
    }
}

void input_mid_score(char names[][NAME], float score[][TOTAL_MIDTERM])
{
    int i,j;
    for(i=0;i<TOTAL_STUDENT;i++){
        printf("## Midterm Scores for Student %s ##\n",names[i]);
            for(j=0;j<TOTAL_MIDTERM;j++){
                printf("Midterm %d Score> ",j+1);
                scanf("%f",&score[i][j]);
        }
    printf("\n\n");
    }
}

void input_final_score(char names[][NAME], float score[])
{
    int i,j;
    for(i=0;i<TOTAL_STUDENT;i++){
        printf("## Final Scores for Student %s ##\n",names[i]);
        printf("Final Score> ");
        scanf("%f",&score[i]);
        printf("\n\n");
    }
}

void get_quiz_average(float score[][TOTAL_QUIZ], float average[])
{
    int i,j;
    float sum;
    for(i=0;i<TOTAL_STUDENT;i++){
        sum = 0;
        for(j=0;j<TOTAL_QUIZ;j++){
            sum = sum + score[i][j];
        }
        average[i] = sum/(float)(TOTAL_QUIZ);
    }
}

void get_assignment_average(float score[][TOTAL_ASSIGNMENT], float average[])
{
    int i,j;
    float sum;
    for(i=0;i<TOTAL_STUDENT;i++){
        sum = 0;
        for(j=0;j<TOTAL_ASSIGNMENT;j++){
            sum = sum + score[i][j];
        }
        average[i] = sum/(float)(TOTAL_ASSIGNMENT);
    }
}

void get_mid_average(float score[][TOTAL_MIDTERM], float average[])
{
    int i,j;
    float sum;
    for(i=0;i<TOTAL_STUDENT;i++){
        sum = 0;
        for(j=0;j<TOTAL_MIDTERM;j++){
            sum = sum + score[i][j];
        }
        average[i] = sum/(float)(TOTAL_MIDTERM);
    }
}

void calculate_score(float quiz_avg[], float assignment_avg[], float mid_avg[], float final_avg[], float average[])
{
    int i,j;
    for(i=0;i<TOTAL_STUDENT;i++){
        average[i] = ((quiz_avg[i]*20)+(assignment_avg[i]*10)+(mid_avg[i]*30)+(final_avg[i]*40))/(float)(100);
    }

}
void print_detail(char names[][NAME], float quiz_avg[], float assignment_avg[], float mid_avg[], float final_avg[], float avg[])
{
    int i;
    printf("##  Student detail  ##");
    printf("\n\n");
    for(i=0;i<TOTAL_STUDENT;i++){
        printf("Name: %s\n",names[i]);
        printf("Quiz Average: %.2f\n",quiz_avg[i]);
        printf("Assignment Average: %.2f\n",assignment_avg[i]);
        printf("Midterm Average: %.2f\n",mid_avg[i]);
        printf("Final Average: %.2f\n",final_avg[i]);
        printf("Total Average: %.2f\n",avg[i]);
    }
    printf("\n\n");
}
