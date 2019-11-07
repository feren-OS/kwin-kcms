/********************************************************************
 KWin - the KDE window manager
 This file is part of the KDE project.

Copyright (C) 2007 Christian Nitschkowski <christian.nitschkowski@kdemail.net>

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*********************************************************************/

#ifndef KWIN_MOUSEMARK_CONFIG_H
#define KWIN_MOUSEMARK_CONFIG_H

#include <kcmodule.h>

#include "ui_mousemark_config.h"

class KActionCollection;

namespace KWin
{

class MouseMarkEffectConfigForm : public QWidget, public Ui::MouseMarkEffectConfigForm
{
    Q_OBJECT
public:
    explicit MouseMarkEffectConfigForm(QWidget* parent);
};

class MouseMarkEffectConfig : public KCModule
{
    Q_OBJECT
public:
    explicit MouseMarkEffectConfig(QWidget* parent = nullptr, const QVariantList& args = QVariantList());
    ~MouseMarkEffectConfig() override;

    void save() override;

private:
    MouseMarkEffectConfigForm* m_ui;
    KActionCollection* m_actionCollection;
};

} // namespace

#endif