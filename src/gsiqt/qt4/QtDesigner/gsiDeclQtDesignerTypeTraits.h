
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

/**
*  @file generated/gsiDeclQtDesignerTypeTraits.h
*  @brief Type traits for the Qt binding classes
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#ifndef _HDR_gsiDeclQtDesignerTypeTraits
#define _HDR_gsiDeclQtDesignerTypeTraits

#include "gsiTypes.h"


class QAbstractFormBuilder;
namespace tl {
template <> struct type_traits<QAbstractFormBuilder> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
};
}

class QBrush;
namespace tl {
template <> struct type_traits<QBrush> : public type_traits<void> {
};
}

class QColor;
namespace tl {
template <> struct type_traits<QColor> : public type_traits<void> {
};
}

class QConicalGradient;
namespace tl {
template <> struct type_traits<QConicalGradient> : public type_traits<void> {
};
}

class QDataStream;
namespace tl {
template <> struct type_traits<QDataStream> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
};
}

class QDataStream_Adaptor;
namespace tl {
template <> struct type_traits<QDataStream_Adaptor> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
};
}

class QDir;
namespace tl {
template <> struct type_traits<QDir> : public type_traits<void> {
};
}

class QFile;
namespace tl {
template <> struct type_traits<QFile> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
};
}

class QFileInfo;
namespace tl {
template <> struct type_traits<QFileInfo> : public type_traits<void> {
};
}

class QFormBuilder;
namespace tl {
template <> struct type_traits<QFormBuilder> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
};
}

class QGradient;
namespace tl {
template <> struct type_traits<QGradient> : public type_traits<void> {
};
}

class QIODevice;
namespace tl {
template <> struct type_traits<QIODevice> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
};
}

class QImage;
namespace tl {
template <> struct type_traits<QImage> : public type_traits<void> {
};
}

class QImage_Adaptor;
namespace tl {
template <> struct type_traits<QImage_Adaptor> : public type_traits<void> {
};
}

class QImageTextKeyLang;
namespace tl {
template <> struct type_traits<QImageTextKeyLang> : public type_traits<void> {
};
}

class QLine;
namespace tl {
template <> struct type_traits<QLine> : public type_traits<void> {
};
}

class QLineF;
namespace tl {
template <> struct type_traits<QLineF> : public type_traits<void> {
};
}

class QLinearGradient;
namespace tl {
template <> struct type_traits<QLinearGradient> : public type_traits<void> {
};
}

class QMatrix;
namespace tl {
template <> struct type_traits<QMatrix> : public type_traits<void> {
};
}

struct QMetaObject;
namespace tl {
template <> struct type_traits<QMetaObject> : public type_traits<void> {
};
}

class QObject;
namespace tl {
template <> struct type_traits<QObject> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
};
}

class QObject_Adaptor;
namespace tl {
template <> struct type_traits<QObject_Adaptor> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
};
}

class QPaintDevice;
namespace tl {
template <> struct type_traits<QPaintDevice> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
};
}

class QPaintDevice_Adaptor;
namespace tl {
template <> struct type_traits<QPaintDevice_Adaptor> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
};
}

class QPainterPath;
namespace tl {
template <> struct type_traits<QPainterPath> : public type_traits<void> {
};
}

#include <QPainterPath>
namespace tl {
template <> struct type_traits<QPainterPath::Element> : public type_traits<void> {
};
}

class QPainterPathStroker;
namespace tl {
template <> struct type_traits<QPainterPathStroker> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
};
}

class QPalette;
namespace tl {
template <> struct type_traits<QPalette> : public type_traits<void> {
};
}

class QPixmap;
namespace tl {
template <> struct type_traits<QPixmap> : public type_traits<void> {
};
}

class QPixmap_Adaptor;
namespace tl {
template <> struct type_traits<QPixmap_Adaptor> : public type_traits<void> {
};
}

class QPoint;
namespace tl {
template <> struct type_traits<QPoint> : public type_traits<void> {
};
}

class QPointF;
namespace tl {
template <> struct type_traits<QPointF> : public type_traits<void> {
};
}

class QPolygon;
namespace tl {
template <> struct type_traits<QPolygon> : public type_traits<void> {
};
}

class QPolygonF;
namespace tl {
template <> struct type_traits<QPolygonF> : public type_traits<void> {
};
}

class QRadialGradient;
namespace tl {
template <> struct type_traits<QRadialGradient> : public type_traits<void> {
};
}

class QRect;
namespace tl {
template <> struct type_traits<QRect> : public type_traits<void> {
};
}

class QRectF;
namespace tl {
template <> struct type_traits<QRectF> : public type_traits<void> {
};
}

class QRegExp;
namespace tl {
template <> struct type_traits<QRegExp> : public type_traits<void> {
};
}

class QRegion;
namespace tl {
template <> struct type_traits<QRegion> : public type_traits<void> {
};
}

class QSize;
namespace tl {
template <> struct type_traits<QSize> : public type_traits<void> {
};
}

class QSizeF;
namespace tl {
template <> struct type_traits<QSizeF> : public type_traits<void> {
};
}

class QSizePolicy;
namespace tl {
template <> struct type_traits<QSizePolicy> : public type_traits<void> {
};
}

class QStringMatcher;
namespace tl {
template <> struct type_traits<QStringMatcher> : public type_traits<void> {
};
}

class QSysInfo;
namespace tl {
template <> struct type_traits<QSysInfo> : public type_traits<void> {
};
}

class QTransform;
namespace tl {
template <> struct type_traits<QTransform> : public type_traits<void> {
};
}

class Qt_Namespace;
namespace tl {
template <> struct type_traits<Qt_Namespace> : public type_traits<void> {
  typedef tl::false_tag has_copy_constructor;
  typedef tl::false_tag has_default_constructor;
};
}


#endif
