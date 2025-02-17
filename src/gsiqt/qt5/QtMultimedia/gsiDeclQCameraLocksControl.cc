
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
*  @file gsiDeclQCameraLocksControl.cc 
*
*  DO NOT EDIT THIS FILE. 
*  This file has been created automatically
*/

#include <QCameraLocksControl>
#include <QChildEvent>
#include <QEvent>
#include <QMetaMethod>
#include <QObject>
#include <QThread>
#include <QTimerEvent>
#include "gsiQt.h"
#include "gsiQtMultimediaCommon.h"
#include "gsiDeclQtMultimediaTypeTraits.h"
#include <memory>

// -----------------------------------------------------------------------
// class QCameraLocksControl

//  get static meta object

static void _init_smo (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return<const QMetaObject &> ();
}

static void _call_smo (const qt_gsi::GenericStaticMethod *, gsi::SerialArgs &, gsi::SerialArgs &ret) 
{
  ret.write<const QMetaObject &> (QCameraLocksControl::staticMetaObject);
}


// QCamera::LockStatus QCameraLocksControl::lockStatus(QCamera::LockType lock)


static void _init_f_lockStatus_c2029 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("lock");
  decl->add_arg<const qt_gsi::Converter<QCamera::LockType>::target_type & > (argspec_0);
  decl->set_return<qt_gsi::Converter<QCamera::LockStatus>::target_type > ();
}

static void _call_f_lockStatus_c2029 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QCamera::LockType>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QCamera::LockType>::target_type & >() (args, heap);
  ret.write<qt_gsi::Converter<QCamera::LockStatus>::target_type > ((qt_gsi::Converter<QCamera::LockStatus>::target_type)qt_gsi::CppToQtAdaptor<QCamera::LockStatus>(((QCameraLocksControl *)cls)->lockStatus (qt_gsi::QtToCppAdaptor<QCamera::LockType>(arg1).cref())));
}


// void QCameraLocksControl::lockStatusChanged(QCamera::LockType type, QCamera::LockStatus status, QCamera::LockChangeReason reason)


static void _init_f_lockStatusChanged_6877 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("type");
  decl->add_arg<const qt_gsi::Converter<QCamera::LockType>::target_type & > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("status");
  decl->add_arg<const qt_gsi::Converter<QCamera::LockStatus>::target_type & > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("reason");
  decl->add_arg<const qt_gsi::Converter<QCamera::LockChangeReason>::target_type & > (argspec_2);
  decl->set_return<void > ();
}

static void _call_f_lockStatusChanged_6877 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QCamera::LockType>::target_type & arg1 = gsi::arg_reader<const qt_gsi::Converter<QCamera::LockType>::target_type & >() (args, heap);
  const qt_gsi::Converter<QCamera::LockStatus>::target_type & arg2 = gsi::arg_reader<const qt_gsi::Converter<QCamera::LockStatus>::target_type & >() (args, heap);
  const qt_gsi::Converter<QCamera::LockChangeReason>::target_type & arg3 = gsi::arg_reader<const qt_gsi::Converter<QCamera::LockChangeReason>::target_type & >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraLocksControl *)cls)->lockStatusChanged (qt_gsi::QtToCppAdaptor<QCamera::LockType>(arg1).cref(), qt_gsi::QtToCppAdaptor<QCamera::LockStatus>(arg2).cref(), qt_gsi::QtToCppAdaptor<QCamera::LockChangeReason>(arg3).cref());
}


// void QCameraLocksControl::searchAndLock(QFlags<QCamera::LockType> locks)


static void _init_f_searchAndLock_2725 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("locks");
  decl->add_arg<QFlags<QCamera::LockType> > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_searchAndLock_2725 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QCamera::LockType> arg1 = gsi::arg_reader<QFlags<QCamera::LockType> >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraLocksControl *)cls)->searchAndLock (arg1);
}


// QFlags<QCamera::LockType> QCameraLocksControl::supportedLocks()


static void _init_f_supportedLocks_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<QCamera::LockType> > ();
}

