#include "Contact.hpp"

int Contact::Get_Index()
{
	return _index;
}

std::string Contact::Get_First_name()
{
	return _first_name;
}

std::string Contact::Get_Last_name()
{
	return _last_name;
}

std::string Contact::Get_Nickname()
{
	return _nickname;
}

std::string Contact::Get_Login()
{
	return _login;
}

std::string Contact::Get_Postal_address()
{
	return _postal_address;
}

std::string Contact::Get_Email_address()
{
	return _email_address;
}

std::string Contact::Get_Birthday_date()
{
	return _birthday_date;
}

std::string Contact::Get_Favorite_meal()
{
	return _favorite_meal;
}

std::string Contact::Get_Underwear_color()
{
	return _underwear_color;
}

std::string Contact::Get_Darkest_secret()
{
	return _darkest_secret;
}

void Contact::Set_Index(int value_index)
{
	_index = value_index;
}

void Contact::Set_First_name(std::string value_first_name)
{
	_first_name = value_first_name;
}

void Contact::Set_Last_name(std::string value_last_name)
{
	_last_name = value_last_name;
}

void Contact::Set_Nickname(std::string value_nickname)
{
	_nickname = value_nickname;
}

void Contact::Set_Login(std::string value_login)
{
	_login = value_login;
}

void Contact::Set_Postal_address(std::string value_postal_address)
{
	_postal_address = value_postal_address;
}

void Contact::Set_Email_address(std::string value_email_address)
{
	_email_address = value_email_address;
}

void Contact::Set_Birthday_date(std::string value_birthday_date)
{
	_birthday_date = value_birthday_date;
}

void Contact::Set_Favorite_meal(std::string value_favorite_meal)
{
	_favorite_meal = value_favorite_meal;
}

void Contact::Set_Underwear_color(std::string value_underwear_color)
{
	_underwear_color = value_underwear_color;
}

void Contact::Set_Darkest_secret(std::string value_darkest_secret)
{
	_darkest_secret = value_darkest_secret;
}

