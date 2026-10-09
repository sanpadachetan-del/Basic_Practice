// #include<stdio.h>
// int factorial(int n){
//     if(n==1 || n==0) return 1;
//   int factans= n+factorial(n-1);
//   return factans;
// }
// int main(){
//     int n;
//     printf("{etern the number }");
//     scanf("%d",&n);
//     int fact=factorial(n);
//     printf("%d",fact);

//         return 0; 
//     }
// #include<stdio.h>
// struct record{
//   int number;
//   char name[20];
//   float marks;
//   double record;
// }
// main(){ FILE*fp;
//   struct record s;
//    printf("enter number\n");
//   scanf("%d",& s.number);
//   printf("entr name \n");
//   scanf("%c",s.name);
//   printf("enter marks\n");
//   scanf("%f",s.marks);
//   printf("record\n");
//   scanf("%d",s.record);
//   printf("recorf");
//   printf("%d %d %d %d",s.number,s.name,s.marks,s.record);
// fclose(fp);
// return ;
// }#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_TASKS 100
#define MAX_LEN 100
#define FILENAME "tasks.txt"

typedef struct {
    char description[MAX_LEN];
    int done;
} Task;

Task tasks[MAX_TASKS];
int taskCount = 0;

// Load tasks from file
void loadTasks() {
    FILE *file = fopen(FILENAME, "r");
    if (file == NULL) return;

    while (fscanf(file, "%[^;];%d\n", tasks[taskCount].description, &tasks[taskCount].done) == 2) {
        taskCount++;
    }

    fclose(file);
}

// Save tasks to file
void saveTasks() {
    FILE *file = fopen(FILENAME, "w");
    if (file == NULL) {
        printf("Error saving tasks!\n");
        return;
    }

    for (int i = 0; i < taskCount; i++) {
        fprintf(file, "%s;%d\n", tasks[i].description, tasks[i].done);
    }

    fclose(file);
}

// Add a task
void addTask() {
    if (taskCount >= MAX_TASKS) {
        printf("Task limit reached!\n");
        return;
    }

    printf("Enter task description: ");
    getchar();  // clear newline
    fgets(tasks[taskCount].description, MAX_LEN, stdin);
    tasks[taskCount].description[strcspn(tasks[taskCount].description, "\n")] = 0;
    tasks[taskCount].done = 0;
    taskCount++;

    printf("Task added.\n");
}

// View tasks
void listTasks() {
    if (taskCount == 0) {
        printf("No tasks.\n");
        return;
    }

    for (int i = 0; i < taskCount; i++) {
        printf("%d. [%c] %s\n", i + 1, tasks[i].done ? 'X' : ' ', tasks[i].description);
    }
}

// Mark task as done
void completeTask() {
    int num;
    listTasks();
    printf("Enter task number to complete: ");
    scanf("%d", &num);
    if (num < 1 || num > taskCount) {
        printf("Invalid task number.\n");
        return;
    }

    tasks[num - 1].done = 1;
    printf("Task marked as complete.\n");
}

// Menu
void menu() {
    int choice;

    do {
        printf("\n--- Task Manager ---\n");
        printf("1. Add Task\n");
        printf("2. View Tasks\n");
        printf("3. Complete Task\n");
        printf("4. Save and Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addTask(); break;
            case 2: listTasks(); break;
            case 3: completeTask(); break;
            case 4: saveTasks(); printf("Goodbye!\n"); break;
            default: printf("Invalid choice.\n");
        }
    } while (choice != 4);
}

// Main
int main() {
    loadTasks();
    menu();
    return 0;
}