static void _call_f_supportedLocks_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<QCamera::LockType> > ((QFlags<QCamera::LockType>)((QCameraLocksControl *)cls)->supportedLocks ());
}


// void QCameraLocksControl::unlock(QFlags<QCamera::LockType> locks)


static void _init_f_unlock_2725 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("locks");
  decl->add_arg<QFlags<QCamera::LockType> > (argspec_0);
  decl->set_return<void > ();
}

static void _call_f_unlock_2725 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QCamera::LockType> arg1 = gsi::arg_reader<QFlags<QCamera::LockType> >() (args, heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraLocksControl *)cls)->unlock (arg1);
}


// static QString QCameraLocksControl::tr(const char *s, const char *c, int n)


static void _init_f_tr_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "__null");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_tr_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (__null, heap);
  int arg3 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  ret.write<QString > ((QString)QCameraLocksControl::tr (arg1, arg2, arg3));
}


// static QString QCameraLocksControl::trUtf8(const char *s, const char *c, int n)


static void _init_f_trUtf8_4013 (qt_gsi::GenericStaticMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("s");
  decl->add_arg<const char * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("c", true, "__null");
  decl->add_arg<const char * > (argspec_1);
  static gsi::ArgSpecBase argspec_2 ("n", true, "-1");
  decl->add_arg<int > (argspec_2);
  decl->set_return<QString > ();
}

static void _call_f_trUtf8_4013 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  const char *arg2 = args ? gsi::arg_reader<const char * >() (args, heap) : gsi::arg_maker<const char * >() (__null, heap);
  int arg3 = args ? gsi::arg_reader<int >() (args, heap) : gsi::arg_maker<int >() (-1, heap);
  ret.write<QString > ((QString)QCameraLocksControl::trUtf8 (arg1, arg2, arg3));
}


namespace gsi
{

static gsi::Methods methods_QCameraLocksControl () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("staticMetaObject", "@brief Obtains the static MetaObject for this class.", &_init_smo, &_call_smo);
  methods += new qt_gsi::GenericMethod ("lockStatus", "@brief Method QCamera::LockStatus QCameraLocksControl::lockStatus(QCamera::LockType lock)\n", true, &_init_f_lockStatus_c2029, &_call_f_lockStatus_c2029);
  methods += new qt_gsi::GenericMethod ("lockStatusChanged", "@brief Method void QCameraLocksControl::lockStatusChanged(QCamera::LockType type, QCamera::LockStatus status, QCamera::LockChangeReason reason)\n", false, &_init_f_lockStatusChanged_6877, &_call_f_lockStatusChanged_6877);
  methods += new qt_gsi::GenericMethod ("searchAndLock", "@brief Method void QCameraLocksControl::searchAndLock(QFlags<QCamera::LockType> locks)\n", false, &_init_f_searchAndLock_2725, &_call_f_searchAndLock_2725);
  methods += new qt_gsi::GenericMethod ("supportedLocks", "@brief Method QFlags<QCamera::LockType> QCameraLocksControl::supportedLocks()\n", true, &_init_f_supportedLocks_c0, &_call_f_supportedLocks_c0);
  methods += new qt_gsi::GenericMethod ("unlock", "@brief Method void QCameraLocksControl::unlock(QFlags<QCamera::LockType> locks)\n", false, &_init_f_unlock_2725, &_call_f_unlock_2725);
  methods += new qt_gsi::GenericStaticMethod ("tr", "@brief Static method QString QCameraLocksControl::tr(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_tr_4013, &_call_f_tr_4013);
  methods += new qt_gsi::GenericStaticMethod ("trUtf8", "@brief Static method QString QCameraLocksControl::trUtf8(const char *s, const char *c, int n)\nThis method is static and can be called without an instance.", &_init_f_trUtf8_4013, &_call_f_trUtf8_4013);
  return methods;
}

gsi::Class<QMediaControl> &qtdecl_QMediaControl ();

qt_gsi::QtNativeClass<QCameraLocksControl> decl_QCameraLocksControl (qtdecl_QMediaControl (), "QtMultimedia", "QCameraLocksControl_Native",
  methods_QCameraLocksControl (),
  "@hide\n@alias QCameraLocksControl");

GSI_QTMULTIMEDIA_PUBLIC gsi::Class<QCameraLocksControl> &qtdecl_QCameraLocksControl () { return decl_QCameraLocksControl; }

}


