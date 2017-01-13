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
 * @author Mariya Eggensperger, Dr. Feiling Jia
*/
int main() {

   ElementType max_node;
   bool isAscendingOrder;

   // Test the class constructor
   LinkedList intList;

   cout << "\n\nConstructing intList" << endl << endl;

   cout << "******************* TEST maxItem *******************" << endl << endl;
   cout << endl;

   // Empty list
   max_node = intList.maxItem();
   cout << "-------------------- Empty List --------------------";
   cout << "\n\nMax Item in an empty list: " << max_node << endl << endl;

   // List with one element
   cout << endl << endl;
   cout << "-------------------- One in List ------------------";
   intList.insert(1, 0);
   cout << "\n\nYour list: ";
   intList.display(cout);
   max_node = intList.maxItem();
   cout << "\n\nMax Item with one in list: " << max_node << endl << endl;

   // List with two elements
   cout << endl << endl;
   cout << "-------------------- Two in List ------------------";
   intList.insert(2, 1);
   cout << "\n\nYour list: ";
   intList.display(cout);
   max_node = intList.maxItem();
   cout << "\n\nMax Item with two in list: " << max_node << endl << endl;

   // List with many elements
   cout << endl << endl;
   cout << "-------------------- Many in List ------------------";
   intList.insert(3, 2);
   intList.insert(4, 3);
   cout << "\n\nYour list: ";
   intList.display(cout);
   max_node = intList.maxItem();
   cout << "\n\nMax Item with one in list: " << max_node << endl << endl;

   cout << "******************* maxItem END *******************" << endl << endl;






}