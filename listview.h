#ifndef GTKMM_LISTVIEW_H
#define GTKMM_LISTVIEW_H
#include <gtkmm.h>
#include <vector>
#include <string>
class ModelColumns: public Gtk::TreeModel::ColumnRecord
{
    public:
        ModelColumns(){add(m_col_txt);}
        ~ModelColumns(){}
        Gtk::TreeModelColumn<Glib::ustring> m_col_txt;
};
class ListView: public Gtk::TreeView
{
    public:
        ListView(const std::vector<std::string>& v, std::string title);
        ~ListView();
    private:
        Glib::RefPtr<Gtk::ListStore> ref_listStore;
        ModelColumns m_Columns;
};
#endif