class QCameraLocksControl_Adaptor : public QCameraLocksControl, public qt_gsi::QtObjectBase
{
public:

  virtual ~QCameraLocksControl_Adaptor();

  //  [adaptor ctor] QCameraLocksControl::QCameraLocksControl()
  QCameraLocksControl_Adaptor() : QCameraLocksControl()
  {
    qt_gsi::QtObjectBase::init (this);
  }

  //  [expose] bool QCameraLocksControl::isSignalConnected(const QMetaMethod &signal)
  bool fp_QCameraLocksControl_isSignalConnected_c2394 (const QMetaMethod &signal) const {
    return QCameraLocksControl::isSignalConnected(signal);
  }

  //  [expose] int QCameraLocksControl::receivers(const char *signal)
  int fp_QCameraLocksControl_receivers_c1731 (const char *signal) const {
    return QCameraLocksControl::receivers(signal);
  }

  //  [expose] QObject *QCameraLocksControl::sender()
  QObject * fp_QCameraLocksControl_sender_c0 () const {
    return QCameraLocksControl::sender();
  }

  //  [expose] int QCameraLocksControl::senderSignalIndex()
  int fp_QCameraLocksControl_senderSignalIndex_c0 () const {
    return QCameraLocksControl::senderSignalIndex();
  }

  //  [adaptor impl] bool QCameraLocksControl::event(QEvent *)
  bool cbs_event_1217_0(QEvent *arg1)
  {
    return QCameraLocksControl::event(arg1);
  }

  virtual bool event(QEvent *arg1)
  {
    if (cb_event_1217_0.can_issue()) {
      return cb_event_1217_0.issue<QCameraLocksControl_Adaptor, bool, QEvent *>(&QCameraLocksControl_Adaptor::cbs_event_1217_0, arg1);
    } else {
      return QCameraLocksControl::event(arg1);
    }
  }

  //  [adaptor impl] bool QCameraLocksControl::eventFilter(QObject *, QEvent *)
  bool cbs_eventFilter_2411_0(QObject *arg1, QEvent *arg2)
  {
    return QCameraLocksControl::eventFilter(arg1, arg2);
  }

  virtual bool eventFilter(QObject *arg1, QEvent *arg2)
  {
    if (cb_eventFilter_2411_0.can_issue()) {
      return cb_eventFilter_2411_0.issue<QCameraLocksControl_Adaptor, bool, QObject *, QEvent *>(&QCameraLocksControl_Adaptor::cbs_eventFilter_2411_0, arg1, arg2);
    } else {
      return QCameraLocksControl::eventFilter(arg1, arg2);
    }
  }

  //  [adaptor impl] QCamera::LockStatus QCameraLocksControl::lockStatus(QCamera::LockType lock)
  qt_gsi::Converter<QCamera::LockStatus>::target_type cbs_lockStatus_c2029_0(const qt_gsi::Converter<QCamera::LockType>::target_type & lock) const
  {
    __SUPPRESS_UNUSED_WARNING (lock);
    throw qt_gsi::AbstractMethodCalledException("lockStatus");
  }

  virtual QCamera::LockStatus lockStatus(QCamera::LockType lock) const
  {
    if (cb_lockStatus_c2029_0.can_issue()) {
      return qt_gsi::QtToCppAdaptor<QCamera::LockStatus>(cb_lockStatus_c2029_0.issue<QCameraLocksControl_Adaptor, qt_gsi::Converter<QCamera::LockStatus>::target_type, const qt_gsi::Converter<QCamera::LockType>::target_type &>(&QCameraLocksControl_Adaptor::cbs_lockStatus_c2029_0, qt_gsi::CppToQtAdaptor<QCamera::LockType>(lock))).cref();
    } else {
      throw qt_gsi::AbstractMethodCalledException("lockStatus");
    }
  }

