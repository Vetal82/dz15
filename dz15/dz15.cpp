// dz15.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Запис у файл

//1.	Створити текстовий файл і записати в нього :
//•	5 однакових цілих чисел;
//•	5 однакових дійсних чисел;
//•	5 однакових слів.
//Записувані числа і слова вводяться з клавіатури.

//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main()
//{
    // Запис цілих чисел

    /*FILE* file = nullptr;

      fopen_s(&file, "best.txt", "w");
      if (file == NULL) cout << "ERROR!\n";
      else {
          cout << "Enter celoe chislo: ";
          int a;
          cin >> a;
          for (int i = 0; i < 5; ++i) {
              fprintf_s(file, "%d ", a);
          }
      }
      fclose(file);

      cout << "Dani sohraneny w fail 'best.txt'." << endl;

      return 0;*/

      // Запис дійсних чисел

    /*FILE* file = nullptr;

    fopen_s(&file, "best.txt", "w");
    if (file == NULL) cout << "ERROR!\n";
    else {
        cout << "Enter dijsne chislo: ";
        double b;
        cin >> b;
        for (int i = 0; i < 5; ++i) {
            fprintf_s(file, "%lf ", b);
        }
    }
    fclose(file);

    cout << "Dani sohraneny w fail 'best.txt'." << endl;

    return 0;*/

    // Запис слів

    /*FILE* file = nullptr;*/

    /*fopen_s(&file, "best.txt", "w");
    if (file == NULL) cout << "ERROR!\n";
    else {
        cout << "Enter slovo: ";
        char word[100];
        cin >> word;
        for (int i = 0; i < 5; ++i) {
            fprintf_s(file, "%s ", word);
        }
    }
    fclose(file);

    cout << "Dani sohraneny w fail 'best.txt'." << endl;

    return 0;
}*/

//2.	Створити текстовий файл, елементами якого є дванадцять перших членів послідовності Фібоначчі(послідовності, у якій перші два члени дорівнюють 1, а кожен наступний дорівнює сумі двох попередніх).

//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main()
//{
//
//    FILE* file = nullptr;
//
//    fopen_s(&file, "fibonacci.txt", "w");
//    if (file == NULL) cout << "ERROR!\n";
//    else {
//        int fibi1 = 1, fibi2 = 1;
//        for (int i = 0; i < 12; ++i) {
//            fprintf_s(file, "%d ", fibi1);
//
//            int nextFibi = fibi1 + fibi2;
//            fibi1 = fibi2;
//            fibi2 = nextFibi;
//        }
//        fclose(file);
//
//        cout << "Pershi 12 Fibonachi zapisani u fail 'fibonacci.txt'." << endl;
//
//        return 0;
//    }
//}

//Читання з файлу
//3.	Є текстовий файл із числами(hw1.txt).Надрукувати всі його елементи, більші за число а.Відомо, що в наявному файлі записано 13 чисел;

//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main()
//{
//
//    FILE* file = nullptr;
//
//    fopen_s(&file, "hw1.txt", "r");
//    if (file == NULL) cout << "ERROR!\n";
//    else {
//        int num;
//        cout << "Enter a: ";
//        cin >> num;
//
//        cout << "Czysla bilszi za " << num << ":" << endl;
//
//        int count = 0;
//        while (fscanf_s(file, "%d", &num) != EOF) {
//            if (num > num) {
//                cout << num << " ";
//                ++count;
//            }
//        }
//
//        fclose(file);
//
//        if (count == 0) {
//            cout << "U faili nema chysel bilshych za " << num << "." << endl;
//        }
//        else {
//            cout << endl;
//        }
//
//        return 0;
//    }
//}


//4.	Є текстовий файл(hw1.txt), у якому записано 13 цілих чисел.Переписати всі додатні числа файлу в масив у тому самому порядку.

