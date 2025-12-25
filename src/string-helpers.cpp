#include <iostream>
#include <cmath>

std::string trim_left(std::string str)
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
        {
            str.erase(0, i + 1);
        }
        else
        {
            break;
        }
    }
    return str;
}
std::string trim_right(std::string str)
{
    for (int i = str.length() - 1; i >= 0; i--)
    {
        if (str[i] == ' ')
        {
            str.erase(i, i + 1);
        }
        else
        {
            break;
        }
    }
    return str;
}

std::string replace(std::string str, std::string from, std::string to)
{
    size_t idx = str.find(from);
    if (idx != std::string::npos)
    {
        str.erase(idx, from.length());
        str.insert(idx, to);
    }
    return str;
}

int main()
{
    std::string name = "Niraj";
    std::cout << "Length: " << name.length() << "\n"; // length

    std::cout << "Empty?: " << name.empty() << "\n"; // check if empty
    // name.clear(); // clears the string
    // std::cout << "Empty?: " << name.empty() << "\n"; // check if empty

    name[0] = 'S'; // replace character

    name.append("@gmail.com"); // insert to the end
    std::cout << name << "\n";
    name.insert(0, "King"); // insert at i position
    std::cout << name << "\n";

    std::cout << name.at(0) << "\n";        // character at index i
    std::cout << name.find("King") << "\n"; // find first match index of the text. if not found, will return std::numeric_limits<int>::max()
    std::cout << name.substr(0, 4) << "\n"; // find text from i to j

    name.erase(0, 4); // empties from position i and j characters after that.
    std::cout << name << "\n";

    std::string _name = "Niraj";
    for (int i = 0; i < _name.length(); i++)
    {
        _name[i] = std::tolower(_name[i]);
    }
    std::cout << "Lower cased: " << _name << "\n"; // lower case

    for (int i = 0; i < _name.length(); i++)
    {
        _name[i] = std::toupper(_name[i]);
    }
    std::cout << "Upper cased: " << _name << "\n"; // upper case

    std::cout << "Trim left: " << "\"" << trim_left("  Niraj") << "\"" << "\n";
    std::cout << "Trim right: " << "\"" << trim_right("Niraj  ") << "\"" << "\n";
    std::cout << "Trim both: " << "\"" << trim_right("  Niraj  ") << "\"" << "\n";

    std::cout << "Replace: " << replace("Niraj", "raj", "abc") << "\n";

    return 0;
}