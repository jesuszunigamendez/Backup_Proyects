

#include <vector>

template <typename D>
class Stack
{

public:
    Stack(){};

    Stack(const Stack &orig){};

    ~Stack(){};

    void push(D d)
    {
        this->a.push_back(d);
    }

    D pop()
    {
        if (this->a.size() > 0)
        {
            D d = this->a[a.size()-1];
            a.pop_back();
            return d;
        }
        else
        {
            D d;
            return d;
        }
    }

    D peek()
    {
        if (this->a.size() > 0)
        {
            D d = this->a.at(0);
            return d;
        }
        else
        {
            D d;
            return d;
        }
    }

private:
    vector<D> a;
};
