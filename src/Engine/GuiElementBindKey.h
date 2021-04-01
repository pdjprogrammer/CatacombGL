// Copyright (C) 2021 Arno Ansems
// 
// This program is free software: you can redistribute it and/or modify 
// it under the terms of the GNU General Public License as published by 
// the Free Software Foundation, either version 3 of the License, or 
// (at your option) any later version. 
// 
// This program is distributed in the hope that it will be useful, 
// but WITHOUT ANY WARRANTY; without even the implied warranty of 
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the 
// GNU General Public License for more details. 
// 
// You should have received a copy of the GNU General Public License 
// along with this program.  If not, see http://www.gnu.org/licenses/ 
#pragma once

#include "GuiElementBase.h"
#include "ControlsMap.h"
#include "RenderableText.h"

class GuiElementBindKey : public GuiElementBase
{
public:
    GuiElementBindKey(
        const PlayerInput& playerInput,
        ControlsMap& controlsMap,
        ControlAction controlAction,
        const int16_t offsetXValue,
        RenderableText& renderableText);
    ~GuiElementBindKey() override;

    virtual const GuiEvent& ProcessInput() override;
    virtual void Draw(IRenderer& renderer) const override;

protected:
    ControlsMap& m_controlsMap;
    ControlAction m_controlAction;
    const int16_t m_offsetXValue;
    RenderableText& m_renderableText;
    bool m_waitingForKey;
};
