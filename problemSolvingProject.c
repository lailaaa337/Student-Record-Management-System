#include <stdio.h>
#include <stdlib.h>
//lazem 2a3araf el struct el ha3ml fiha el array
struct student {
    int id;
    char name[30];
    int age;
    float grades[3];
};

//ha3araf el array w el counter el ha3ed bih el students

struct student laila[100];
int counter = 0;

void insert() {
    if (counter <= 100) {//max num of student howa 100 (gowa el struct)
        struct student s;
        printf("Enter Student ID:");
        scanf("%d", &s.id);//bada5al el info fel array beta3et el struct

        printf("Enter Student name:");
        getchar(); // men youtube(standard function that gets a character from the stdin)
        gets(s.name);

        printf("Enter Student age:");
        scanf("%d", &s.age);

        printf("Enter grades for 3 subjects:\n");
        for (int g = 0; g < 3; g++) {  //loop lel grades men 1 le 3
            printf("Course %d:", g + 1);
            scanf("%f", &s.grades[g]);
        }
        laila[counter] = s;  //lazem a3araf variable tani a7ot fih el array
        counter++;    //if student da5al info then counter bey3ed
    } else {
        printf("Maximum number of students reached!\n");
    }
}

void display() {
    for (int i = 0; i < counter; i++) {//loop lel counter
        int g;
        printf("\n Student %d Details\n", i + 1);
        printf("Student ID:%d\n", laila[i].id); //laila[counter] el howa el i ya3ni
        printf("Name:%s\n", laila[i].name);
        printf("Age: %d\n", laila[i].age);
        for (g = 0; g < 3; g++);
        printf("Grades:%f\t%f\t%f\n", laila[i].grades[0], laila[i].grades[1], laila[i].grades[2]);
    }
}

void search()
 {
        int id;
        printf("Enter your Student ID :\n");
        scanf("%d", &id); //enter student id//

    for (int i = 0; i < counter; i++)
        {

        if (laila[i].id == id) {
        printf("Student ID: %d\n", laila[i].id);
        printf("Name: %s\n", laila[i].name);
        printf("Age: %d\n", laila[i].age);
        printf("Grades: ");

        //another loop for grades//

        for (int j = 0; j < 3; j++)
        {
        printf("%f ", laila[i].grades[j]);
        }
        printf("\n");
        return;
    }
}
        printf("Student not found.\n");
}

              //Find maximum and minimum grad //
// ana hkarn el array bta3 grade el students b array el grades kolaha fl                                         minimum mara w elmaximum mara//

void maxim_minim() {
        float minimum = laila[0].grades[0];
        float maximum = laila[0].grades[0];

        for (int i = 0; i < counter; i++)
        {
        for (int j = 0; j < 3; j++)
        {
            if (laila[i].grades[j] < minimum)
            {
                minimum = laila[i].grades[j];
            }

            if (laila[i].grades[j] > maximum)
            {
                maximum = laila[i].grades[j];
            }
        }
    }

        printf("Minimum grade: %f\n", minimum);
        printf("Maximum grade: %f\n", maximum);
}

             // Display grade for each course//

void displaygrade()
 {
        int course;
        printf("Enter course number: ");
        scanf("%d", &course);
        printf("Grades for course %d:\n", course);

        for (int i = 0; i < counter; i++)
        {
        printf("%s: %f\n", laila[i].name, laila[i].grades[course - 1]);
        }
}

void averagegrade() {
        int id;
        float sum = 0;


        printf("Enter student ID: ");
        scanf("%d", &id);

        for (int i = 0; i < counter; i++)
        {
        if (laila[i].id == id)
        {
            for (int j = 0; j < 3; j++)
            {
                sum += laila[i].grades[j];
            }

            break;
        }
        }

        if (sum == 0)
        {
        printf("Student not found\n");
        }
    else
        {
        float avg = sum / 3;  // Assuming there are always 3 grades
        printf("Average grade for student %d is %f\n", id, avg);
        }
}



int main() {
    int choice = 1, option;
    int i;

    while (choice != 0 && i <= 100) {
        printf("1. Insert Student Data\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by ID\n");
        printf("4. Define new Function\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 0:
            printf("Exiting program. Goodbye!\n");
            break;

        case 1:
            insert();
            printf("\n Student added successfully!\n");
            break;

        case 2:
            display();
            break;

        case 3:
            search();
            break;

        case 4:
            printf("Choose an option:\n");
            printf("1. Find max and min grade of Students\n");
            printf("2. Display Grade for each Course\n");
            printf("3. Find the average grade for a student\n");
            scanf("%d", &option);

            if(option == 1)
            {
                maxim_minim();
            }

            else if(option == 2)
            {
                displaygrade();
            }

            else
            {
                averagegrade();
            }
            break;



        default:
            printf("Wrong choice input, please insert a right choice\n");
            break;
        }
    }

    return 0;
}
