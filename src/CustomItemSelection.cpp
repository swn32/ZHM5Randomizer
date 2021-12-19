#include "CustomItemSelection.h"
#include "..\thirdparty\json.hpp"
#include <fstream>
#include "Console.h"

const RepositoryID* CustomItemSelection::randomize(const RepositoryID* in_out_ID)
{
	std::ifstream ifs("C:\\Steam\\steamapps\\common\\HITMAN2\\Retail\\items.json");

	json items;
	ifs >> items;
	ifs.close();

	for (size_t i = 0; i < 10; ++i)
		Console::log(items[i].get<std::string>().c_str());

	if (*in_out_ID == std::string("e942b814-ca60-4f27-971e-9a3141bbdc4d"))
	{
		int k = i;
		i = (i + 1) % 3;
		switch (k)
		{
		case 0:
			return repo.getStablePointer(std::string(items[0].get<std::string>()));
		case 1:
			return repo.getStablePointer(std::string(items[1].get<std::string>()));
		case 2:
			return repo.getStablePointer(std::string(items[2].get<std::string>()));
		default:
			return in_out_ID;
		}
	}
	else if(*in_out_ID == std::string("98bf7fc1-7857-4999-bc99-586c49f24017"))
	{
		int k = j;
		j = (j + 1) % 3;
		switch (k)
		{
		case 0:
			return repo.getStablePointer(std::string(items[3].get<std::string>()));
		case 1:
			return repo.getStablePointer(std::string(items[4].get<std::string>()));
		case 2:
			return repo.getStablePointer(std::string(items[5].get<std::string>()));
		default:
			return in_out_ID;
		}
	}
	else if (*in_out_ID == std::string("4bbe3b64-8bce-416e-a3e9-00bcd1571980"))
	{
		return repo.getStablePointer(std::string(items[9].get<std::string>()));
	}
	else
		return in_out_ID;
}

const RepositoryID* CustomStashItemSelection::randomize(const RepositoryID* in_out_ID)
{
	std::ifstream ifs("C:\\Steam\\steamapps\\common\\HITMAN2\\Retail\\items.json");

	json items;
	ifs >> items;
	ifs.close();

	if (*in_out_ID == std::string("196c112b-9923-4927-97cf-5d3773ae90ea"))
	{
		int k = i;
		i = (i+ 1) % 3;
		switch (k)
		{
		case 0:
			return repo.getStablePointer(std::string(items[6].get<std::string>()));
		case 1:
			return repo.getStablePointer(std::string(items[7].get<std::string>()));
		case 2:
			return repo.getStablePointer(std::string(items[8].get<std::string>()));
		default:
			return in_out_ID;
		}
	}
	else
		return in_out_ID;
}
