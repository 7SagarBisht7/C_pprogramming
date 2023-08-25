// TGPA CALCULATOR

#include<stdio.h>
int main()
{
	char grade;
	printf("Enter your grade: ");
	scanf("%c",&grade);
	switch(grade)
    {
		case 'O':
		case 'o':
			printf("Your TGPA is 10.");
			break;
		case 'A':
		case 'a':
			printf("Your TGPA is 9.");
			break;
		case 'B':
		case 'b':
			printf("Your TGPA is 8.");
			break;
		case 'C':
		case 'c':
			printf("Your TGPA is 7.");
			break;
		case 'D':
		case 'd':
			printf("Your TGPA is 6.");
			break;
		case 'E':
		case 'e':
			printf("Your TGPA is 5.");
			break;
		case 'F':
		case 'f':
			printf("Your TGPA is 4.");
			break;
		default:
			printf("Please enter a valid grade.");
			break;
		
	}
	return 0;
}





// AREA CALCULATOR

#include <stdio.h>
#include <math.h>
int main() {
    int choice;
    float base, height, radius, length, width, area;

    printf("Enter the shape you want to find the area of:\n");
    printf("1. Triangle\n2. Circle\n3. Square\n4. Rectangle\n5. Parallelogram\n6. Trapezium\n7. Ellipse\n8. Pentagon\n9. Hexagon\n10. Cube\n");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter the base and height of the triangle:\n");
            scanf("%f %f", &base, &height);
            area = 0.5 * base * height;
            printf("The area of the triangle is %.2f square units.", area);
            break;

        case 2:
            printf("Enter the radius of the circle:\n");
            scanf("%f", &radius);
            area = 3.14 * radius * radius;
            printf("The area of the circle is %.2f square units.", area);
            break;

        case 3:
            printf("Enter the length of one side of the square:\n");
            scanf("%f", &length);
            area = length * length;
            printf("The area of the square is %.2f square units.", area);
            break;

        case 4:
            printf("Enter the length and width of the rectangle:\n");
            scanf("%f %f", &length, &width);
            area = length * width;
            printf("The area of the rectangle is %.2f square units.", area);
            break;

        case 5:
            printf("Enter the base and height of the parallelogram:\n");
            scanf("%f %f", &base, &height);
            area = base * height;
            printf("The area of the parallelogram is %.2f square units.", area);
            break;

        case 6:
            printf("Enter the length of the parallel sides and the height of the trapezium:\n");
            scanf("%f %f %f", &base, &length, &height);
            area = 0.5 * (base + length) * height;
            printf("The area of the trapezium is %.2f square units.", area);
            break;

        case 7:
            printf("Enter the major axis and minor axis of the ellipse:\n");
            scanf("%f %f", &length, &width);
            area = 3.14 * length * width;
            printf("The area of the ellipse is %.2f square units.", area);
            break;

        case 8:
            printf("Enter the length of one side of the pentagon:\n");
            scanf("%f", &length);
            area = 0.25 * sqrt(5 * (5 + 2 * sqrt(5))) * length * length;
            printf("The area of the pentagon is %.2f square units.", area);
            break;

        case 9:
            printf("Enter the length of one side of the hexagon:\n");
            scanf("%f", &length);
            area = (3 * sqrt(3) / 2) * length * length;
            printf("The area of the hexagon is %.2f square units.", area);
            break;

        case 10:
            printf("Enter the length of one side of the cube:\n");
            scanf("%f", &length);
            area = 6 * length * length;
            printf("The area of the cube is %.2f square units.", area);
            break;

        default:
            printf("Invalid choice.");
    }

    return 0;
}





// CURRENCY CONVERTOR

#include <stdio.h>

