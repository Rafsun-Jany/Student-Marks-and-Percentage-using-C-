#define NAME 30
#define TOTAL_STUDENT 2
#define TOTAL_QUIZ 3
#define TOTAL_ASSIGNMENT 3
#define TOTAL_MIDTERM 1
#define QUIZ_WEIGHT 20
#define ASSIGNMENT_WEIGHT 10
#define MID_WEIGHT 30
#define FINAL_WEIGHT 40

/*
*   Input student name in names.
*   It takes names as output array which is an array of strings.
*   Each row represent a student name.
*/
void input_student_name(char names[][NAME]);

/*
*   Input quiz scores for each student.
*   It takes names as input array which is an array of strings and score as output array which is a 2D array.
*   Each row in names represents quiz scores for the same student in names.
*/
void input_quiz_score(char names[][NAME], float score[][TOTAL_QUIZ]);

/*
*   Input assignment scores for each student.
*   It takes names as input array which is an array of strings and score as output array which is a 2D array.
*   Each row in score represents assignment scores for the same student in names.
*/
void input_assignment_score(char names[][NAME], float score[][TOTAL_ASSIGNMENT]);

/*
*   Input mid scores for each student.
*   It takes names as input array which is an array of strings and score as output array which is a 2D array.
*   Each row in score represents mid scores for the same student in names.
*/
void input_mid_score(char names[][NAME], float score[][TOTAL_MIDTERM]);

/*
*   Input final score for each student.
*   It takes names as input array which is an array of strings and score as output array.
*   Each element in score represents final score for the same student in names.
*/
void input_final_score(char names[][NAME], float score[]);


/*
*   Calculate quiz average for each student.
*   It takes score as input array which is a 2D array and average as output array.
*   Each element in average represents quiz average for the each student.
*/
void get_quiz_average(float score[][TOTAL_QUIZ], float average[]);

/*
*   Calculate assignment average for each student.
*   It takes score as input array which is a 2D array and average as output array.
*   Each element in average represents assignment average for the each student.
*/
void get_assignment_average(float score[][TOTAL_ASSIGNMENT], float average[]);

/*
*   Calculate mid average for each student.
*   It takes score as input array which is a 2D array and average as output array.
*   Each element in average represents mid average for the each student.
*/
void get_mid_average(float score[][TOTAL_MIDTERM], float average[]);

/*
*   Calculate total average for each student.
*   It takes average for quiz, assignment, mid and final as input array and average as output array.
*   Each element in average represents total average for the each student.
*/
void calculate_score(float quiz_avg[], float assignment_avg[], float mid_avg[], float final_avg[], float average[]);

//void test_print(char names[][NAME], float quiz_avg[], float assignment_avg[], float mid_avg[], float final_avg[], float avg[]);

/*
*   Print total detail for each student.
*   It takes student names and average for quiz, assignment, mid, final and total as array.
*   Each element in the arrays represents detail for the each student.
*/
void print_detail(char names[][NAME], float quiz_avg[], float assignment_avg[], float mid_avg[], float final_avg[], float avg[]);
