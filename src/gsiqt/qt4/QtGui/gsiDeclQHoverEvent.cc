
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
*  @file gsiDeclQHoverEvent.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QHoverEvent>
#include <QPoint>
#include "gsiQt.h"
#include "gsiQtGuiCommon.h"
#include "gsiDeclQtGuiTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QHoverEvent

// const QPoint &QHoverEvent::oldPos()


static void _init_f_oldPos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QPoint & > ();
}

static void _call_f_oldPos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QPoint & > ((const QPoint &)((QHoverEvent *)cls)->oldPos ());
}


// const QPoint &QHoverEvent::pos()


static void _init_f_pos_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<const QPoint & > ();
}

static void _call_f_pos_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<const QPoint & > ((const QPoint &)((QHoverEvent *)cls)->pos ());
}


namespace gsi
{

static gsi::Methods methods_QHoverEvent () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericMethod ("oldPos", "@brief Method const QPoint &QHoverEvent::oldPos()\n", true, &_init_f_oldPos_c0, &_call_f_oldPos_c0);
  methods += new qt_gsi::GenericMethod ("pos", "@brief Method const QPoint &QHoverEvent::pos()\n", true, &_init_f_pos_c0, &_call_f_pos_c0);
  return methods;
}

gsi::Class<QEvent> &qtdecl_QEvent ();

gsi::Class<QHoverEvent> decl_QHoverEvent (qtdecl_QEvent (), "QtGui", "QHoverEvent_Native",
  methods_QHoverEvent (),
  "@hide\n@alias QHoverEvent");

GSI_QTGUI_PUBLIC gsi::Class<QHoverEvent> &qtdecl_QHoverEvent () { return decl_QHoverEvent; }

}


class QHoverEvent_Adaptor : public QHoverEvent, public qt_gsi::QtObjectBase
{
public:

  virtual ~QHoverEvent_Adaptor();

  //  [adaptor ctor] QHoverEvent::QHoverEvent(QEvent::Type type, const QPoint &pos, const QPoint &oldPos)
  QHoverEvent_Adaptor(QEvent::Type type, const QPoint &pos, const QPoint &oldPos) : QHoverEvent(type, pos, oldPos)
  {
    qt_gsi::QtObjectBase::init (this);
  }

  
};

QHoverEvent_Adaptor::~QHoverEvent_Adaptor() { }

//  Constructor QHoverEvent::QHoverEvent(QEvent::Type type, const QPoint &pos, const QPoint &oldPos) (adaptor class)

static void _init_ctor_QHoverEvent_Adaptor_5181 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QEvent::Type>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("pos");
  decl->add_arg<const QPoint & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("oldPos");
  decl->add_arg<const QPoint & > (argspec_2);
  decl->set_return_new<QHoverEvent_Adaptor> ();
}

static void _call_ctor_QHoverEvent_Adaptor_5181 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QEvent::Type>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QEvent::Type>::target_type & >() (args, heap);
  const QPoint &arg2 = gsi::arg_reader<const QPoint & >() (args, heap);
  const QPoint &arg3 = gsi::arg_reader<const QPoint & >() (args, heap);
  ret.write<QHoverEvent_Adaptor *> (new QHoverEvent_Adaptor (qt_gsi::QtToCppAdaptor<QEvent::Type>(arg1).cref(), arg2, arg3));
}


namespace gsi
{

gsi::Class<QHoverEvent> &qtdecl_QHoverEvent ();

static gsi::Methods methods_QHoverEvent_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QHoverEvent::QHoverEvent(QEvent::Type type, const QPoint &pos, const QPoint &oldPos)\nThis method creates an object of class QHoverEvent.", &_init_ctor_QHoverEvent_Adaptor_5181, &_call_ctor_QHoverEvent_Adaptor_5181);
  return methods;
}

gsi::Class<QHoverEvent_Adaptor> decl_QHoverEvent_Adaptor (qtdecl_QHoverEvent (), "QtGui", "QHoverEvent",
  methods_QHoverEvent_Adaptor (),
  "@qt\n@brief Binding of QHoverEvent");

}

