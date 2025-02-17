
/*

  KLayout Layout Viewer
  Copyright (C) 2006-2022 Matthias Koefferlein

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation; either version 2 of the License, or
  (at your option) any later version.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with this program; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA

*/

/*
  External declarations for for Qt bindings

  DO NOT EDIT THIS FILE. 
  This file has been created automatically
*/

#if !defined(HDR_gsiQtDesignerExternals)
#define HDR_gsiQtDesignerExternals

#include "gsiClass.h"
#include "gsiQtDesignerCommon.h"

class QAbstractExtensionFactory;

namespace tl { template <> struct type_traits<QAbstractExtensionFactory> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTDESIGNER_PUBLIC gsi::Class<QAbstractExtensionFactory> &qtdecl_QAbstractExtensionFactory (); }

class QAbstractExtensionManager;

namespace tl { template <> struct type_traits<QAbstractExtensionManager> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
}; }

namespace gsi { GSI_QTDESIGNER_PUBLIC gsi::Class<QAbstractExtensionManager> &qtdecl_QAbstractExtensionManager (); }

class QAbstractFormBuilder;

namespace tl { template <> struct type_traits<QAbstractFormBuilder> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTDESIGNER_PUBLIC gsi::Class<QAbstractFormBuilder> &qtdecl_QAbstractFormBuilder (); }

class QFormBuilder;

namespace tl { template <> struct type_traits<QFormBuilder> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
}; }

namespace gsi { GSI_QTDESIGNER_PUBLIC gsi::Class<QFormBuilder> &qtdecl_QFormBuilder (); }


#define QT_EXTERNAL_BASE(X) gsi::qtdecl_##X(),

#endif

