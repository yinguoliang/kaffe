/*
 * bfin/common.h
 * Common bfin configuration information.
 * 
 *
 * Copyright (c) 1996, 1997
 *	Transvirtual Technologies, Inc.  All rights reserved.
 *
 * Copyright (c) 2003
 *      Kaffe.org contributors. See ChangeLog for details.
 * Copyright (c) 2005
 * 	blackfin.kang@gmail.com
 *
 * See the file "license.terms" for information on usage and redistribution 
 * of this file. 
 *
 * Written by Godmar Back <gback@cs.utah.edu>
 */

#ifndef __bfin_common_h
#define __bfin_common_h

#include "generic/gentypes.h"

/* The arm never aligns to more than a 4 byte boundary. */
#define	ALIGNMENT_OF_SIZE(S)	((S) < 4 ? (S) : 4)

#include "gccbuiltin.h"
#include "katomic.h"
#include "generic/genatomic.h"
#include "generic/comparexch.h"

#endif
