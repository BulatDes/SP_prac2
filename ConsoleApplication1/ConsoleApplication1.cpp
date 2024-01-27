// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>



void Sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void ArrSum(int arr1[3][3], int arr2[3][3]) {
    int newArr[3][3];
    int sum = 0;

   
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            newArr[i][j] = arr1[i][j] + arr2[i][j];
            sum += newArr[i][j];
        }
    }

    
    std::cout << "Объединенный массив:" << "\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << newArr[i][j] << " ";
        }
        std::cout << "\n";
    }

    
    std::cout << "Сумма всех элементов: " << sum << "\n";
}

struct Student {
    std::string name;
    double grades[5]; 
};

double studentAverage(Student& student) {
    double sum = 0;
    int lengthStud = sizeof(student.grades) / sizeof(student.grades[0]);

    for (int i = 0; i < lengthStud; i++) {
        sum += student.grades[i];
    }

    return sum / lengthStud;
}

class Employee {
private:
    std::string name;
    double salary;

public:
    void setName(const std::string& empName) {
        this->name = empName;
    }

    void setSalary(double empSalary) {
        salary = empSalary;
    }

    void increaseSalary(double percentage) {
        salary *= (1 + percentage / 100);
        std::cout << "После повышения на "<< percentage <<"%: \n";
        displayInfo();
    }

    void displayInfo() {
        std::cout << "Работник: " << name << ", ЗП: " << salary <<"\n";
    }
};



int main()
{
    setlocale(LC_ALL, "Russian");
    //Task1
    std::cout << "Task1\n";
    int arr[] = { 5, 2, 8, 3, 1,24,215,54,3,42,23,532,42,234,234,1,2345,523,4 };
    int n = sizeof(arr) / sizeof(arr[0]);

    Sort(arr, n);

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << "\n";
    std::cout << "\n";


    //Task2
    std::cout << "Task2\n";
    int arr1[3][3] = { {1, 41, 31}, {4, 55, 62}, {27, 84, 9} };
    int arr2[3][3] = { {9, 8, 73}, {26, 54, 4}, {32, 25, 14} };
    std::cout << "массив: 1" << "\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << arr1[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
    std::cout << "массив 2" << "\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << arr2[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "\n";
    ArrSum(arr1, arr2);
    std::cout << "\n";

    //Task3
    std::cout << "Task3\n";
    Student student;
    student.name = "Иванов";
    student.grades[0] = 4;
    student.grades[1] = 2;
    student.grades[2] = 3;
    student.grades[3] = 2;
    student.grades[4] = 3;

    double averageGrade = studentAverage(student);
    std::cout << "Средняя оценка студента " << student.name << ":\n " <<averageGrade <<"\n\n";

    //Task4
    std::cout << "Task4\n";
    std::cout << "\n";
    Employee emp1;
    emp1.setName("Иванов Петр");
    emp1.setSalary(50000);
    emp1.displayInfo();

    emp1.increaseSalary(43);
   

    
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
