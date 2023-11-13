// c program that outputs that prints out grade math211 cmp 211 gst 211
// also calculate the average score
// input your score in GST 211 CMP 211 MATH 211
// print out total and average score 
// Based on the average score output your garde
// A=70-100; B=60-69; C=50-59; D=45-49; E=40-44; F=0-39;


#include <stdio.h>

int main() {
  int Math211, Gst211, Cmp211;

  // Input scores from user
  printf("Enter score for Math 211: ");
  scanf("%d", &Math211);

  printf("Enter score for Gst 211: ");
  scanf("%d", &Gst211);

  printf("Enter score for Cmp 211: ");
  scanf("%d", &Cmp211);

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

  // Display grades for each subject
  printf("\n");
  printf("Math 211 Grade: %c\n", Math211Grade);
  printf("Gst 211 Grade: %c\n", Gst211Grade);
  printf("Cmp 211 Grade: %c\n", Cmp211Grade);

  return 0;
}
