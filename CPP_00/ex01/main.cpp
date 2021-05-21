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
		else if (index > 8)
		{
			crappy.Limit_Nbr_Of_Contacts();
		}
		if (command == "EXIT")
		{
			crappy.Exit_Command();
			break ;
		}
		else if (command == "ADD")
		{
			crappy.Add_Contact(index++);
		}
		else if (command == "SEARCH")
		{
			crappy.Print_Short_Contacts_Info(index);
			// search_index = crappy.Search_Command(index);
			// if (search_index > 0 && search_index < 9 && \
			// contact[search_index].Get_Index() >= 1 && contact[search_index].Get_Index() <= 8)
			// 	crappy.Show_Contact_With_Index(contact[search_index]);
			// else if (search_index != 0 && search_index != 9)
			// 	std::cout << "Contact with index " << search_index << " not found" << std::endl;
		}
	}
	return 0;
}