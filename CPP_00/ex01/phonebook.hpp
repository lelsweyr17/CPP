#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"

# define RED		"\x1b[31m"
# define GREEN		"\x1b[32m"
# define YELLOW		"\x1b[33m"
# define BLUE		"\x1b[34m"
# define MAGENTA	"\x1b[35m"
# define CYAN		"\x1b[36m"
# define WHITE		"\x1b[37m"
# define RESET		"\x1b[0m"
# define BOLD_FONT	"\e[1m"
# define RESET_BOLD	"\e[0m"

class Phonebook {
	private:
		Contact _contacts[8];

	public:
		void Add_Contact(int *index);
		std::string Add_Contact_Util(const char *message);
		void Print_Funtional_Of_Phonebook();
		void Limit_Nbr_Of_Contacts();
		void Print_Short_Contacts_Info(int index);
		void Print_Spaces(std::string string);
		void Print_Names(std::string string);
		int Search_Contact(int index);
		void Show_Contact_With_Index(int index);
		int	Check_Contact_Before_Creating(Contact contact);
		void Exit_Phonebook();
};



#endif