int main() {
  float amount, converted;
  int from, to;

  printf("Enter amount to convert: ");
  scanf("%f", &amount);

  printf("Enter currency to convert from (1 for USD, 2 for EUR, 3 for INR): ");
  scanf("%d", &from);

  printf("Enter currency to convert to (1 for USD, 2 for EUR, 3 for INR): ");
  scanf("%d", &to);

  switch(from) {
    case 1:
      switch(to) {
        case 1:
          converted = amount;
          break;
        case 2:
          converted = amount * 0.94;
          break;
        case 3:
          converted = amount * 82.64;
          break;
        default:
          printf("Invalid currency type");
          return 0;
      }
      break;
    case 2:
      switch(to) {
        case 1:
          converted = amount * 1.06;
          break;
        case 2:
          converted = amount;
          break;
        case 3:
          converted = amount * 87.46;
          break;
        default:
          printf("Invalid currency type");
          return 0;
      }
      break;
    case 3:
      switch(to) {
        case 1:
          converted = amount * 0.012;
          break;
        case 2:
          converted = amount * 0.011;
          break;
        case 3:
          converted = amount;
          break;
        default:
          printf("Invalid currency type");
          return 0;
      }
      break;
    default:
      printf("Invalid currency type");
      return 0;
  }

  printf("%.2f in currency %d is %.2f in currency %d", amount, from, converted, to);

  return 0;
}





// PERIMETER CALCULATOR

#include <stdio.h>

int main() {
    int choice;
    float s1, s2, s3, base, height, radius, length, width, perimeter;

    printf("Perimeter Calculator\n");
    printf("1. Triangle\n");
    printf("2. Rectangle\n");
    printf("3. Circle\n");
    printf("4. Square\n");
    printf("5. Parallelogram\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Enter the length of side 1: ");
            scanf("%f", &s1);
            printf("Enter the length of side 2: ");
            scanf("%f", &s2);
            printf("Enter the length of side 3: ");
            scanf("%f", &s3);
            perimeter = s1 + s2 + s3;
            printf("The perimeter of the triangle is: %f\n", perimeter);
            break;
        case 2:
            printf("Enter the length of the base: ");
            scanf("%f", &base);
            printf("Enter the length of the height: ");
            scanf("%f", &height);
            perimeter = 2 * (base + height);
            printf("The perimeter of the rectangle is: %f\n", perimeter);
            break;
        case 3:
            printf("Enter the radius of the circle: ");
            scanf("%f", &radius);
            perimeter = 2 * 3.14 * radius;
            printf("The perimeter of the circle is: %f\n", perimeter);
            break;
        case 4:
            printf("Enter the length of a side: ");
            scanf("%f", &length);
            perimeter = 4 * length;
            printf("The perimeter of the square is: %f\n", perimeter);
            break;
        case 5:
            printf("Enter the length of the base: ");
            scanf("%f", &base);
            printf("Enter the length of the height: ");
            scanf("%f", &height);
            perimeter = 2 * (base + height);
            printf("The perimeter of the parallelogram is: %f\n", perimeter);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}




// QUADRATIC EQUATION

