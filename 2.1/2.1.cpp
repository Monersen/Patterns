#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

class Text {
public:
    virtual void render(const string& data) const {
        cout << data;
    }
};


class DecoratedText : public Text {
public:
    explicit DecoratedText(Text* text) : text_(text) {}
    Text* text_;
};

class ItalicText : public DecoratedText {
public:
    explicit ItalicText(Text* text) : DecoratedText(text) {}
    void render(const string& data)  const {
        cout << "<i>";
        text_->render(data);
        cout << "</i>";
    }
};

class BoldText : public DecoratedText {
public:
    explicit BoldText(Text* text) : DecoratedText(text) {}
    void render(const string& data) const {
        cout << "<b>";
        text_->render(data);
        cout << "</b>";
    }
};

class Reversed : public DecoratedText {
public:
    explicit Reversed(Text* text) : DecoratedText(text) {}
    void render(const string& data) const {
        string reversedText = data;

        reverse(reversedText.begin(), reversedText.end());
        text_->render(reversedText);
    }
};

class Paragraph : public DecoratedText {
public:
    explicit Paragraph(Text* text) : DecoratedText(text) {}
    void render(const string& data) const {
        cout << "<p>";
        text_->render(data);
        cout << "</p>";
    }
};

class Link : public DecoratedText {
public:
    explicit Link(Text* text) : DecoratedText(text) {}
    void render(const string& link, const string& data) const {
        cout << "<a href=";
        text_->render(link);
        cout << ">";
        text_->render(data);
        cout << "</a>";
    }
};

int main() {

    auto text_block = new Link(new Text());

    // text_block->render("Hello world!");
    text_block->render("netology.ru", "Hello world");
}