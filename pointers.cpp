#include <iostream>

using namespace std;

void displayIntro();
void displayLevel1();
void displayLevel2();
void displayLevel3();
void displayConclusion();

int main() {
  displayIntro();

  displayLevel1();
  displayLevel2();
  displayLevel3();
  displayConclusion();
  return 0;
}

void displayIntro() {
  cout << "Welcome to the Pointer Classroom!" << endl;
  cout << "In this journey, you'll learn about pointers in C++."
            << endl;
  cout << "Let's start!" << endl << endl;
  cin.get();
}

void displayLevel1() {
  cout << "Level 1: Introduction to Pointers" << endl;
  cout << "----------------------------------" << endl;
  cout << "In this level, you'll learn the basics of pointers."
            << endl;
  cout << "A pointer is a variable that stores the memory address of "
               "another variable."
            << endl;
  cout << "Pointers are fundamental in C++ programming and are used for "
               "dynamic memory allocation, accessing array elements, and "
               "creating data structures."
            << endl;
  cout << "Press enter to continue...";
  cin.get();
  cout << endl;

  // Explanation of pointers
  cout << "Explanation of Pointers:" << endl;
  cout << "-------------------------" << endl;
  cout << "A pointer is a variable that stores the memory address of "
               "another variable."
            << endl;
  cout
      << "It allows indirect access to the value of the variable it points to."
      << endl;
  cout << "Pointers are denoted by the '*' symbol in C++, followed by the "
               "data type they point to."
            << endl;
  cout << "For example, 'int*' declares a pointer to an integer."
            << endl;
  cout << "Press enter to continue...";
  cin.get();
  cout << endl;

  // Code example
  cout << "Example:" << endl;
  cout << "```cpp" << endl;
  cout << "int num = 10;" << endl;
  cout
      << "int* ptr = &num; // Pointer 'ptr' points to the address of 'num'"
      << endl;
  cout << "cout << *ptr; // Output: 10 (Value stored at the address "
               "pointed by 'ptr')"
            << endl;
  cout << "```" << endl;
  cout << "In this example, 'ptr' is a pointer that stores the address of "
               "the variable 'num'."
            << endl;
  cout << "The '*' operator is used to dereference the pointer and access "
               "the value stored at that address."
            << endl;

  cout << endl;
  cout
      << "That mean if we try to cout ptr without the * you will display "
         "the memory address, not the value that it is pointing to."
      << endl;

  cout << "Press enter to continue...";
  cin.get();
  cout << endl;
}

void displayLevel2() {
  cout << "Level 2: Pointer Arithmetic and Arrays" << endl;
  cout << "---------------------------------------" << endl;
  cout
      << "In this level, you'll learn about pointer arithmetic and arrays."
      << endl;
  cout << "Pointer arithmetic involves adding or subtracting an integer "
               "to/from a pointer, which moves the pointer to the next or "
               "previous memory location."
            << endl;
  cout << "Arrays in C++ are implemented using pointers. The name of an "
               "array points to the first element of the array."
            << endl;
  cout << "Press enter to continue...";
  cin.get();
  cout << endl;

  // Explanation of pointer arithmetic and arrays
  cout << "Explanation of Pointer Arithmetic and Arrays:" << endl;
  cout << "---------------------------------------------" << endl;
  cout << "Pointer arithmetic allows you to navigate through memory by "
               "adding or subtracting integer values to/from pointers."
            << endl;
  cout << "For example, if 'ptr' is a pointer to an integer, 'ptr++' will "
               "move the pointer to the next integer location."
            << endl;
  cout << "Arrays in C++ are contiguous blocks of memory, and the name of "
               "the array represents the address of its first element."
            << endl;
  cout << "Press enter to continue...";
  cin.get();
  cout << endl;

  // Code example
  cout << "Example:" << endl;
  cout << "```cpp" << endl;
  cout << "int arr[5] = {1, 2, 3, 4, 5};" << endl;
  cout << "int* ptr = arr; // Pointer 'ptr' points to the first element "
               "of the array 'arr'"
            << endl;
  cout << "cout << *ptr; // Output: 1 (Value of the first element)"
            << endl;
  cout << "ptr++; // Move the pointer to the next element" << endl;
  cout << "cout << *ptr; // Output: 2 (Value of the second element)"
            << endl;
  cout << "```" << endl;
  cout << "In this example, 'ptr' points to the first element of the "
               "array 'arr'."
            << endl;
  cout << "By incrementing 'ptr', we move the pointer to the next element "
               "in the array."
            << endl;
  cout << "Press enter to continue...";
  cin.get();
  cout << endl;
}

