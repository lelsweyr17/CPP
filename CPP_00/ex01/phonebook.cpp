#include "Phonebook.hpp"

void Phonebook::Print_Funtional_Of_Phonebook()
{
	std::cout << WHITE BOLD_FONT "Enter " RESET_BOLD RESET BLUE BOLD_FONT "ADD" \
	RESET_BOLD RESET ", " YELLOW BOLD_FONT "SEARCH " RESET_BOLD RESET WHITE BOLD_FONT \
	"or " RESET_BOLD RESET RED  BOLD_FONT "EXIT" RESET_BOLD RESET ":" << std::endl;

	std::cout << "  - With " BLUE BOLD_FONT "ADD" RESET_BOLD RESET \
	" you can add new contact in your Phonebook" << std::endl;

	std::cout << "  - With " YELLOW BOLD_FONT "SEARCH" RESET_BOLD RESET \
	" you can search contact with some index" << std::endl;

	std::cout << "  - With " RED  BOLD_FONT "EXIT" RESET_BOLD RESET \
	" you can exit from your Phonebook. WARNING! All of contacts will be deleted!" << std::endl << std::endl;
}

void Phonebook::Limit_Nbr_Of_Contacts()
{
	std::cout << "Limit of contacts is exceeded" << std::endl;
}

void Phonebook::Exit_Phonebook()
{
	std::cout << GREEN BOLD_FONT "BYE BYE!" RESET_BOLD RESET << std::endl;
}

std::string Phonebook::Add_Contact_Util(const char *message)
{
	std::string data;

	std::cout << message;
	if (!getline(std::cin,data))
	{
		std::cout << "Input error" << std::endl;
		return NULL;
	}
	return (data);
}

void Phonebook::Add_Contact(int *index)
{
	Phonebook crappy;
	Contact contact;
	std::string data;

	contact.Set_Index(*index);
	data = crappy.Add_Contact_Util("first name: ");
	contact.Set_First_name(data);
	data = crappy.Add_Contact_Util("last name: ");
	contact.Set_Last_name(data);
	data = crappy.Add_Contact_Util("nickname: ");
	contact.Set_Nickname(data);
	data = crappy.Add_Contact_Util("login: ");
	contact.Set_Login(data);
	data = crappy.Add_Contact_Util("postal address: ");
	contact.Set_Postal_address(data);
	data = crappy.Add_Contact_Util("email address: ");
	contact.Set_Email_address(data);
	data = crappy.Add_Contact_Util("birthday date: ");
	contact.Set_Birthday_date(data);
	data = crappy.Add_Contact_Util("favorite meal: ");
	contact.Set_Favorite_meal(data);
	data = crappy.Add_Contact_Util("Underwear color: ");
	contact.Set_Underwear_color(data);
	data = crappy.Add_Contact_Util("darkest secret: ");
	contact.Set_Darkest_secret(data);

	if (Phonebook::Check_Contact_Before_Creating(contact))
	{
		_contacts[*index] = contact;
		std::cout << GREEN BOLD_FONT "Contact with index " << *index + 1 << " is created!" RESET_BOLD RESET << std::endl;
		(*index)++;
	}
	else
	{
		std::cout << RED BOLD_FONT "Contact is not created. Fields are empty." RESET_BOLD RESET << std::endl;
	}

}

int Phonebook::Search_Contact(int index)
{
	std::string search_index;
	int	res;

	res = 0;
	std::cout << YELLOW "Enter the index for more information:" RESET << std::endl;
	if (!getline(std::cin, search_index))
	{
		std::cout << "Input error" << std::endl;
		return 0;
	}
	std::cout << YELLOW "_____________________________________" RESET << std::endl << std::endl;
	if (search_index[0] >= '1' && search_index[0] <= '8' && search_index[1] == 0)
		res = search_index[0] - 48;
	else
		std::cout << "Invalid index" << std::endl;
	return res;
}

void	Phonebook::Print_Short_Contacts_Info(int index)
{
	std::cout << " ___________________________________________" << std::endl;
	std::cout << "|     INDEX|FIRST NAME| LAST NAME|  NICKNAME|" << std::endl;
	std::cout << "|__________|__________|__________|__________|" << std::endl;
	for (int i = 0; i < index; i++)
	{
		std::cout << "|" << "         " << _contacts[i].Get_Index() + 1 << "|";
		Print_Names(_contacts[i].Get_First_name());
		std::cout << "|";
		Print_Names(_contacts[i].Get_Last_name());
		std::cout << "|";
		Print_Names(_contacts[i].Get_Nickname());
		std::cout << "|";
		std::cout << std::endl;
		std::cout << "|__________|__________|__________|__________|" << std::endl;
	}
	std::cout << std::endl;
	
}

void	Phonebook::Show_Contact_With_Index(int index)
{
	std::cout << "first name: ";
	std::cout << _contacts[index - 1].Get_First_name() << std::endl;

	std::cout << "last name: ";
	std::cout << _contacts[index - 1].Get_Last_name() << std::endl;

	std::cout << "nickname: ";
	std::cout << _contacts[index - 1].Get_Nickname() << std::endl;

	std::cout << "login: ";
	std::cout << _contacts[index - 1].Get_Login() << std::endl;

	std::cout << "postal address: ";
	std::cout << _contacts[index - 1].Get_Postal_address() << std::endl;

	std::cout << "email address: ";
	std::cout << _contacts[index - 1].Get_Email_address() << std::endl;

	std::cout << "birthday date: ";
	std::cout << _contacts[index - 1].Get_Birthday_date() << std::endl;

	std::cout << "favorite meal: ";
	std::cout << _contacts[index - 1].Get_Favorite_meal() << std::endl;

	std::cout << "underwear color: ";
	std::cout << _contacts[index - 1].Get_Underwear_color() << std::endl;

	std::cout << "darkest secret: ";
	std::cout << _contacts[index - 1].Get_Darkest_secret() << std::endl;
}

int	Phonebook::Check_Contact_Before_Creating(Contact contact)
{
	if (!contact.Get_First_name().size() && !contact.Get_Last_name().size() && \
		!contact.Get_Nickname().size() && !contact.Get_Login().size() && \
		!contact.Get_Postal_address().size() && !contact.Get_Email_address().size() && \
		!contact.Get_Birthday_date().size() && !contact.Get_Favorite_meal().size() && \
		!contact.Get_Underwear_color().size() && !contact.Get_Darkest_secret().size())
			return (0);
	else
		return (1);
}

void Phonebook::Print_Names(std::string string)
{
	if (string.size() <= 10)
	{
		for (int i = 0; i < (10 - string.size()); i++)
			std::cout << " ";
		std::cout << string;
	}
	else
	{
		for (int i = 0; i < 9; i++)
			std::cout << string[i];
		std::cout << ".";
	}
}