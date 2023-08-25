// FACULTY STRUCTURE (CASE BASED)

#include <stdio.h>
#include <string.h>

struct faculty {
    char name[50];
    int id;
    char course[50];
    int salary;
};

int main() {
    struct faculty f;

    printf("Enter faculty details:\n");
    printf("Name: ");
    scanf("%s", f.name);
    printf("ID: ");
    scanf("%d", &f.id);
    printf("Course: ");
    scanf("%s", f.course);
    printf("Salary: ");
    scanf("%d", &f.salary);

    printf("\n-------Faculty details-------:\n");
    printf("Name: %s\n", f.name);
    printf("ID: %d\n", f.id);
    printf("Course: %s\n", f.course);
    printf("Salary: %d\n", f.salary);

    return 0;
}

//--------------------------------------------------------------------------------------------------------//

// ARRAY OF STRUCTURE TO READ AND DISPLAY INFO FOR N NUMBER STUDENTS

#include <stdio.h>

struct student {
    char name[50];
    int roll_num;
    int age;
    float marks;
};

int main() {
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student students[n];

    for (i = 0; i < n; i++) {
        printf("Enter the details for student %d:\n", i+1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll_num);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    
    printf("\nDetails of the students:\n");
    for (i = 0; i < n; i++) {
        printf("Student %d:\n", i+1);
        printf("Roll Number: %d\n", students[i].roll_num);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }

    return 0;
}



//--------------------------------------------------------------------------------------------------------//


// ARRAY OF STRUCTURE TO READ AND DISPLAY INFO FOR N NUMBER OF DOCTORS


#include <stdio.h>

struct doctor {
    char name[50];
    char specialization[50];
    int years_of_exp;
    char cont[20];
};

int main() {
    int n, i;
    printf("Enter the number of doctors: ");
    scanf("%d", &n);

    struct doctor doctors[n];

    
    for (i = 0; i < n; i++) {
        printf("Enter the details for doctor %d:\n", i+1);
        printf("Name: ");
        scanf("%s", doctors[i].name);
        printf("Specialization: ");
        scanf("%s", doctors[i].specialization);
        printf("Years of Experience: ");
        scanf("%d", &doctors[i].years_of_exp);
        printf("Contact Number: ");
        scanf("%s", doctors[i].cont);
    }

    
    printf("\nInformation about the doctors:\n");
    for (i = 0; i < n; i++) {
        printf("Doctor %d:\n", i+1);
        printf("Name: %s\n", doctors[i].name);
        printf("Specialization: %s\n", doctors[i].specialization);
        printf("Years of Experience: %d\n", doctors[i].years_of_exp);
        printf("Contact Number: %s\n", doctors[i].cont);
        printf("\n");
    }

    return 0;
}

//--------------------------------------------------------------------------------------------------------//


// ARRAY OF STRUCTURE TO READ AND DISPLAY INFO FOR N NUMBER OF PRODUCTS

#include <stdio.h>

struct product {
    char name[50];
    int price;
    int quantity;
    char manufacturer[50];
    char manufacturing_date[20];
    char expiry_date[20];

};

int main() {
    int n, i;
    printf("Enter the number of products: ");
    scanf("%d", &n);

    struct product products[n];

    for (i = 0; i < n; i++) {
        printf("Enter the details for product %d:\n", i+1);
        printf("Name: ");
        scanf("%s", products[i].name);
        printf("Price: ");
        scanf("%d", &products[i].price);
        printf("Quantity: ");
        scanf("%d", &products[i].quantity);
        printf("Manufacturer: ");
        scanf("%s", products[i].manufacturer);
        printf("Manufacturing Date: ");
        scanf("%s", products[i].manufacturing_date);
        printf("Expiry Date: ");
        scanf("%s", products[i].expiry_date);

    }

    
    printf("\n Details of the products:\n");
    for (i = 0; i < n; i++) {
        printf("Product %d:\n", i+1);
        printf("Name: %s\n", products[i].name);
        printf("Price: %d\n", products[i].price);
        printf("Quantity: %d\n", products[i].quantity);
        printf("Manufacturer: %s\n", products[i].manufacturer);
        printf("Manufacturing Date: %s\n", products[i].manufacturing_date);
        printf("Expiry Date: %s\n", products[i].expiry_date);

        printf("\n");
    }

    return 0;
}


//--------------------------------------------------------------------------------------------------------//


// WAP TO READ DATA OF N NUMBER OF STUDENTS AND DISPLAY THE HIGHEST MARKS VALUE ALONG WITH THE NAME OF STUDENTD WHO HAVE SCORED THOSE MARKS. ALSO DISPLAY THE AVERAGE MARKS SCORED BY ALL THE STUDENTS


#include <stdio.h>

struct student {
    char name[50];
    float marks;
};

int main() {
    int n, i;
    float max_marks = 0, total_marks = 0, avg_marks;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student students[n];

    for (i = 0; i < n; i++) {
        printf("Enter the details for student %d:\n", i+1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);

        
        if (students[i].marks > max_marks) {
            max_marks = students[i].marks;
        }

        total_marks += students[i].marks;
    }

    avg_marks = total_marks / n;

    
    printf("\nHighest marks: %.2f\n", max_marks);
    printf("Students with highest marks:\n");
    for (i = 0; i < n; i++) {
        if (students[i].marks == max_marks) {
            printf("%s\n", students[i].name);
        }
    }

    printf("Average marks: %.2f\n", avg_marks);

    return 0;
}


//--------------------------------------------------------------------------------------------------------//


// WAP TO READ DATA OF N NUMBER OF STUDENTS AND PERFORM LINEAR SEARCH TO DISPLAY INFO OF THE STUDENT BY ROLL NUMBER



#include <stdio.h>

struct student {
    int r_no;
    char name[50];
    int marks;
};

int main() {
    int n, i, search_roll_num;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct student students[n];

    
    for (i = 0; i < n; i++) {
        printf("Enter the details for student %d:\n", i+1);
        printf("Roll Number: ");
        scanf("%d", &students[i].r_no);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%d", &students[i].marks);
    }

    
    printf("\nEnter roll number to search: ");
    scanf("%d", &search_roll_num);

    for (i = 0; i < n; i++) {
        if (students[i].r_no == search_roll_num) {
            printf("\n Details about student with roll number %d:\n", search_roll_num);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %d\n", students[i].marks);
            break;
        }
    }

    if (i == n) {
        printf("\nStudent with roll number %d not found.\n", search_roll_num);
    }

    return 0;
}


