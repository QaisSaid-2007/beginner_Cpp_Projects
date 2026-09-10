#include <iostream> 
#include <string>
#include <cmath>
#include <algorithm>

typedef double dec; 
using str = std::string;

namespace School {
    str name = "Ellesmere Muscat International School";
}

namespace Subjects {
    dec math;
    dec chemistry;
    dec ICT;
    dec English;
}

int main() {
    // basic introduction to the program
    str message = "Welcome dear student, please enter your name/year/grades when asked";

    std::cout << School::name << "\n" << message << std::endl; 

    // collecting student information (name and year)
    int year;
    std::cout << "please enter your year of study" << std::endl;
    std::cin >> year;

    str name;
    std::cout << "please enter your full name" << std::endl;
    std::getline(std::cin >> std::ws, name);

    // collecting student information (subjects marks)
    using namespace Subjects;

    std::cout << "math ->";
    std::cin >> math; 

    std::cout << "chemistry ->"; 
    std::cin >> chemistry;

    std::cout << "ICT ->";
    std::cin >> ICT; 

    std::cout << "English ->"; 
    std::cin >> English; 

    // evaluating the collected information
    dec final_score;
    final_score = (math + chemistry + ICT + English) / 4 ;

    bool is_passed; 
    is_passed = (final_score >= 50) ? true : false;

    str student_next_grade;

    switch (year) {
        case 12:
            student_next_grade = "moves to university";
            break;
        case 11:
            student_next_grade = "moves to grade 12";
            break;
        case 10:
            student_next_grade = "moves to grade 11" ;
            break;
        case 9:
            student_next_grade = "moves to grade 10" ;
            break;
        case 8:
            student_next_grade = "moves to grade 9" ;
            break;
        case 7:
            student_next_grade = "moves to grade 8" ;
            break;
        case 6:
            student_next_grade = "moves to grade 7" ;
            break;
        case 5:
            student_next_grade = "moves to grade 6" ;
            break;
        case 4:
            student_next_grade = "moves to grade 5" ;
            break;
        case 3:
            student_next_grade = "moves to grade 4" ;
            break;
        case 2:
            student_next_grade = "moves to grade 3" ;
            break;
        case 1:
            student_next_grade = "moves to grade 2" ;
            break;
        default:
            student_next_grade = "invalid";
    }

    str grade; 

    if (final_score >= 90) {
        if (final_score >= 95) {
            grade = "A+";
        }
        else {
            grade = "A";
        }   
        }
    
    else if (final_score >= 80) {
        if (final_score >= 85) {
            grade = "B+";
        }
        else {
            grade = "B";
        }
        }
    
    else if (final_score >= 70) {
        if (final_score >= 75) {
            grade = "C+";
        }
        else {
            grade = "C";
        }
        } 

    else {
        grade = "<=D";
    }

    str grade_status; 

    if (grade == "A+") {
    grade_status = "super";
    }
    else if (grade == "A") {
        grade_status = "great";
    }
    else if (grade == "B+") {
        grade_status = "very good";
    }
    else if (grade == "B") {
        grade_status = "good";
    }
    else if (grade == "C+") {
        grade_status = "above average";
    }
    else if (grade == "C") {
        grade_status = "average";
    }
    else {
        grade_status = "Below average";
    }

    // displaying the final results to the user
    std::cout << "name: " << name << "      " << "Year: " << year << std::endl;
    std::cout << "overall score: " << std::ceil(final_score) << "%   grade: " << grade <<std::endl;
    std::cout << "Academic Performance: " << grade_status << std::endl;
    std::cout << "Your highest grade was: " << std::max(std::max(math , chemistry) ,std::max(ICT , English)) << "%" << std::endl; 
    std::cout << "Your lowest grade was: " << std::min(std::min(math , chemistry) ,std::min(ICT , English)) << "%" << std::endl;
    if (is_passed) {
        std::cout << student_next_grade << std::endl;
    } 
    else {
        std::cout << "remains in year " << year;
    }

    return 0;
}