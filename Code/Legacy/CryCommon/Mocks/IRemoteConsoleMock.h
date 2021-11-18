/*
 * Copyright (c) Contributors to the Open 3D Engine Project.
 * For complete copyright and license terms please see the LICENSE at the root of this distribution.
 *
 * SPDX-License-Identifier: Apache-2.0 OR MIT
 *
 */
#pragma once

#include "IConsole.h"

// Auto-generated by gmock_gen.py

class IRemoteConsoleMock 
    : public IRemoteConsole 
{
public:
    MOCK_METHOD0(RegisterConsoleVariables, void());
    MOCK_METHOD0(UnregisterConsoleVariables, void());
    MOCK_METHOD0(Start, void());
    MOCK_METHOD0(Stop, void());
    MOCK_CONST_METHOD0(IsStarted, bool());
    MOCK_METHOD1(AddLogMessage, void(const char* log));
    MOCK_METHOD1(AddLogWarning, void(const char* log));
    MOCK_METHOD1(AddLogError, void(const char* log));
    MOCK_METHOD0(Update, void());
    MOCK_METHOD2(RegisterListener, void(IRemoteConsoleListener* pListener, const char* name));
    MOCK_METHOD1(UnregisterListener, void(IRemoteConsoleListener* pListener));
};