/***************************************************************************
 *   Copyright (C) 2008-2009 by Heiko Koehn - KoehnHeiko@googlemail.com    *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/


#ifndef DLGROOMEXITS_H
#define DLGROOMEXITS_H

#include <QDialog>
#include <QTreeWidgetItem>
#include <QtWidgets>
#include "ui_room_exits.h"

class Host;
class TRoom;

class dlgRoomExits : public QDialog, public Ui::roomExits
{
    Q_OBJECT
public:
    explicit dlgRoomExits(Host *, QWidget *parent = 0);
    void init( int );
    Host * mpHost;
    QTreeWidgetItem * mpEditItem;

signals:

public slots:
    void save();
    void slot_addSpecialExit();
    void slot_editSpecialExit(QTreeWidgetItem *, int);
    void slot_endEditSpecialExits();
    void slot_ne_textEdited(const QString &);
    void slot_n_textEdited(const QString &);
    void slot_nw_textEdited(const QString &);
    void slot_up_textEdited(const QString &);
    void slot_w_textEdited(const QString &);
    void slot_e_textEdited(const QString &);
    void slot_down_textEdited(const QString &);
    void slot_sw_textEdited(const QString &);
    void slot_s_textEdited(const QString &);
    void slot_se_textEdited(const QString &);
    void slot_in_textEdited(const QString &);
    void slot_out_textEdited(const QString &);
    void slot_stub_ne_stateChanged(int);
    void slot_stub_n_stateChanged(int);
    void slot_stub_nw_stateChanged(int);
    void slot_stub_up_stateChanged(int);
    void slot_stub_w_stateChanged(int);
    void slot_stub_e_stateChanged(int);
    void slot_stub_down_stateChanged(int);
    void slot_stub_sw_stateChanged(int);
    void slot_stub_s_stateChanged(int);
    void slot_stub_se_stateChanged(int);
    void slot_stub_in_stateChanged(int);
    void slot_stub_out_stateChanged(int);

private:
    TRoom * pR;
    int mRoomID;
    int mEditColumn;
};

#endif // DLGROOMEXITS_H
