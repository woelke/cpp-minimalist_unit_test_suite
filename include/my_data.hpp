#ifndef  MY_DATA_INC
#define  MY_DATA_INC

#include <iostream>
#include <sstream>
#include <ostream>

class my_data
{
private:
    int m_number;
    std::string m_name;
public:
    my_data(int number, const std::string& name)
        : m_number(number)
        , m_name(name) {
    }

    int  get_number() const {
        return m_number;
    }

    const std::string& get_name() const {
        return m_name;
    }

    void set_number(int number) {
        m_number = number;
    }

    void set_name(const std::string& name) {
        m_name = name;
    }

    std::string to_string() const {
        std::stringstream ss;
        ss << get_number() <<  "(" << get_number() << ")";
        return ss.str();
    }
};


#endif
