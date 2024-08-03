#include <iostream>
#include <vector>


typedef std::string text_t;
typedef int number_t;

// alternative solutions
// keyword "USING"
using text_t = std::string;
using number_t = int;

int main() {
    // number_t age = 19;
    // text_t firstName = "Bro";
    // std::cout << firstName << " just " << age << " but is great";

//    integer (whole number)
//    int age = 21;
//    int year = 2024;
//    int gpa = 3.9;

//    double (number including decimal)
    double dollar = 24.7;

// char (a single character)
    // char grade = 'A';


// boolean (true or false)
bool forSale = true;

// string (objects that represents a sequence of text)
    // std::string name = "dustin";
    // std::cout << name << " is " << age << " years old";


    const double pi = 3.14159;
    double radius = 10;
    double circumference = 2 * pi * radius;
    // std::cout << circumference << " cm";

 
//   int correct = 8;
//   int question = 10;
//   double score = (double)correct/question *100;
  
//   std::cout << score << "%";

//   std::string name;
//   int age;  

//   std::cout << "What's your full name ? ";
//   std::getline(std::cin, name);     
//     //   get in line (parentheses) (that could contain spaces)
    
// //   std::cin >> name; 
// //   (only one name can be used );

//  std::cout << "What's your age ? ";
//  std::cin >> age;

//   std::cout << "Hi " << name << '\n';
//   std::cout << "You're " << age << " years old";



//    namespace first {
//     int x = 1;
//    }
//    namespace second {
//     int x = 2;
//    }

//    int main() {
//     int x = 0;
//     using namespace first;
//     std::cout << second::x;
//     // double colon /kou lan/ is strong than "using"
//    }


// int age;
// std::cout << "Enter your age";
// std::cin >> age;

// if (age >= 100) {
//     std::cout << "You're too old to enter this!";
// }

// else if(age >= 18) {
//     std::cout << "Welcome to our site.";
// }

// else if(age <= 0) {
//     std::cout << "You haven't been born yet!";
// }

// else {
//     std::cout << "You're not old enough to enter";
// }




// int month;
// std::cout << "Enter the month (1 - 12)";
// std::cin >> month;


// char grade;
// std::cout << "What's your letter grade (A - F) ? ";
// std::cin >> grade;


// // letter grade
// switch (grade)
// {
// case 'A':
//     std::cout << "You did great.";
//     break;

// case 'B':
//     std::cout << "You did good.";
//     break;
    
// case 'C':
//     std::cout << "You did OK.";
//     break;
    
// case 'D':
//     std::cout << "You did not do good.";
//     break;
    
// case 'F':
//     std::cout << "You failed.";
//     break;
// default: std::cout << "Please only enter your letter grade.";
  
// }





// char operators;
// double number1;
// double number2;
// double result;

// std::cout << "**********************************CALCULATOR*****************************************\n";

// std::cout << "Enter either (+ - * /) ";
// std::cin >> operators;

// std::cout << "Enter number #1: ";
// std::cin >> number1;


// std::cout << "Enter number #2: ";
// std::cin >> number2;

// switch (operators)
// {
// case '+':
//     result = number1 + number2;
//     std::cout << "Result: " << result << '\n';
//     break;


// case '-':
//     result = number1 - number2;
//     std::cout << "Result: " << result << '\n';
//     break;

    
// case '*':
//     result = number1 * number2;
//     std::cout << "Result: " << result << '\n';
//     break;

    
// case '/':
//     result = number1 / number2;
//     std::cout << "Result: " << result << '\n';
//     break;

// default: 
//     std::cout << "That wasn't a valid response.\n";
//     break;
// }




int number = 15;
// way 1
// number % 3 ? std::cout << "ODD" : std::cout << "EVEN";

// way 2
// std::cout << (number % 3 ? "ODD" : "EVEN");


bool hungry = false;

// way 1
// std::cout << (hungry ? "You're hungry" : "You're full");

// way 2
// hungry ? std::cout << "You're starving" : std::cout << "You're stuffed";






return 0;
}


