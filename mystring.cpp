#include <iostream>
#include <cstring>
#include <cstdio>

class MyString {
private:
	char* data;
	size_t length;

public:
	~ MyString() = default;

	MyString() {
		std::cout<<"default constructor"<<std::endl;
		data = new char[1]{'\0'};
		length = 0;
	}

	MyString(const char* src) {
		std::cout<<"c style"<<std::endl;
		if (src == nullptr) {
			data = new char[1]{'\0'};
			length = 0;
		} else {
			length = std::strlen(src);
			data = new char[length + 1];
			std::strcpy(data, src);
		}
	}

	MyString(const MyString& other) {
		std::cout<<"copy constructor"<<std::endl;
		length = other.length;
		data = new char[length + 1];
		std::strcpy(data, other.data);
	}

	MyString& operator=(const MyString& other) {
		std::cout<<"copy operator="<<std::endl;
		if (this == &other) {
			return *this;
		}

		delete[] data;

		length = other.length;
		data = new char[length + 1];
		std::strcpy(data, other.data);

		return *this;
	}

	MyString(MyString&& other) {
		std::cout<<"move constructor"<<std::endl;
		length = other.length;
		data = other.data;

		// ?
		other.length = 0;
		other.data = new char[1]{'\0'};
	}

	MyString& operator=(MyString&& other) {
		std::cout<<"move operator="<<std::endl;
		if (this == &other) {
			return *this;
		}

		length = other.length;
		data = other.data;

		// ?
		other.length = 0;
		other.data = new char[1]{'\0'};

		return *this;
	}

	char* c_str() {
		return data;
	}
};

int main(int argc, char const *argv[])
{
	MyString str1("str1");
	std::cout<<str1.c_str()<<std::endl;
	MyString str2(str1);
	std::cout<<str2.c_str()<<std::endl;
	MyString str3(std::move(str2));
	std::cout<<str3.c_str()<<std::endl;
	MyString str4 = std::move(str1);
	std::cout<<str4.c_str()<<std::endl;
	MyString str5;
	str5 = std::move(str4);
	std::cout<<str5.c_str()<<std::endl;
	std::cout<<"last="<<str4.c_str()<<std::endl;
	printf("printf last %s\n", str4.c_str());

	return 0;
}