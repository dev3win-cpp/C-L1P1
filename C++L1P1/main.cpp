//  main.cpp
//  Learning C++
//
//  Created by Tadeusz Potoniec on 22/01/2023 based on wideo https://www.youtube.com/watch?v=Kc98tH59A_U&list=PLOYHgt8dIdoxx0Y5wzs7CFpmBzb40PaDo&index=2
//

 #include <iostream>
 using namespace std;
 
 int students, candies,x ,y ;
 
 int main() {
 // insert code here...
 cout << "How many students are in your class:";
 cin >> students;
 cout << "How many candies did mom buy:";
 cin >> candies;
 
 x = candies / (students-1); //assigning a number to a variable where "=" is the assignment operator
 cout<<"Candy for each student:"<<x<< endl;
 y=candies-x*(students-1);
 cout<<"Candy that's left for Johnny for the evening:"<<y<< endl;
 
 
 return 0;
 }
 
/// My notes:
///include <iostream> - include input and output library
///int - integer
///int x; reserve space in ram memory
///cin>>x; load a number from the keyboard
