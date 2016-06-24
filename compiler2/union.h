/******************************************************************************
 * Copyright (c) 2000-2016 Ericsson Telecom AB
 * All rights reserved. This program and the accompanying materials
 * are made available under the terms of the Eclipse Public License v1.0
 * which accompanies this distribution, and is available at
 * http://www.eclipse.org/legal/epl-v10.html
 *
 * Contributors:
 *   Balasko, Jeno
 *   Cserveni, Akos
 *   Kremer, Peter
 *   Raduly, Csaba
 *   Szabo, Janos Zoltan – initial implementation
 *
 ******************************************************************************/
#ifndef UNION_H
#define UNION_H

#include "datatypes.h"
#include "ttcn3/compiler.h"

#ifdef __cplusplus
extern "C" {
#endif

void defUnionClass(const struct_def *sdef, output_struct *output);
void defUnionTemplate(const struct_def *sdef, output_struct *output);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif /* UNION_H */