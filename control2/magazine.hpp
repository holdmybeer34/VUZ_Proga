#pragma once
#include <string>

class Magazine{
    public:
        Magazine(std::string n);
        virtual ~Magazine();

        virtual void info() const = 0;
        virtual void read() const = 0;

        static int getCount();

    protected:
        std::string name;
    private:
        static int count;
};

class Science : public Magazine{
    public:
        Science(std::string n);

        void info() const override;
        void read() const override;
};

class Entertain : public Magazine{
    public:
        Entertain(std::string n);

        void info() const override;
        void read() const override;
};