  //  [adaptor impl] void QCameraLocksControl::searchAndLock(QFlags<QCamera::LockType> locks)
  void cbs_searchAndLock_2725_0(QFlags<QCamera::LockType> locks)
  {
    __SUPPRESS_UNUSED_WARNING (locks);
    throw qt_gsi::AbstractMethodCalledException("searchAndLock");
  }

  virtual void searchAndLock(QFlags<QCamera::LockType> locks)
  {
    if (cb_searchAndLock_2725_0.can_issue()) {
      cb_searchAndLock_2725_0.issue<QCameraLocksControl_Adaptor, QFlags<QCamera::LockType> >(&QCameraLocksControl_Adaptor::cbs_searchAndLock_2725_0, locks);
    } else {
      throw qt_gsi::AbstractMethodCalledException("searchAndLock");
    }
  }

  //  [adaptor impl] QFlags<QCamera::LockType> QCameraLocksControl::supportedLocks()
  QFlags<QCamera::LockType> cbs_supportedLocks_c0_0() const
  {
    throw qt_gsi::AbstractMethodCalledException("supportedLocks");
  }

  virtual QFlags<QCamera::LockType> supportedLocks() const
  {
    if (cb_supportedLocks_c0_0.can_issue()) {
      return cb_supportedLocks_c0_0.issue<QCameraLocksControl_Adaptor, QFlags<QCamera::LockType> >(&QCameraLocksControl_Adaptor::cbs_supportedLocks_c0_0);
    } else {
      throw qt_gsi::AbstractMethodCalledException("supportedLocks");
    }
  }

  //  [adaptor impl] void QCameraLocksControl::unlock(QFlags<QCamera::LockType> locks)
  void cbs_unlock_2725_0(QFlags<QCamera::LockType> locks)
  {
    __SUPPRESS_UNUSED_WARNING (locks);
    throw qt_gsi::AbstractMethodCalledException("unlock");
  }

  virtual void unlock(QFlags<QCamera::LockType> locks)
  {
    if (cb_unlock_2725_0.can_issue()) {
      cb_unlock_2725_0.issue<QCameraLocksControl_Adaptor, QFlags<QCamera::LockType> >(&QCameraLocksControl_Adaptor::cbs_unlock_2725_0, locks);
    } else {
      throw qt_gsi::AbstractMethodCalledException("unlock");
    }
  }

  //  [adaptor impl] void QCameraLocksControl::childEvent(QChildEvent *)
  void cbs_childEvent_1701_0(QChildEvent *arg1)
  {
    QCameraLocksControl::childEvent(arg1);
  }

  virtual void childEvent(QChildEvent *arg1)
  {
    if (cb_childEvent_1701_0.can_issue()) {
      cb_childEvent_1701_0.issue<QCameraLocksControl_Adaptor, QChildEvent *>(&QCameraLocksControl_Adaptor::cbs_childEvent_1701_0, arg1);
    } else {
      QCameraLocksControl::childEvent(arg1);
    }
  }

  //  [adaptor impl] void QCameraLocksControl::customEvent(QEvent *)
  void cbs_customEvent_1217_0(QEvent *arg1)
  {
    QCameraLocksControl::customEvent(arg1);
  }

  virtual void customEvent(QEvent *arg1)
  {
    if (cb_customEvent_1217_0.can_issue()) {
      cb_customEvent_1217_0.issue<QCameraLocksControl_Adaptor, QEvent *>(&QCameraLocksControl_Adaptor::cbs_customEvent_1217_0, arg1);
    } else {
      QCameraLocksControl::customEvent(arg1);
    }
  }

  //  [adaptor impl] void QCameraLocksControl::disconnectNotify(const QMetaMethod &signal)
  void cbs_disconnectNotify_2394_0(const QMetaMethod &signal)
  {
    QCameraLocksControl::disconnectNotify(signal);
  }

