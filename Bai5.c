#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_STUDENTS 50
#define MAX_NAME_LENGTH 49
#define MAX_PHONE_LENGTH 14

typedef struct {
    int id;
    char name[MAX_NAME_LENGTH + 1];
    int age;
    char phoneNumber[MAX_PHONE_LENGTH + 1];
} Student;

void printStudents(Student students[], int size) {
    for (int i = 0; i < size; i++) {
        printf("ID: %d, Name: %s, Age: %d, Phone Number: %s\n", students[i].id, students[i].name, students[i].age, students[i].phoneNumber);
    }
}

int findStudentById(Student students[], int size, int id) {
    for (int i = 0; i < size; i++) {
        if (students[i].id == id) {
            return i;
        }
    }
    return -1;
}

int main() {
    Student students[MAX_STUDENTS] = {
        {1, "Vu Dang Nguyen", 20, "1234567890"},
        {2, "Nguyen Quang Anh", 21, "0987654321"},
        {3, "Ho Le Anh Dao", 22, "1122334455"},
        {4, "Nguyen Le Vu", 23, "2233445566"},
        {5, "Bui Van Hung", 24, "3344556677"}
    };
    int currentSize = 5;

    int id;
    printf("Nhap ID sinh vien muon chinh sua: ");
    if (scanf("%d", &id) != 1) {
        printf("ID khong hop le. Chuong trinh ket thuc.\n");
        return 1;
    }

    int index = findStudentById(students, currentSize, id);
    if (index == -1) {
        printf("Khong tim thay sinh vien nao co ID %d.\n", id);
    } else {
        getchar(); 

        printf("Nhap ten moi: ");
        fgets(students[index].name, MAX_NAME_LENGTH + 1, stdin);
        students[index].name[strcspn(students[index].name, "\n")] = '\0'; 

        printf("Nhap tuoi moi: ");
        if (scanf("%d", &students[index].age) != 1 || students[index].age <= 0) {
            printf("Tuoi khong hop le. Chuong trinh ket thuc.\n");
            return 1;
        }

       
    }

    printf("Cap nhat danh sach sinh vien:\n");
    printStudents(students, currentSize);

    return 0;
}
