//The String Object
//Don't compile this


class String
{
public:
	String(const char *str = NULL);			//Normal constructor
	String(const String &other);			//Copy constructor
	~ String(void);					//Deconstructor
	String & operator =(const String &other); 	//Assigned function

private:
	char* m_data;					//For save string content
};


//The answer of this model
String::String(const char *str)
{
	if (NULL == str) 
	{
		m_data = new char[1];
		*m_data = '\0';
	}
	else
	{
		int length = strlen(str);
		m_data = new char[length +1];
		strcpy(m_data, str);
	}
}


String::String(const String &other)
{
	int length = strlen(other.m_data);
	m_data = new char[length + 1];
	
	strcpy(m_data, other.m_data);
}


String & String::operator =(const String &other)
{
	if (this == &this) return *this;

	delete m_data;

	int length = strlen(str);
	m_data = new char[length +1];
	strcpy(m_data, str);

	return *this;
} 


~ String::String()
{
	delete m_data;	//or delete [] m_data;
}


//当类中包括指针类成员变量时，一定要重载其拷贝构造函数、赋值函数和析构函数，这既是对C++程序员的基本要求，也是《Effective　C++》中特别强调的条款。