  virtual void disconnectNotify(const QMetaMethod &signal)
  {
    if (cb_disconnectNotify_2394_0.can_issue()) {
      cb_disconnectNotify_2394_0.issue<QCameraLocksControl_Adaptor, const QMetaMethod &>(&QCameraLocksControl_Adaptor::cbs_disconnectNotify_2394_0, signal);
    } else {
      QCameraLocksControl::disconnectNotify(signal);
    }
  }

  //  [adaptor impl] void QCameraLocksControl::timerEvent(QTimerEvent *)
  void cbs_timerEvent_1730_0(QTimerEvent *arg1)
  {
    QCameraLocksControl::timerEvent(arg1);
  }

  virtual void timerEvent(QTimerEvent *arg1)
  {
    if (cb_timerEvent_1730_0.can_issue()) {
      cb_timerEvent_1730_0.issue<QCameraLocksControl_Adaptor, QTimerEvent *>(&QCameraLocksControl_Adaptor::cbs_timerEvent_1730_0, arg1);
    } else {
      QCameraLocksControl::timerEvent(arg1);
    }
  }

  gsi::Callback cb_event_1217_0;
  gsi::Callback cb_eventFilter_2411_0;
  gsi::Callback cb_lockStatus_c2029_0;
  gsi::Callback cb_searchAndLock_2725_0;
  gsi::Callback cb_supportedLocks_c0_0;
  gsi::Callback cb_unlock_2725_0;
  gsi::Callback cb_childEvent_1701_0;
  gsi::Callback cb_customEvent_1217_0;
  gsi::Callback cb_disconnectNotify_2394_0;
  gsi::Callback cb_timerEvent_1730_0;
};

QCameraLocksControl_Adaptor::~QCameraLocksControl_Adaptor() { }

//  Constructor QCameraLocksControl::QCameraLocksControl() (adaptor class)

static void _init_ctor_QCameraLocksControl_Adaptor_0 (qt_gsi::GenericStaticMethod *decl)
{
  decl->set_return_new<QCameraLocksControl_Adaptor> ();
}

static void _call_ctor_QCameraLocksControl_Adaptor_0 (const qt_gsi::GenericStaticMethod * /*decl*/, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QCameraLocksControl_Adaptor *> (new QCameraLocksControl_Adaptor ());
}


// void QCameraLocksControl::childEvent(QChildEvent *)

static void _init_cbs_childEvent_1701_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QChildEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_childEvent_1701_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QChildEvent *arg1 = args.read<QChildEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraLocksControl_Adaptor *)cls)->cbs_childEvent_1701_0 (arg1);
}

static void _set_callback_cbs_childEvent_1701_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraLocksControl_Adaptor *)cls)->cb_childEvent_1701_0 = cb;
}


// void QCameraLocksControl::customEvent(QEvent *)

static void _init_cbs_customEvent_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_customEvent_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraLocksControl_Adaptor *)cls)->cbs_customEvent_1217_0 (arg1);
}

static void _set_callback_cbs_customEvent_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraLocksControl_Adaptor *)cls)->cb_customEvent_1217_0 = cb;
}


// void QCameraLocksControl::disconnectNotify(const QMetaMethod &signal)

static void _init_cbs_disconnectNotify_2394_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_disconnectNotify_2394_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = args.read<const QMetaMethod & > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraLocksControl_Adaptor *)cls)->cbs_disconnectNotify_2394_0 (arg1);
}

static void _set_callback_cbs_disconnectNotify_2394_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraLocksControl_Adaptor *)cls)->cb_disconnectNotify_2394_0 = cb;
}


// bool QCameraLocksControl::event(QEvent *)

static void _init_cbs_event_1217_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QEvent * > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_cbs_event_1217_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QEvent *arg1 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QCameraLocksControl_Adaptor *)cls)->cbs_event_1217_0 (arg1));
}

static void _set_callback_cbs_event_1217_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraLocksControl_Adaptor *)cls)->cb_event_1217_0 = cb;
}


