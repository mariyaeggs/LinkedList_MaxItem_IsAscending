//----- Linked_List_Tester.cpp -----
#include <iostream>
#include <sstream>
using namespace std;

#include "LinkedList.h"
/**
 * Title: Lab 1 : Linked List
 * Course: CST 370 Design & Analysis of Algorithms
 * School: CSU, Monterey Bay
 * Professor: Dr. Feiling Jia
 * Source: CLion 2016.3.2 on 1/11/2017
 *
 * The tester for a program that asks
 * a user to enter a text string and display
 * the number of substrings that start with A
 * and end with B.
 *
 * @author Mariya Eggensperger
*/
int main() {
      // Test the class constructor
      LinkedList intList;
      cout << "Constructing intList\n";

      // Test insert()
      intList.insert(100, 0);
      intList.display(cout);
      cout << endl;

      intList.insert(200, 0);
      intList.display(cout);
      cout << endl;

      intList.insert(300, 1);
      intList.display(cout);
      cout << endl;

      intList.insert(400, 1);
      intList.display(cout);
      cout << endl;

      intList.insert(500, 3);
      intList.display(cout);
      cout << endl;

      // Test destructor
      {
         LinkedList anotherList;
         for (int i = 0; i < 10; i++)
         {
            anotherList.insert(100*i, i);
         }
         cout << "\nThis is another list\n";
         anotherList.display(cout);
      }

      // Test erase
      intList.erase(1);
      intList.erase(1);
      cout << "\n\nTwo items are erased from the first list\n";
      intList.display(cout);
      cout << endl;


}