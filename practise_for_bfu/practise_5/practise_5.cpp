#include <iostream>

template <typename Yt>
class Massive
{
    int m_size = 0;
    Yt* m_data;
    int m_capasity; //объём занимаемой памяти
    
    void resize(int size)
    {
        if (size > m_capasity)
        {
            int new_capasity = size * 2;
            Yt* new_data = new Yt[new_capasity];
            for (int i=0; i < m_size; i++)
            {
                new_data[i] = m_data[i];
            }
            delete[] m_data;
            m_data = new_data;
            m_capasity = new_capasity;
        }
    }
public:
    int size()
    {
        return m_size;
    }
    
    Yt at(int index)
    {
        if(m_size != 0 && index < m_size && index >= 0)
        {
            return m_data[index];
        }
        else
        {
            return  NULL;
        }
    }
    
    void pushback (Yt znach)
    {
        if(m_size < m_capasity)
        {
            m_data[m_size] = znach;
            m_size++;
        }
        else
        {
            resize(m_capasity + 1);
            m_data[m_size] = znach;
            m_size++;
        }
    }
    
    void editAt(int index,Yt znach)
    {
        if(m_size > 0 && m_size > index)
        {
            m_data[index] = znach;
        }
    }
    
    void insertAt(int index, Yt znach)
    {
        if (m_size != 0)
        {
            if (m_size >= m_capasity)
            {
                resize(m_capasity + 1);
            }
            for (int i = m_size - 1; i >= index; i--)
            {
                m_data[i+1] = m_data[i];
            }
            m_data[index] = znach;
        }
    }
    ~Massive()
    {
        if (m_data)
        {
            delete[] m_data;
        }
    }
    Massive()
    {
        m_size = 0;
        m_capasity = 0;
        m_data = nullptr;
    }
    Massive(int size)
    {
        m_capasity = size;
        if (size != 0) {
            m_data = new Yt[size];
        }
        else{
            m_data = 0;
        }
    }
    void delite(int index)
    {
        for (int i = index + 1; i < m_size; i++)
        {
            m_data[i] = m_data[i+1];
        }
        m_size = m_size - 1;
    }
};

int main()
{
    Massive<int> a = Massive<int> ();
    a.pushback(6);
    a.pushback(3);
    a.pushback(6);
    a.pushback(3);
    a.pushback(6);
    a.pushback(3);
    a.delite(5);
    for (int i =0; i< a.size(); i++)
    {
        std::cout << a.at(i) << "\n";
    }
}
