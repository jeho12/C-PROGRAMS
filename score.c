// Name: IBENYE JEHOSHAPHAT . T
// DEPARTMENT : MATHEMATICAL SCIENCE{COMPUTER SCIENCE}
// MATRIC NUMBER : AUL/CMP/22/043 200LEVEL
// ASSIGNMENT/CLASS-WORK


// c program that outputs that prints out grade math211 cmp 211 gst 211
// also calculate the average score
// input your score in GST 211 CMP 211 MATH 211
// print out total and average score 
// Based on the average score output your garde
// A=70-100; B=60-69; C=50-59; D=45-49; E=40-44; F=0-39;




#include <stdio.h>

int main() {
  int Math211, Gst211, Cmp211;
  int totalScore = 0;
  float averageScore;

  // Input scores from user
  printf("Enter score for Math 211: ");
  scanf("%d", &Math211);

  printf("Enter score for Gst 211: ");
  scanf("%d", &Gst211);

  printf("Enter score for Cmp 211: ");
  scanf("%d", &Cmp211);

  // Calculate total score
  totalScore = Math211 + Gst211 + Cmp211;

  // Calculate average score
  averageScore = (float)totalScore / 3;

  // Determine grade for each subject
  char Math211Grade, Gst211Grade, Cmp211Grade;

  if (Math211 >= 70 && Math211 <= 100) {
    Math211Grade = 'A';
  } else if (Math211 >= 60 && Math211 <= 69) {
    Math211Grade = 'B';
  } else if (Math211 >= 50 && Math211 <= 59) {
    Math211Grade = 'C';
  } else if (Math211 >= 45 && Math211 <= 49) {
    Math211Grade = 'D';
  } else {
    Math211Grade = 'F';
  }

  if (Gst211 >= 70 && Gst211 <= 100) {
    Gst211Grade = 'A';
  } else if (Gst211 >= 60 && Gst211 <= 69) {
    Gst211Grade = 'B';
  } else if (Gst211 >= 50 && Gst211 <= 59) {
    Gst211Grade = 'C';
  } else if (Gst211 >= 45 && Gst211 <= 49) {
    Gst211Grade = 'D';
  } else {
    Gst211Grade = 'F';
  }

  if (Cmp211 >= 70 && Cmp211 <= 100) {
    Cmp211Grade = 'A';
  } else if (Cmp211 >= 60 && Cmp211 <= 69) {
    Cmp211Grade = 'B';
  } else if (Cmp211 >= 50 && Cmp211 <= 59) {
    Cmp211Grade = 'C';
  } else if (Cmp211 >= 45 && Cmp211 <= 49) {
    Cmp211Grade = 'D';
  } else {
    Cmp211Grade = 'F';
  }

  // Determine overall grade based on average score
  char overallGrade;

  if (averageScore >= 70 && averageScore <= 100) {
    overallGrade = 'A';
  } else if (averageScore >= 60 && averageScore <= 69) {
    overallGrade = 'B';
  } else if (averageScore >= 50 && averageScore <= 59) {
    overallGrade = 'C';
  } else if (averageScore >= 45 && averageScore <= 49) {
    overallGrade = 'D';
  } else {
    overallGrade = 'F';
  }

  // Display results in tabular form
  printf("\n");
  printf("| Subject | Score | Grade |");
  printf("\n|-------|-------|--------|");
  printf("\n|Math 211| %d  | %c |", Math211, Math211Grade);
  printf("\n| Gst 211 | %d | %c |", Gst211, Gst211Grade);
  printf("\n| Cmp 211 | %d | %c |", Cmp211, Cmp211Grade);
  
  return 0;
}
