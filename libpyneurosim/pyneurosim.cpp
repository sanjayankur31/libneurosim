/*
 *  pyneurosim.cpp
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

#include "pyneurosim.h"

void PyCSA_init ();

extern "C" {
  bool CGL_isConnectionGenerator (PyObject* pObj);
  ConnectionGenerator* CGL_unpackConnectionGenerator (PyObject* pObj);
}

namespace PNS {

  bool
  isConnectionGenerator (PyObject* pObj)
  {
    return CGL_isConnectionGenerator (pObj);
  }

  ConnectionGenerator*
  unpackConnectionGenerator (PyObject* pObj)
  {
    return CGL_unpackConnectionGenerator (pObj);
  }

  void
  registerConnectionGeneratorType (checkFuncT, unpackFuncT)
  {
  }

  void
  init ()
  {
    PyCSA_init ();
  }

}
