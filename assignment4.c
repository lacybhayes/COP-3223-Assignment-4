/*LACY H 
Intro to C
11/6/20 
ASSIGNMENT 4 - FIRST FUNCTIONS*/ 
  
/*Purpose of PART A = Write a function that takes an array of ints, and the size of the array - another int.  It also returns a double. Return a double that is the average of the values in the array. 
Purpose of PART B = Write a function that takes one double parameter, and returns a char. The parameter represents a grade, and the char represents the corresponding letter grade.  
Purpose of Part C = Write a function that takes 3 int arguments and returns the largest of the 3.*/ 
  
#include <stdio.h> 
// PART A: function taking an array of ints and the size of the array 
double average(); 
  
// PART B: function taking in a double 
char alpha(double); 
  
// PART C: function taking in three ints 
int largef(int, int, int); 
  
  
  
  
  
int main() { 
// PART A: declaring int variable 
double val; 
  
val = average(); 
  
// PART A: printing the average of the elements in the array 
printf("Array Average: %lf\n\n\n", val); 
  
  
  
  
  
// PART B: declaring variables to represent the numerical grade and letter grade 
double num_grade; 
char a_grade; 
  
// PART B: scanning for user to input their numerical grade  
printf("Please enter your numerical grade: "); 
scanf("%lf", &num_grade); 
  
a_grade = alpha(num_grade); 
  
// PART B: printing letter grade results 
printf("Your letter grade is: %c\n\n\n", a_grade); 
  
  
  
  
  
// PART C: declaring variables for three integers 
int x, y, z, large; 
  
// PART C: scanning for user to input three numerical values 
printf("Please enter three numerical values: "); 
scanf("%d %d %d", &x, &y, &z); 
  
large = largef(x, y, z); 
  
// PART C: printing the largest integer value 
printf("The largest value is %d", large); 
  
return 0; 
} 
  
  
  
  
  
double average() { 
  
// PART A: declaring variables for three ints and one double 
int i, w, sum; 
double avg; 
  
// PART A: scanning for user to input how many elements will be in their array 
printf("How many elements will be in the array? "); 
scanf("%d", &w); 
  
// PART A: scanning for user to input array elements by using a for loop 
int a[w]; 
  
printf("Please enter array element/s: "); 
for(i = 0; i < w; i++) { 
    scanf("%d", &a[i]); 
	sum += a[i];     
} 
// PART A: returning the average of the array elements 
avg = sum/w; 
return avg;     
} 
  
  
  
  
  
/* PART B Grading Scheme:  
                	90-100 = A 
                     
                	80-89 = B 
                     
                	70-79 = C 
                     
                	60-69 = D 
                     
                	0-60 = F 
*/ 
  
char alpha(double x) { 
  
// PART B: if statement to determine what letter grade is given **note a char value is returned** 
if(x >= 90 && x <= 100) 
 	return 'A'; 
      
else if(x >= 80 && x <= 89) 
 	return 'B'; 
      
else if(x >= 70 && x<= 79) 
 	return 'C'; 
      
else if(x >= 60 && x<= 69) 
 	return 'D'; 
  
else if(x > 100 || x < 0) 
    printf("Your numerical grade can only range from 0-100. Please try again.\n"); 
       
else 
 	return 'F';     
}          
  
  
  
  
  
int largef(int a, int b, int c) { 
     
// PART C: if statement to determine the largest integer value     
if(a > b && a > c) 
	return a; 
     
else if(b > c)     
	return b; 
     
else 
	return c; 
} 

