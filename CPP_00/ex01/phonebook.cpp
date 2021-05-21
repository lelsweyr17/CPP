#include "Phonebook.hpp"

void Phonebook::Print_Funtional_Of_Phonebook()
{
	std::cout << WHITE BOLD_FONT "Enter " RESET_BOLD RESET BLUE BOLD_FONT "ADD, " \
	RESET_BOLD RESET YELLOW BOLD_FONT "SEARCH " RESET_BOLD RESET WHITE BOLD_FONT \
	"or " RESET_BOLD RESET RED  BOLD_FONT "EXIT " RESET_BOLD RESET << std::endl;

	std::cout << "  - With " BLUE BOLD_FONT "ADD" RESET_BOLD RESET \
	" you can add new contact in your Phonebook" << std::endl;

	std::cout << "  - With " YELLOW BOLD_FONT "SEARCH" RESET_BOLD RESET \
	" you can search contact with some index" << std::endl;

	std::cout << "  - With " RED  BOLD_FONT "EXIT" RESET_BOLD RESET " you can exit \
	from your Phonebook. WARNING! All of contacts will be deleted!" << std::endl << std::endl;
}

void Phonebook::Limit_Nbr_Of_Contacts()
{
	std::cout << "Limit of contacts is exceeded" << std::endl;
}

void Phonebook::Exit_Command()
{
	std::cout << "EXIT" << std::endl;
}

std::string Phonebook::Add_Contact_Util(const char *message)
{
	std::string data;

	std::cout << message;
	if (!getline(std::cin, data))
	{
		std::cout << "Input error" << std::endl;
		return NULL;
	}
	return (data);
}

void Phonebook::Add_Contact(int index)
{
	Phonebook crappy;
	Contact contact;
	std::string data;

	contact.Set_Index(index);
	data = crappy.Add_Contact_Util("First Name: ");
	contact.Set_First_name(data);
	data = crappy.Add_Contact_Util("Last Name: ");
	contact.Set_Last_name(data);
	data = crappy.Add_Contact_Util("Nickname: ");
	contact.Set_Nickname(data);
	data = crappy.Add_Contact_Util("Login: ");
	contact.Set_Login(data);
	data = crappy.Add_Contact_Util("Postal_address: ");
	contact.Set_Postal_address(data);
	data = crappy.Add_Contact_Util("Email_address: ");
	contact.Set_Email_address(data);
	data = crappy.Add_Contact_Util("Birthday_date: ");
	contact.Set_Birthday_date(data);
	data = crappy.Add_Contact_Util("Favorite_meal: ");
	contact.Set_Favorite_meal(data);
	data = crappy.Add_Contact_Util("Underwear color: ");
	contact.Set_Underwear_color(data);
	data = crappy.Add_Contact_Util("Darkest_secret: ");
	contact.Set_Darkest_secret(data);
	
	_contacts[index] = contact;
	std::cout << CYAN BOLD_FONT "Contact with index " << index + 1 << " is created" RESET_BOLD RESET << std::endl;

}

int Phonebook::Search_Command(int index)
{
	std::string search_index;
	int	res;

	res = 0;
	std::cout << "Enter the index for more information" << std::endl;
	getline(std::cin, search_index);
	if (search_index[0] >= '1' && search_index[0] <= '8' && search_index[1] == 0)
		res = search_index[0] - 48;
	else
		std::cout << "Invalid index" << std::endl;
	return res;
}

void	Phonebook::Print_Spaces(std::string string)
{
	for(int i = 0; i < (10 - string.size()); i++)
		std::cout << " ";
}

void	Phonebook::Print_Short_Contacts_Info(int index)
{
	std::cout << _contacts[index - 1].Get_First_name() << std::endl;
	std::cout << _contacts[index - 1].Get_Last_name() << std::endl;
	std::cout << " ____________________________________________" << std::endl;
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	for (int i = 0; i < index; i++)
	{
		std::cout << "|" << "         " << _contacts[i].Get_Index() + 1<< "|";
		Print_Spaces(_contacts[i].Get_First_name());
		std::cout << _contacts[i].Get_First_name() << "|";
		Print_Spaces(_contacts[i].Get_Last_name());
		std::cout << _contacts[i].Get_Last_name() << "|";
		Print_Spaces(_contacts[i].Get_Nickname());
		std::cout << _contacts[i].Get_Nickname() << "|";
		std::cout << std::endl;
		std::cout << "|__________|__________|__________|__________|" << std::endl;
	}
	
}

void	Phonebook::Show_Contact_With_Index(Contact contact)
{
	std::cout << "First Name: ";
	std::cout << contact.Get_First_name() << std::endl;

	std::cout << "Last Name: ";
	std::cout << contact.Get_Last_name() << std::endl;

	std::cout << "Nickname: ";
	std::cout << contact.Get_Nickname() << std::endl;

	std::cout << "Login: ";
	std::cout << contact.Get_Login() << std::endl;

	std::cout << "Postal_address: ";
	std::cout << contact.Get_Postal_address() << std::endl;

	std::cout << "Email_address: ";
	std::cout << contact.Get_Email_address() << std::endl;

	std::cout << "Birthday_date: ";
	std::cout << contact.Get_Birthday_date() << std::endl;

	std::cout << "Favorite_meal: ";
	std::cout << contact.Get_Favorite_meal() << std::endl;

	std::cout << "Underwear_color: ";
	std::cout << contact.Get_Underwear_color() << std::endl;

	std::cout << "Darkest_secret: ";
	std::cout << contact.Get_Darkest_secret() << std::endl;
}