// bool QCameraLocksControl::eventFilter(QObject *, QEvent *)

static void _init_cbs_eventFilter_2411_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QObject * > (argspec_0);
  static gsi::ArgSpecBase argspec_1 ("arg2");
  decl->add_arg<QEvent * > (argspec_1);
  decl->set_return<bool > ();
}

static void _call_cbs_eventFilter_2411_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QObject *arg1 = args.read<QObject * > (heap);
  QEvent *arg2 = args.read<QEvent * > (heap);
  ret.write<bool > ((bool)((QCameraLocksControl_Adaptor *)cls)->cbs_eventFilter_2411_0 (arg1, arg2));
}

static void _set_callback_cbs_eventFilter_2411_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraLocksControl_Adaptor *)cls)->cb_eventFilter_2411_0 = cb;
}


// exposed bool QCameraLocksControl::isSignalConnected(const QMetaMethod &signal)

static void _init_fp_isSignalConnected_c2394 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const QMetaMethod & > (argspec_0);
  decl->set_return<bool > ();
}

static void _call_fp_isSignalConnected_c2394 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const QMetaMethod &arg1 = gsi::arg_reader<const QMetaMethod & >() (args, heap);
  ret.write<bool > ((bool)((QCameraLocksControl_Adaptor *)cls)->fp_QCameraLocksControl_isSignalConnected_c2394 (arg1));
}


// QCamera::LockStatus QCameraLocksControl::lockStatus(QCamera::LockType lock)

static void _init_cbs_lockStatus_c2029_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("lock");
  decl->add_arg<const qt_gsi::Converter<QCamera::LockType>::target_type & > (argspec_0);
  decl->set_return<qt_gsi::Converter<QCamera::LockStatus>::target_type > ();
}

static void _call_cbs_lockStatus_c2029_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const qt_gsi::Converter<QCamera::LockType>::target_type & arg1 = args.read<const qt_gsi::Converter<QCamera::LockType>::target_type & > (heap);
  ret.write<qt_gsi::Converter<QCamera::LockStatus>::target_type > ((qt_gsi::Converter<QCamera::LockStatus>::target_type)((QCameraLocksControl_Adaptor *)cls)->cbs_lockStatus_c2029_0 (arg1));
}

static void _set_callback_cbs_lockStatus_c2029_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraLocksControl_Adaptor *)cls)->cb_lockStatus_c2029_0 = cb;
}


// exposed int QCameraLocksControl::receivers(const char *signal)

static void _init_fp_receivers_c1731 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("signal");
  decl->add_arg<const char * > (argspec_0);
  decl->set_return<int > ();
}

static void _call_fp_receivers_c1731 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  const char *arg1 = gsi::arg_reader<const char * >() (args, heap);
  ret.write<int > ((int)((QCameraLocksControl_Adaptor *)cls)->fp_QCameraLocksControl_receivers_c1731 (arg1));
}


// void QCameraLocksControl::searchAndLock(QFlags<QCamera::LockType> locks)

static void _init_cbs_searchAndLock_2725_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("locks");
  decl->add_arg<QFlags<QCamera::LockType> > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_searchAndLock_2725_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QCamera::LockType> arg1 = args.read<QFlags<QCamera::LockType> > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraLocksControl_Adaptor *)cls)->cbs_searchAndLock_2725_0 (arg1);
}

static void _set_callback_cbs_searchAndLock_2725_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraLocksControl_Adaptor *)cls)->cb_searchAndLock_2725_0 = cb;
}


// exposed QObject *QCameraLocksControl::sender()

static void _init_fp_sender_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QObject * > ();
}

static void _call_fp_sender_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QObject * > ((QObject *)((QCameraLocksControl_Adaptor *)cls)->fp_QCameraLocksControl_sender_c0 ());
}


// exposed int QCameraLocksControl::senderSignalIndex()

static void _init_fp_senderSignalIndex_c0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<int > ();
}

static void _call_fp_senderSignalIndex_c0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<int > ((int)((QCameraLocksControl_Adaptor *)cls)->fp_QCameraLocksControl_senderSignalIndex_c0 ());
}