//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main()
//{
//    const char* fileName = "hw1.txt";
//    const int maxSize = 13;
//
//    FILE* file = nullptr;
//
//    fopen_s(&file, "hw1.txt", "r");
//    if (file == NULL) cout << "ERROR!\n";
//    else {
//        
//        int array[maxSize];
//        int num;
//        int count = 0;
//        while (fscanf_s(file, "%d", &num) != EOF && count < maxSize) {
//            if (num > 0) {
//                array[count++] = num;
//            }
//        }
//
//        
//        fclose(file);
//
//        
//        cout << "Massiv dodatnich chysel " << fileName << ":" << endl;
//        for (int i = 0; i < count; ++i) {
//            cout << array[i] << " ";
//        }
//        cout << endl;
//
//        return 0;
//    }
//}

//Робота з декількома файлами
//5.	Є тестовий файл із числами(hw1.txt).Переписати числа в інший файл крім заданого числа a.Розмір заданого файлу невідомий.

//#include <iostream>
//#include <cstdio>
//using namespace std;
//int main()
//{
//    const char* inputFileName = "hw1.txt";
//    const char* outputFileName = "new.txt";
//    int num, a;
//
//    FILE* infile = nullptr;
//    FILE* outfile = nullptr;
//
//    fopen_s(&infile, "hw1.txt", "r");
//    if (infile == NULL) cout << "ERROR!\n";
//    
//    
//        fopen_s(&outfile, "new.txt", "w");
//        if (outfile == NULL) cout << "ERROR!\n";
//        cout << "Enter 'a': ";
//        cin >> a;
//
//        
//        while (fscanf_s(infile, "%d", &num) != EOF) {
//            if (num != a) {
//                fprintf(outfile, "%d ", num);
//            }
//        }
//
//        // Закриття файлів
//        fclose(infile);
//        fclose(outfile);
//
//        cout << "Chysla iz " << inputFileName << " zapysano v " << outputFileName << " bez 'a'." << endl;
//
//        return 0;
//}


//6.	Є два файли(hw1.txt, hw2.txt) однакового розміру, елементами яких є числа.Отримати новий файл(hwSum.txt, hwMax.txt) :
//    •	кожен елемент якого дорівнює сумі відповідних елементів заданих файлів;
//•	кожен елемент якого дорівнює більшому з відповідних елементів заданих файлів.



#include <iostream>
#include <cstdio> 

using namespace std;

int main() {
    const char* inputFileName1 = "hw1.txt";
    const char* inputFileName2 = "hw2.txt";
    const char* outputFileNameSum = "hwSum.txt";
    const char* outputFileNameMax = "hwMax.txt";
    FILE* inFile1;
    FILE* inFile2;
    FILE* outFileSum;
    FILE* outFileMax;

    int num1, num2;

    // Відкриття файлів для читання
    if (fopen_s(&inFile1, inputFileName1, "r") != 0) {
        cerr << "Error!" << endl;
        return 1;
    }

    if (fopen_s(&inFile2, inputFileName2, "r") != 0) {
        cerr << "Error!" << endl;
        fclose(inFile1);
        return 1;
    }

    // Відкриття файлів для запису
    if (fopen_s(&outFileSum, outputFileNameSum, "w") != 0) {
        cerr << "Error!" << endl;
        fclose(inFile1);
        fclose(inFile2);
        return 1;
    }

    if (fopen_s(&outFileMax, outputFileNameMax, "w") != 0) {
        cerr << "Error!" << endl;
        fclose(inFile1);
        fclose(inFile2);
        fclose(outFileSum);
        return 1;
    }

    // Читання чисел з файлів та запис сум та максимумів у відповідні файли
    while (fscanf_s(inFile1, "%d", &num1) != EOF && fscanf_s(inFile2, "%d", &num2) != EOF) {
        fprintf(outFileSum, "%d ", num1 + num2);
        fprintf(outFileMax, "%d ", (num1 > num2) ? num1 : num2);
    }

    // Закриття файлів
    fclose(inFile1);
    fclose(inFile2);
    fclose(outFileSum);
    fclose(outFileMax);

    cout << "Stvoreno dani " << outputFileNameSum << " i " << outputFileNameMax << " z rezultatamy obchyslen" << endl;

    return 0;
}





// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
