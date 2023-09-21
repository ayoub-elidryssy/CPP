#include "RobotomyRequestForm.hpp"
#include <math.h>

RobotomyRequestForm::RobotomyRequestForm(){
    std::cout<<"Robo_Form: Defult Constructor Called\n";
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target1): AForm("Robo_Form",72,45){
    target = target1;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& oth): AForm(oth){
    *this = oth;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& oth){
    if (this != &oth){
        target = oth.getTarget();
    }
    return *this;
}

const std::string& RobotomyRequestForm::getTarget() const{
    return target;
}


void RobotomyRequestForm::execute(Bureaucrat const & executor){
    if (executor.getGrade() > 45)
        throw GradeTooLowException();
    srand((unsigned)time(NULL));
    if (rand() % 2)
        std::cout<<target<<" has been robotomized successfully\n";
    else
        std::cout<<"the robotomy failed\n";
}

RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout<<"Robo_Form: Destructor Constructor Called\n";
}
