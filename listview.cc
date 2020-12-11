#include "listview.h"
#include <iostream>
// #include <vector>
// #include <string>

ListView::ListView(std::vector<std::string>& v, std::string title = "List")
{
    
    ref_listStore = Gtk::ListStore::create(m_Columns);
    set_model(ref_listStore);
    for(std::string s: v){
        Gtk::TreeModel::Row row = *(ref_listStore->append());
        row[m_Columns.m_col_txt] = s;
        std::cout << s << std::endl;
    }
    append_column(title, m_Columns.m_col_txt);
}
ListView::~ListView(){}