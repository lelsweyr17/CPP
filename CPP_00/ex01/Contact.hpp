#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

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

class Contact {

	public:
		int Get_Index();
		std::string Get_First_name();
		std::string Get_Last_name();
		std::string Get_Nickname();
		std::string Get_Login();
		std::string Get_Postal_address();
		std::string Get_Email_address();
		std::string Get_Birthday_date();
		std::string Get_Favorite_meal();
		std::string Get_Underwear_color();
		std::string Get_Darkest_secret();
		void Set_Index(int value_index);
		void Set_First_name(std::string value_first_name);
		void Set_Last_name(std::string value_last_name);
		void Set_Nickname(std::string value_nickname);
		void Set_Login(std::string value_login);
		void Set_Postal_address(std::string value_postal_address);
		void Set_Email_address(std::string value_email_address);
		void Set_Birthday_date(std::string value_birthday_date);
		void Set_Favorite_meal(std::string value_favorite_meal);
		void Set_Underwear_color(std::string value_underwear_color);
		void Set_Darkest_secret(std::string value_darkest_secret);
		
	private:
		int _index;
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _login;
		std::string _postal_address;
		std::string _email_address;
		std::string _birthday_date;
		std::string _favorite_meal;
		std::string _underwear_color;
		std::string _darkest_secret;
};

#endif