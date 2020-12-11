#include "listview.h"
#include <vector>
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
    
    vector<string> v;
    v.push_back("Apple");
    v.push_back("Banana");
    v.push_back("Cherry");
    v.push_back("Dragon Fruit");
    v.push_back("Egg Fruit"); 


    auto app = Gtk::Application::create(argc, argv, "org.example.listviewdemo");

    Gtk::Window window;
    window.set_title("List View Demo");
    window.set_default_size(200, 200);
    window.set_position(Gtk::WIN_POS_CENTER);

    Gtk::ScrolledWindow scrolledWindow;
    ListView listView(v, "Fruits");
    window.add(scrolledWindow);
    scrolledWindow.add(listView);
    window.show_all();
    return app->run(window);
}
