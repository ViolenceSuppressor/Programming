#include "pch.h"
#include <iostream>
#include <json.hpp>
#include <fstream>
#include <iomanip>

using json = nlohmann::json;

int main()
{
	json jinput;
	json joutput;
	std::ifstream reader("in.json");
	reader >> jinput;
	reader.close();


	for (auto& object : jinput) 
	{
		if (object["completed"] == true)
		{
			bool contains = false;
			for (auto& entry : joutput)
			{
				if (entry["userId"] == object["userId"])
				{
					contains = true;
					entry["task_completed"] = entry["task_completed"] + 1;//из-за этой строки угробил полчаса
					break;
				}
			}
			if (!contains)
			{
				joutput.push_back({ {"userId", object["userId"]}, {"task_completed",1} });
			}
		}
	}

	std::ofstream writer("out.json");
	writer << std::setw(4) << joutput<<std::endl;
	writer.close();
}
