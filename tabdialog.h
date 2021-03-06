/***************************************************************************
 *   copyright       : (C) 2003-2011 by Pascal Brachet                     *
 *   http://www.xm1math.net/texmaker/                                      *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef TABDIALOG_H
#define TABDIALOG_H

#include "ui_tabdialog.h"

struct colData {
    int alignment;
    int leftborder;
};
struct liData {
    bool topborder;
    bool merge;
    int mergefrom;
    int mergeto;
};
class TabDialog : public QDialog  {
    Q_OBJECT
public:
    TabDialog(QWidget *parent=0, const char *name=0);
    ~TabDialog();
    Ui::TabDialog ui;
    QList<colData> colDataList;
    QList<liData> liDataList;
private slots:
    void NewRows(int num);
    void NewColumns(int num);
    void updateSpanStatus(bool enabled);
    void applytoAllColumns();
    void applytoAllLines();
    void updateColSettings();
    void updateRowSettings();
    void showColSettings(int column);
    void showRowSettings(int row);
    void showColRowSettings(int row,int column);
    void updateTableWidget();
};


#endif


