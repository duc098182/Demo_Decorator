#include <iostream>
using namespace std;

class Notifier{
    public:
        virtual string Message(){
            cout << "**Playing normal buzz**\n";
            return "You have receive a notify from: ";
        };
};

class SoundA : public Notifier{
    public:
        string Message(){
            cout << "**Playing sound A**\n";
            return "You have receive a notify from: ";
        }
};

class SoundB : public Notifier{
    public:
        string Message(){
            cout << "**Playing sound B**\n";
            return "You have receive a notify from: ";
        }
};

class AppDecorator : public Notifier{
    protected:
        Notifier* wrapper;

    public:
        AppDecorator(Notifier* app){
            wrapper = app;
        }

        ~AppDecorator(){
            delete wrapper;
        }
};

class FacebookDecorator : public AppDecorator{
    public:
        FacebookDecorator(Notifier *app) : AppDecorator(app){};

        string Message(){
            return (wrapper->Message() + "Facebook ");
        }
};

class EmailDecorator : public AppDecorator{
    public:
        EmailDecorator(Notifier *app) : AppDecorator(app){};

        string Message(){
            return (wrapper->Message() + "Email ");
        }
};

int main()
{
    EmailDecorator notify(new FacebookDecorator(new Notifier));
    cout << notify.Message();

    return 0;
}