// QFlags<QCamera::LockType> QCameraLocksControl::supportedLocks()

static void _init_cbs_supportedLocks_c0_0 (qt_gsi::GenericMethod *decl)
{
  decl->set_return<QFlags<QCamera::LockType> > ();
}

static void _call_cbs_supportedLocks_c0_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  ret.write<QFlags<QCamera::LockType> > ((QFlags<QCamera::LockType>)((QCameraLocksControl_Adaptor *)cls)->cbs_supportedLocks_c0_0 ());
}

static void _set_callback_cbs_supportedLocks_c0_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraLocksControl_Adaptor *)cls)->cb_supportedLocks_c0_0 = cb;
}


// void QCameraLocksControl::timerEvent(QTimerEvent *)

static void _init_cbs_timerEvent_1730_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("arg1");
  decl->add_arg<QTimerEvent * > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_timerEvent_1730_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QTimerEvent *arg1 = args.read<QTimerEvent * > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraLocksControl_Adaptor *)cls)->cbs_timerEvent_1730_0 (arg1);
}

static void _set_callback_cbs_timerEvent_1730_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraLocksControl_Adaptor *)cls)->cb_timerEvent_1730_0 = cb;
}


// void QCameraLocksControl::unlock(QFlags<QCamera::LockType> locks)

static void _init_cbs_unlock_2725_0 (qt_gsi::GenericMethod *decl)
{
  static gsi::ArgSpecBase argspec_0 ("locks");
  decl->add_arg<QFlags<QCamera::LockType> > (argspec_0);
  decl->set_return<void > ();
}

static void _call_cbs_unlock_2725_0 (const qt_gsi::GenericMethod * /*decl*/, void *cls, gsi::SerialArgs &args, gsi::SerialArgs &ret) 
{
  __SUPPRESS_UNUSED_WARNING(args);
  tl::Heap heap;
  QFlags<QCamera::LockType> arg1 = args.read<QFlags<QCamera::LockType> > (heap);
  __SUPPRESS_UNUSED_WARNING(ret);
  ((QCameraLocksControl_Adaptor *)cls)->cbs_unlock_2725_0 (arg1);
}

static void _set_callback_cbs_unlock_2725_0 (void *cls, const gsi::Callback &cb)
{
  ((QCameraLocksControl_Adaptor *)cls)->cb_unlock_2725_0 = cb;
}


