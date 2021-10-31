#ifndef _STRING_
#define _STRING_
class String {
 public:
  String(const char* cstr = 0) : m_data(cstr);
  // 拷贝构造函数
  String(const String& str);
  // 拷贝复制函数
  String& operator= const(const String& str);
  // 析构函数
  ~String();
  char* get_c_str() const { return m_data; }

 private:
  char* m_data;
}

String::String(const char* cstr = 0) {
  if (cstr) {
    m_data = new char(strlen(cstr) + 1);
    strcpy(m_data, cstr);
  } else {
    m_data = new char[1];
    m_data[0] = '\0';
  }
}
inline String::~String() { delete[] m_data; }

inline String::String(const String& str) {
  m_data = new char[strlen(str.m_data) + 1];
  strcpy(m_data, str.m_data);
}

inline String& String::operator=(const String& str) {
  if (this == &str) return *this;

  delete[] m_data;
  m_data = new char[strlen(str.m_data) + 1];
  strcpy(m_data, str.m_data);
  return *this;
}

ostream& operator<<(ostream& os, const String& str) {
  os << str.get_c_str();
  return os;
}
#ENDIF