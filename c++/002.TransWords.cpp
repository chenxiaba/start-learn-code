/*
 * A program to transform words.
 * Take two arguments: The first is the name of word transformation file
  *                              The second is the name of the input to transform
  *
  * run: ./test dict.txt info.txt
  */

using namespace std;

#include <iostream>
#include <sstream>
#include <stdexcept>
#include <fstream>
#include <string>
#include <map>

ifstream& open_file(ifstream &in, const string file_name)
{
	in.close();
	in.clear();

	in.open(file_name.c_str());

	return in;
}

int main(int argc,char * * argv)
{
    if (argc != 3)
    {
        throw runtime_error("wrong number of arguments");        
    }

    ifstream map_file;
    if (!open_file(map_file, argv[1]))
    {
        throw runtime_error("no transform file");
    }

	map<string, string> trans_map;
	string key,value;

	while (map_file >> key >> value)
	{
		trans_map.insert(make_pair(key, value));
	}


	ifstream input_file;
	if (!open_file(input_file, argv[2]))
	{
		throw runtime_error("no input file");
	}

	string line;

	while(getline(input_file, line))
	{
		istringstream stream(line);
		string word;
		bool firstword = true;

		while(stream >> word)
		{
			map<string, string>::const_iterator map_it = 
				trans_map.find(word);

			if (map_it != trans_map.end())
			{
				word = map_it->second;
			}

			if (firstword)
				firstword = false;
			else
				cout << " ";

			cout <<  word;
		}

		cout << endl;
	}

	return 0;
}
