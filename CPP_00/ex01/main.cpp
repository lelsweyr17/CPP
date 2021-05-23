#include "Phonebook.hpp"
#include "Contact.hpp"

int main(){
	Phonebook crappy;
	std::string command;
	int search_index;
	int index;

	index = 0;
	crappy.Print_Funtional_Of_Phonebook();
	while (true)
	{
		std::cout << MAGENTA BOLD_FONT "Enter the command: " RESET_BOLD RESET;
		if (!getline(std::cin, command))
		{
			std::cout << "Invalid input" << std::endl;
		}
		if (command == "EXIT")
		{
			crappy.Exit_Phonebook();
			break ;
		}
		else if (command == "ADD")
		{
			if (index < 8)
				crappy.Add_Contact(&index);
			else
				crappy.Limit_Nbr_Of_Contacts();
		}
		else if (command == "SEARCH")
		{
			crappy.Print_Short_Contacts_Info(index);
			search_index = crappy.Search_Contact(index);
			if (search_index > 0 && search_index < 9 && search_index <= index)
				crappy.Show_Contact_With_Index(search_index);
			else if (search_index != 0 && search_index != 9 && search_index > index)
				std::cout << "Contact with index " << search_index << " not found" << std::endl;
		}
	}
	return 0;
}