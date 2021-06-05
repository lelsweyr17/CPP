#include <iostream>
#include <climits>
#include <cmath>

void	toInt(double d) {
	std::cout << "int:\t";
	int c = static_cast<int> (d);
	if (c == INT_MIN) {
		std::cout << "impossible" << std::endl;
	}
	else {
		std::cout << static_cast<int> (d) << std::endl;
	}
}

int	checkNum(long long int d) {
	int count;

	count = 0;
	while (d > 1) {
		d /= 10;
		count++;
		if (count >= 6)
			return 1;
	}
	return 0;
}

void	toFloat(double d) {
	std::cout << "float:\t";
	if (d == INFINITY || d == -INFINITY || d == NAN) {
		std::cout << d << "f" << std::endl;
	}
	else {
		std::cout << static_cast<float> (d);
		if (!(d - static_cast<long long int> (d)) && !checkNum(static_cast<long long int> (d)))
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
}

void	toDouble(double d) {
	std::cout << "double:\t";
	if (d == INFINITY || d == -INFINITY || d == NAN) {
		std::cout << d << std::endl;
	}
	else {
		std::cout << static_cast<double> (d);
		if (!(d - static_cast<int> (d))  && !checkNum(static_cast<long long int> (d)))
			std::cout << ".0";
		std::cout << std::endl;
	}
}

void	toChar(double d) {
	std::cout << "char:\t";
	long long c = static_cast<long long> (d);
	if (c == LONG_LONG_MIN) {
		std::cout << "impossible" << std::endl;
	}
	else if (c % 128 < 33) {
		std::cout << "not displayable" << std::endl;
	}
	else{
		std::cout << static_cast<char> (c % 128) << std::endl;
	}
}

int	checkArg(std::string arg) {
	std::string pseudoLiterals[8] = {"nan", "nanf", "-inf", "inf", "+inf", "-inff", "inff", "+inff"};
	for (int i = 0; i < 8; ++i) {
		if (arg == pseudoLiterals[i]) {
			std::cout << "char:\timpossible" << std::endl;
			std::cout << "int:\timpossible" << std::endl;
			if (pseudoLiterals[i] == "inff" || pseudoLiterals[i] == "-inff" \
			|| pseudoLiterals[i] == "+inff" || pseudoLiterals[i] == "nanf")
				pseudoLiterals[i][pseudoLiterals[i].size() - 1] = 0;
			std::cout << "float:\t" << pseudoLiterals[i] << "f" << std::endl;
			std::cout << "double:\t" << pseudoLiterals[i] << std::endl;
			return 1;
		}
	}
	return 0;
}

int	main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Invalid nbr of arguments" << std::endl;
		return 1;
	}
	else {
		try {
			if (checkArg(argv[1]))
				return 0;
			char *end;
			double d = std::strtod(argv[1], &end);
			if (std::strlen(end) > 1 || (end[0] && end[0] != 'f')) {
				std::cout << "char:\timpossible" << std::endl;
				std::cout << "int:\timpossible" << std::endl;
				std::cout << "float:\t" << "impossible" << std::endl;
				std::cout << "double:\t" << "impossible" << std::endl;
			}
			else {
				toChar(d);
				toInt(d);
				toFloat(d);
				toDouble(d);
			}
		}
		catch (const std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
	return 0;
}