void displayLevel3() {
  cout << "Level 3: Dynamic Memory Allocation with Pointers" << endl;
  cout << "-------------------------------------------------" << endl;
  cout << "In this level, you'll learn about dynamic memory allocation "
               "with pointers."
            << endl;
  cout
      << "Dynamic memory allocation allows you to allocate memory at runtime."
      << endl;
  cout << "This is useful when you need to create arrays or objects whose "
               "size is not known at compile time."
            << endl;
  cout << "It enables efficient memory management and flexibility in "
               "memory usage."
            << endl
            << endl;

  // Real-world example: Allocating memory for an array to store student grades
  int numStudents;
  cout << "Enter the number of students: ";
  cin >> numStudents;

  // Dynamically allocate memory for the array of student grades
  double *studentGrades = new double[numStudents];

  cout << "Enter grades for " << numStudents << " students:" << endl;
  for (int i = 0; i < numStudents; ++i) {
    cout << "Grade for Student " << (i + 1) << ": ";
    cin >> studentGrades[i];
  }

  // Calculate average grade
  double total = 0;
  for (int i = 0; i < numStudents; ++i) {
    total += studentGrades[i];
  }
  double averageGrade = total / numStudents;
  cout << "Average Grade: " << averageGrade << endl;

  // Free the dynamically allocated memory
  delete[] studentGrades;

  cout
      << endl
      << "Now, let's dive deeper into dynamic memory allocation with pointers."
      << endl;
  cout << "Press enter to continue...";
  cin.ignore();
  cin.get();
  cout << endl;

  // Explanation of Dynamic Memory Allocation with Pointers
  cout << "Explanation of Dynamic Memory Allocation with Pointers:"
            << endl;
  cout << "------------------------------------------------------"
            << endl;
  cout << "Dynamic memory allocation allows programs to request memory at "
               "runtime rather than relying on fixed-size arrays or predefined "
               "memory blocks."
            << endl;
  cout << "The 'new' operator is used in C++ to dynamically allocate "
               "memory. This memory can be accessed through pointers, "
               "providing flexibility in memory usage."
            << endl
            << endl;

  // Code example
  cout << "Example:" << endl;
  cout << "```cpp" << endl;
  cout << "// Dynamically allocate memory for an array of student grades"
            << endl;
  cout << "int numStudents;" << endl;
  cout << "cout << \"Enter the number of students: \";" << endl;
  cout << "cin >> numStudents;" << endl;
  cout << "double* studentGrades = new double[numStudents];" << endl;
  cout << "// Input grades for each student" << endl;
  cout << "// Calculate average grade" << endl;
  cout << "// Free the dynamically allocated memory" << endl;
  cout << "delete[] studentGrades;" << endl;
  cout << "```" << endl << endl;

  cout << "In this example, we dynamically allocate memory for an array "
               "of student grades using the 'new' operator."
            << endl;
  cout << "After processing the data, we free the dynamically allocated "
               "memory using the 'delete[]' operator to prevent memory leaks."
            << endl;

  cout << endl << "Press enter to continue...";
  cin.get();
  cout << endl;
}

void displayConclusion() {
  cout << "Congratulations! You have completed the Pointer Classroom!"
            << endl;
  cout << "You now have a better understanding of pointers in C++."
            << endl;
}
