/*
 *  pyneurosim.h
 *
 *  This file is part of libneurosim.
 *
 *  Copyright (C) 2013 INCF
 *
 *  libneurosim is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  libneurosim is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef PYNEUROSIM_H
#define PYNEUROSIM_H

extern "C" {
#include <Python.h>
}

#include "connection_generator.h"

namespace PNS {

  bool isConnectionGenerator (PyObject* pObj);

  ConnectionGenerator* unpackConnectionGenerator (PyObject* pObj);

  typedef bool (*CheckFuncT) (PyObject*);

  typedef ConnectionGenerator* (*UnpackFuncT) (PyObject*);

  void registerConnectionGeneratorType (CheckFuncT, UnpackFuncT);

}

#endif /* #ifndef PYNEUROSIM_H */
