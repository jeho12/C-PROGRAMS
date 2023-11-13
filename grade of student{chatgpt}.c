// c program that outputs that prints out grade math211 cmp 211 gst 211
// also calculate the average score
// input your score in GST 211 CMP 211 MATH 211
// print out total and average score 
// Based on the average score output your garde
// A=70-100; B=60-69; C=50-59; D=45-49; E=40-44; F=0-39;

#include <stdio.h>

// Function to calculate the grade for a subject
char calculateGrade(float score) {
    if (score >= 70) {
        return 'A';
    } else if (score >= 60) {
        return 'B';
    } else if (score >= 50) {
        return 'C';
    } else if (score >= 45) {
        return 'D';
    } else if (score >= 40) {
        return 'E';
    } else {
        return 'F';
    }
}

int main() {
    float gst211, cmp211, math211;
    char gst_grade, cmp_grade, math_grade;
    float total, average;
    char average_grade;

    // Input scores for GST 211, CMP 211, and MATH 211
    printf("Enter your score for GST 211: ");
    scanf("%f", &gst211);
    gst_grade = calculateGrade(gst211);

    printf("Enter your score for CMP 211: ");
    scanf("%f", &cmp211);
    cmp_grade = calculateGrade(cmp211);

    printf("Enter your score for MATH 211: ");
    scanf("%f", &math211);
    math_grade = calculateGrade(math211);

    // Calculate total and average scores
    total = gst211 + cmp211 + math211;
    average = total / 3.0;
    average_grade = calculateGrade(average);

    // Output the information in a table
    printf("\nGrade Report\n");
    printf("+-----------------+-------+--------+\n");
    printf("|    Subject      | Score | Grade  |\n");
    printf("+-----------------+-------+--------+\n");
    printf("|   GST 211       | %.2f  |   %c   |\n", gst211, gst_grade);
    printf("|   CMP 211       | %.2f  |   %c   |\n", cmp211, cmp_grade);
    printf("|   MATH 211      | %.2f  |   %c   |\n", math211, math_grade);
    printf("|   Total         | %.2f  |        |\n", total);
    printf("|   Average       | %.2f  |   %c   |\n", average, average_grade);
    printf("+-----------------+-------+--------+\n");

    return 0;
}

