#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() {
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137) {
	this->target = target;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	try {
		if (getIsSigned() && executor.getGrade() <= getMinGradeToExecute()) {
			std::ofstream fOut;

			fOut.open(target);
			if (!fOut.is_open()) {
				std::cout << "File open error: " << std::endl;
			}
			else {
				fOut << "          / / /                         		\n";
				fOut << "       /        /  /     //    /               \n";
				fOut << "    /                 /         /  /           \n";
				fOut << "     /               /                         \n";
				fOut << "     /              /                //        \n";
				fOut << "   /          /            /              /    \n";
				fOut << "   /            '/,        /               /   \n";
				fOut << "   /              'b      *                //  \n";
				fOut << "    /              '$    //                /   \n";
				fOut << "   /    /           $:   /:               /    \n";
				fOut << " //      /  //      */  @):        /   / /     \n";
				fOut << "              /     :@,@):   ,/**:'   /        \n";
				fOut << "  /      /,         :@@*: //**'      /   /     \n";
				fOut << "           '/o/    /:(@'/@*\"'  /              \n";
				fOut << "   /  /       'bq,/:,@@*'   ,*      /  /       \n";
				fOut << "              ,p$q8,:@)'  /p*'      /          \n";
				fOut << "       /     '  / '@@Pp@@*'    /  /            \n";
				fOut << "        /  / //    Y7'.'     /  /              \n";
				fOut << "                  :@):.                        \n";
				fOut << "                 .:@:'.                        \n";
				fOut << "               .::(@:.";
				fOut.close();
			}
			std::cout << executor.getName() << " executed " << getName() << std::endl;
		}
		else if (!getIsSigned()) {
			std::cout << getName() <<" is not signed." << std::endl;
		}
		else if (executor.getGrade() > getMinGradeToExecute()) {
			throw Form::GradeTooLowException();
		}
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << '\n';
	}
}
