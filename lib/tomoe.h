/* -*- Mode: C++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */
/*
 *  Copyright (C) 2000 - 2004 Hiroyuki Komatsu <komatsu@taiyaki.org>
 *  Copyright (C) 2004 Hiroaki Nakamura <hnakamur@good-day.co.jp>
 *  Copyright (C) 2005 Hiroyuki Ikezoe <poincare@ikezoe.net>
 *  Copyright (C) 2005 Takuro Ashie <ashie@homa.ne.jp>
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this program; if not, write to the
 *  Free Software Foundation, Inc., 59 Temple Place, Suite 330,
 *  Boston, MA  02111-1307  USA
 *
 *  $Id: tomoe.h 923 2006-12-01 01:40:38Z ikezoe $
 */

#ifndef __TOMOE_H__
#define __TOMOE_H__

#include <glib.h>

G_BEGIN_DECLS

#include "tomoe-config.h"
#include "tomoe-context.h"
#include "tomoe-enum-types.h"
#include "tomoe-recognizer.h"
#include "tomoe-writing.h"

void       tomoe_init          (void);

void       tomoe_quit          (void);

G_END_DECLS

#endif /* __TOMOE_H__ */

/*
vi:ts=4:nowrap:ai:expandtab
*/
