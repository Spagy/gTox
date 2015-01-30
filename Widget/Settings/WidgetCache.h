/**
    gTox a GTK-based tox-client - https://github.com/KoKuToru/gTox.git

    Copyright (C) 2014  Luca Béla Palkovics
    Copyright (C) 2014  Maurice Mohlek

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>
**/
#ifndef WIDGETCACHE_H
#define WIDGETCACHE_H

#include <gtkmm.h>
class WidgetCache : public Gtk::VBox {
  private:
    Gtk::Switch m_log;
    Gtk::Switch m_file;
    Gtk::Button m_clean_log;
    Gtk::Button m_clean_file;

  public:
    WidgetCache();
    ~WidgetCache();
};

#endif