namespace gsi
{

gsi::Class<QCameraLocksControl> &qtdecl_QCameraLocksControl ();

static gsi::Methods methods_QCameraLocksControl_Adaptor () {
  gsi::Methods methods;
  methods += new qt_gsi::GenericStaticMethod ("new", "@brief Constructor QCameraLocksControl::QCameraLocksControl()\nThis method creates an object of class QCameraLocksControl.", &_init_ctor_QCameraLocksControl_Adaptor_0, &_call_ctor_QCameraLocksControl_Adaptor_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@brief Virtual method void QCameraLocksControl::childEvent(QChildEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*childEvent", "@hide", false, &_init_cbs_childEvent_1701_0, &_call_cbs_childEvent_1701_0, &_set_callback_cbs_childEvent_1701_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@brief Virtual method void QCameraLocksControl::customEvent(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*customEvent", "@hide", false, &_init_cbs_customEvent_1217_0, &_call_cbs_customEvent_1217_0, &_set_callback_cbs_customEvent_1217_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@brief Virtual method void QCameraLocksControl::disconnectNotify(const QMetaMethod &signal)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("*disconnectNotify", "@hide", false, &_init_cbs_disconnectNotify_2394_0, &_call_cbs_disconnectNotify_2394_0, &_set_callback_cbs_disconnectNotify_2394_0);
  methods += new qt_gsi::GenericMethod ("event", "@brief Virtual method bool QCameraLocksControl::event(QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("event", "@hide", false, &_init_cbs_event_1217_0, &_call_cbs_event_1217_0, &_set_callback_cbs_event_1217_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@brief Virtual method bool QCameraLocksControl::eventFilter(QObject *, QEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("eventFilter", "@hide", false, &_init_cbs_eventFilter_2411_0, &_call_cbs_eventFilter_2411_0, &_set_callback_cbs_eventFilter_2411_0);
  methods += new qt_gsi::GenericMethod ("*isSignalConnected", "@brief Method bool QCameraLocksControl::isSignalConnected(const QMetaMethod &signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_isSignalConnected_c2394, &_call_fp_isSignalConnected_c2394);
  methods += new qt_gsi::GenericMethod ("lockStatus", "@brief Virtual method QCamera::LockStatus QCameraLocksControl::lockStatus(QCamera::LockType lock)\nThis method can be reimplemented in a derived class.", true, &_init_cbs_lockStatus_c2029_0, &_call_cbs_lockStatus_c2029_0);
  methods += new qt_gsi::GenericMethod ("lockStatus", "@hide", true, &_init_cbs_lockStatus_c2029_0, &_call_cbs_lockStatus_c2029_0, &_set_callback_cbs_lockStatus_c2029_0);
  methods += new qt_gsi::GenericMethod ("*receivers", "@brief Method int QCameraLocksControl::receivers(const char *signal)\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_receivers_c1731, &_call_fp_receivers_c1731);
  methods += new qt_gsi::GenericMethod ("searchAndLock", "@brief Virtual method void QCameraLocksControl::searchAndLock(QFlags<QCamera::LockType> locks)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_searchAndLock_2725_0, &_call_cbs_searchAndLock_2725_0);
  methods += new qt_gsi::GenericMethod ("searchAndLock", "@hide", false, &_init_cbs_searchAndLock_2725_0, &_call_cbs_searchAndLock_2725_0, &_set_callback_cbs_searchAndLock_2725_0);
  methods += new qt_gsi::GenericMethod ("*sender", "@brief Method QObject *QCameraLocksControl::sender()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_sender_c0, &_call_fp_sender_c0);
  methods += new qt_gsi::GenericMethod ("*senderSignalIndex", "@brief Method int QCameraLocksControl::senderSignalIndex()\nThis method is protected and can only be called from inside a derived class.", true, &_init_fp_senderSignalIndex_c0, &_call_fp_senderSignalIndex_c0);
  methods += new qt_gsi::GenericMethod ("supportedLocks", "@brief Virtual method QFlags<QCamera::LockType> QCameraLocksControl::supportedLocks()\nThis method can be reimplemented in a derived class.", true, &_init_cbs_supportedLocks_c0_0, &_call_cbs_supportedLocks_c0_0);
  methods += new qt_gsi::GenericMethod ("supportedLocks", "@hide", true, &_init_cbs_supportedLocks_c0_0, &_call_cbs_supportedLocks_c0_0, &_set_callback_cbs_supportedLocks_c0_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@brief Virtual method void QCameraLocksControl::timerEvent(QTimerEvent *)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("*timerEvent", "@hide", false, &_init_cbs_timerEvent_1730_0, &_call_cbs_timerEvent_1730_0, &_set_callback_cbs_timerEvent_1730_0);
  methods += new qt_gsi::GenericMethod ("unlock", "@brief Virtual method void QCameraLocksControl::unlock(QFlags<QCamera::LockType> locks)\nThis method can be reimplemented in a derived class.", false, &_init_cbs_unlock_2725_0, &_call_cbs_unlock_2725_0);
  methods += new qt_gsi::GenericMethod ("unlock", "@hide", false, &_init_cbs_unlock_2725_0, &_call_cbs_unlock_2725_0, &_set_callback_cbs_unlock_2725_0);
  return methods;
}

gsi::Class<QCameraLocksControl_Adaptor> decl_QCameraLocksControl_Adaptor (qtdecl_QCameraLocksControl (), "QtMultimedia", "QCameraLocksControl",
  methods_QCameraLocksControl_Adaptor (),
  "@qt\n@brief Binding of QCameraLocksControl");

}

