/*
 * Name: Luna del Valle
 * File: main.cpp
 * Created on: Monday Jul 14, 2025 00:03:27 CEST
 */

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

std::string	substitute(std::string old_string, std::string old_pattern, std::string new_pattern) {
	std::string	new_string;
	size_t		i = 0;
	while (i < old_string.length()) {
		if (old_string.substr(i, old_pattern.length()) == old_pattern) {
			new_string += new_pattern;
			i += old_pattern.length();
		}
		else {
			new_string += old_string[i];
			i++;
		}
	}
	return new_string;
}

int	main(int argc, char **argv) {
	std::ifstream	input_file;
	std::ofstream	output_file;
	std::string		line;
	std::string		file_content;

	if (argc != 4) {
		return 0;
	}

	input_file.open(argv[1]);
	while (std::getline(input_file, line)) {
		file_content += substitute(line, argv[2], argv[3]) + "\n";
	}
	input_file.close();
	std::string	filename = std::string(argv[1]) + ".replace";
	output_file.open(filename.c_str());
	output_file<<file_content;
	output_file.close();

	return 0;
}