#include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,d,r1,r2;

    printf("Enter coefficients a,b and c: ");
    scanf("%lf %lf %lf",&a,&b,&c);

    d = b*b - 4*a*c;

    if (d > 0)
    {
        r1 = (-b + sqrt(d)) / (2*a);
        r2 = (-b - sqrt(d)) / (2*a);
        printf("Roots are real and distinct: %.2lf and %.2lf", r1,r2);
    }
    else if (d == 0) {
        r1 = r2 = -b / (2*a);
        printf("Roots are real and equal: %.2lf and %.2lf", r1,r2);
    }
    else {
        double realPart = -b / (2*a);
        double imaginaryPart = sqrt(-d) / (2*a);
        printf("Roots are imaginary: %.2lf + %.2lfi and %.2lf - %.2lfi", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}




// TEMPERATURE CALCULATOR

#include <stdio.h>

int main() {
    float temp, conv;
    char input_scale, output_scale;

    printf("Enter temperature: ");
    scanf("%f %c", &temp, &input_scale);

    printf("Convert to (C/K/F): ");
    scanf(" %c", &output_scale);

    switch (input_scale)
    {
        case 'F':
        case 'f':
            switch (output_scale)
            {
                case 'C':
                case 'c':
                    conv = (temp-32)*5/9;
                    printf("%.2f F = %.2f C\n",temp,conv);
                    break;
                case 'K':
                case 'k':
                    conv = (temp-32)*5/9+273.15;
                    printf("%.2f F = %.2f K\n",temp,conv);
                    break;
                default:
                    printf("Invalid temperature scale");
                    break;
            }
            break;
        case 'C':
        case 'c':
            switch (output_scale)
            {
                case 'F':
                case 'f':
                    conv = temp*9/5+32;
                    printf("%.2f C = %.2f F\n",temp,conv);
                    break;
                case 'K':
                case 'k':
                    conv = temp+273.15;
                    printf("%.2f C = %.2f K\n",temp,conv);
                    break;
                default:
                    printf("Invalid temperature scale");
                    break;
            }
            break;
        case 'K':
        case 'k':
            switch (output_scale)
            {
                case 'F':
                case 'f':
                    conv = (temp-273.15)*9/5+32;
                    printf("%.2f K = %.2f F\n",temp,conv);
                    break;
                case 'C':
                case 'c':
                    conv = temp-273.15;
                    printf("%.2f K = %.2f C\n",temp,conv);
                    break;
                default:
                    printf("Invalid temperature scale");
                    break;
            }
            break;
        default:
            printf("Invalid temperature scale");
            break;
    }

    return 0;
}




//FIBONACCI SERIES(for loop)

#include<stdio.h>     
int main()     
{     
int n1=0,n2=1,n3,i,number;     
printf("Enter the number of elements:");     
scanf("%d",&number);     
printf("\n%d %d",n1,n2);    
for(i=2;i<number;++i)
    {     
        n3=n1+n2;     
        printf(" %d",n3);     
        n1=n2;     
        n2=n3;     
    }   
 return 0;   
}     


//FIBONACCI_(WHILE LOOP)

#include<stdio.h>
int main()
{
    int n,a=0,b=1,i=1,c;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("%d\n%d",a,b);
    while (i<=n-2)
    {
        a=b-a;

        printf("\n%d",b);
        b+=a;


        i+=1;
    }
    return 0;
}




//ARMSTRONG NUMBER (WHILE LOOP)

 
#include <stdio.h> 
int main() { 
   int num, originalNum, rem, res = 0; 
   printf("Enter a three-digit integer: "); 
   scanf("%d", &num); 
   originalNum = num; 

   while (originalNum != 0) 
{ 
       rem = originalNum % 10; 
        
      res += rem* rem * rem; 
      originalNum /= 10; 
   } 
if (res == num) 
       printf("%d is an Armstrong number.", num); 
   else 
       printf("%d is not an Armstrong number.", num); 

   return 0; 
}



// ARMSTRONG NUMBER (FOR LOOP)

#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0, result = 0, power, i;

    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    for (i = originalNum; i != 0; i /= 10) {
        ++n;
    }

    originalNum = num;

    for (i = originalNum; i != 0; i /= 10) {
        remainder = i % 10;
        power = round(pow(remainder, n));
        result += power;
    }

    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}




// PALINDROME (using WHILE LOOP)

#include<stdio.h>
int main(){
int input , num , rev = 0 , rem ;
printf("type tour input here - ");
scanf("%d",&input);
num = input;
while (input != 0){
    rem = input % 10;
    rev = rev*10 + rem;
    input = input / 10; 
}
if(num == rev){
    printf("given input '%d' is a palindrome",num);
}
else{
    printf("your given input '%d' is not a palindrome",num);
}
}




// // PALINDROME(using FOR LOOP)

#include<stdio.h>
int main(){
int input , num , rev = 0 , rem ;
printf("type tour input here - ");
scanf("%d",&input);
num = input;
for (rev = 0 ; input != 0 ;){
    rem = input % 10;
    rev = rev*10 + rem;
    input = input / 10; 
}
if(num == rev){
    printf("given input '%d' is a palindrome",num);
}
else
{
    printf("your given input '%d' is not a palindrome",num);
}
}




// HCF OF TWO NUMBERS

#include <stdio.h>

int main() {
    int num1, num2, i, hcf;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    // Calculate HCF using Euclid's algorithm
    for (i = 1; i <= num1 && i <= num2; ++i) {
        if (num1 % i == 0 && num2 % i == 0) {
            hcf = i;
        }
    }

    printf("HCF of %d and %d is %d\n", num1, num2, hcf);

    return 0;
}




// LCM OF TWO NUMBER

#include <stdio.h>

