#include <fstream>
#include <string>
using namespace std;

class Printable
{
public:
    virtual ~Printable() = default;

    virtual string print() const = 0;
};

class printHTML : public Printable {
public:
    printHTML(string data) : data_(data) {}

    string print() const override {
        return "<html>" + data_ + "<html/>";
    }

private:
    string data_;
};

class printJSON : public Printable {
public:
    printJSON(string data) : data_(data) {}

    string print() const override {
        return "{ \"data\": }\"" + data_ + "\"}";
    }

private:
    string data_;
};

class printTEXT : public Printable {
public:
    printTEXT(string data) : data_(data) {}

    string print() const override {
        return data_;
    }

private:
    string data_;
};

void saveTo(ofstream& file, const Printable& printable)
{
    file << printable.print();
}

int main() {
    ofstream file("file.txt");
    printJSON json("Successful");
    printHTML html("Successfull");

    saveTo(file, html);

    return 0;
}