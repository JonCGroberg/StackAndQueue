template<typename T>
class ABS {
public:
    ABS();

    ABS(int capacity);

    ABS(const ABS &old);

    ABS& operator=(const ABS &rhs);

    ~ABS();

    void push(T data);

    T pop();

    T peek();

    unsigned int getSize();

    unsigned int getMaxCapacity();

    T *getDate();

private:
    float scaleFactor = 2.0f;
};

template<typename T>
ABS::ABS
