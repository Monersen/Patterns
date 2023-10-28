#include "../includes/abstractHandler.hpp"
using namespace std;

Handler* AbstractHandler::setNext(Handler* handler) {
    this->next_handler_ = handler;
    return handler;
}

string AbstractHandler::handle(Type type, string message) {
    if (this->next_handler_) {
        return this->next_handler_->handle(type, message);
    }

    return {};
}