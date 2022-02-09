#include <fstream>
#include <json.hpp>
#include <iostream>

using json = nlohmann::json;

int main()
{
	json reader;
	std::ifstream reading("./config.json", std::ifstream::binary);

	reading >> reader;

	std::cout << reader["information"][0]["nitro"][0]["remaining month(s)"] << std::endl;
}