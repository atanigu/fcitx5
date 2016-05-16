/*
 * Copyright (C) 2016~2016 by CSSlayer
 * wengxt@gmail.com
 *
 * This library is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; see the file COPYING. If not,
 * see <http://www.gnu.org/licenses/>.
 */
#ifndef _FCITX_FOCUSGROUP_H_
#define _FCITX_FOCUSGROUP_H_

#include <fcitx-utils/macros.h>
#include <memory>
#include "fcitxcore_export.h"

namespace fcitx {

class InputContextManager;
class FocusGroupPrivate;
class InputContext;

class FCITXCORE_EXPORT FocusGroup
{
    friend class InputContextManagerPrivate;
public:
    FocusGroup(InputContextManager &manager);
    virtual ~FocusGroup();

    void setFocusedInputContext(InputContext *ic);
    InputContext *focusedInputContext() const;

private:
    std::unique_ptr<FocusGroupPrivate> d_ptr;
    FCITX_DECLARE_PRIVATE(FocusGroup);
};

}

#endif // _FCITX_FOCUSGROUP_H_