int main() {
    int num1, num2, max, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Find the maximum of the two numbers
    max = (num1 > num2) ? num1 : num2;

    // Loop until a common multiple is found
    while (1) {
        if (max % num1 == 0 && max % num2 == 0) {
            lcm = max;
            break;
        }
        max++;
    }

    printf("LCM of %d and %d is %d\n", num1, num2, lcm);

    return 0;
}


// PERFECT NUMBER (FOR LOOP)

#include <stdio.h>

int main() {
    int num, i, sum_of_divisors = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum_of_divisors += i;
        }
    }

    if (num == sum_of_divisors) {
        printf("%d is a perfect number\n", num);
    } else {
        printf("%d is not a perfect number\n", num);
    }

    return 0;
}



// PERFECT NUMBER (WHILE LOOP)

#include <stdio.h>

int main() {
    int num, i=1, sum=0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(i<num) {
        if(num%i == 0) {
            sum += i;
        }
        i++;
    }

    if(sum == num) {
        printf("%d is a perfect number.", num);
    } else {
        printf("%d is not a perfect number.", num);
    }

    return 0;
}



// PRIME OR COMPOSITE (FOR LOOP)

#include <stdio.h>

int main() {
    int num, i, flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    for(i = 2; i <= num/2; i++) {
        if(num%i == 0) {
            flag = 1;
            break;
        }
    }

    if(num == 1) {
        printf("1 is neither prime nor composite.");
    } else {
        if(flag == 0) {
            printf("%d is a prime number.", num);
        } else {
            printf("%d is a composite number.", num);
        }
    }

    return 0;
}



// PRIME OR COMPOSITE (WHILE LOOP)

#include <stdio.h>

int main() {
    int num, i=2, flag=0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(i<=num/2) {
        if(num%i == 0) {
            flag = 1;
            break;
        }
        i++;
    }

    if(flag == 0) {
        printf("%d is a prime number.", num);
    } else {
        printf("%d is a composite number.", num);
    }

    return 0;
}




// REVERSE OF NUMBER (FOR LOOP)
#include <stdio.h>
int main() {
   int a,rev=0;
   printf("Enter integer to find reverse: ");
   scanf("%d",&a);
   for(;a>0;a=a/10)
    {
	rev=rev*10+a%10;
   }
   printf("Reverse of given integer is %d.",rev);
   return 0;
}




// REVERSE OF NUMBER (WHILE LOOP)

#include <stdio.h>

int main() {
   	int a,rev=0;
	printf("Enter integer to find reverse: ");
	scanf("%d",&a);
	while(a>0){
		rev=rev*10+a%10;
		a=a/10;
	}
	printf("Reverse of given integer is %d.",rev);
   return 0;
}




// ADD ALL DIGITS OF A NUMBER (WHILE LOOP)

#include <stdio.h>
int main()
{
int n,sum=0;
printf("Enter Number:");
scanf("%d",&n);
while (n!=0)
{
sum=sum+n%10;
n=n/10;
}
 printf("\nThe sum is:%d",sum);
return 0;
}




//ADD ALL DIGITS OF A NUMBER (FOR LOOP)

#include <stdio.h>
int main(){
int n,sum=0,i=1;
printf("Enter the number: ");
scanf("%d",&n);
for (i=1;i<=n;i++)
{
sum=sum+n%10;
n=n/10;
}
printf("\nThe sum is%d",sum);
return 0;
}




//TAX CALCULATOR

#include<stdio.h>
int main(){
	float sal;
	printf("Enter salary per annum: ");
	scanf("%f",&sal);
	if(sal<=300000){
		printf("No tax for you!!");
	}
	else if(300000<sal && sal<=600000){
		printf("Tax is 5 percent which is equal to %.2f",sal*5.0/100.0);
	}
	else if(600000<sal && sal<=900000){
		printf("Tax is 10 percent which is equal to %.2f",sal*10.0/100.0);
	}
	else if(900000<sal && sal<=1200000){
		printf("Tax is 15 percent which is equal to %.2f",sal*15.0/100.0);
	}
	else if(1200000<sal && sal<=1500000){
		printf("Tax is 20 percent which is equal to %.2f",sal*20.0/100.0);
	}
	else{
		printf("Tax is 30 percent which is equal to %.2f",sal*30.0/100.0);
	}
	return 0;
}
