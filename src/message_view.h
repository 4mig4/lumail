/*
 * message_view.h - A class for drawing a single message.
 *
 * This file is part of lumail - http://lumail.org/
 *
 * Copyright (c) 2015 by Steve Kemp.  All rights reserved.
 *
 **
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 dated June, 1991, or (at your
 * option) any later version.
 *
 * On Debian GNU/Linux systems, the complete text of version 2 of the GNU
 * General Public License can be found in `/usr/share/common-licenses/GPL-2'
 */


#pragma once

#include "basic_view.h"


/**
 * This is a message-view of the screen, it shows a single message.
 */
class CMessageView: public CBasicView
{

public:
    /**
     * Constructor.
     */
    CMessageView();

    /**
     * Destructor.
     */
    ~CMessageView();
};
