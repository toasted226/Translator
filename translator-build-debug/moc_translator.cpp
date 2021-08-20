/****************************************************************************
** Meta object code from reading C++ file 'translator.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Translator/translator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'translator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Translator_t {
    const uint offsetsAndSize[16];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Translator_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Translator_t qt_meta_stringdata_Translator = {
    {
QT_MOC_LITERAL(0, 10), // "Translator"
QT_MOC_LITERAL(11, 9), // "Translate"
QT_MOC_LITERAL(21, 0), // ""
QT_MOC_LITERAL(22, 26), // "on_translatebutton_clicked"
QT_MOC_LITERAL(49, 31), // "on_inputlang_currentTextChanged"
QT_MOC_LITERAL(81, 4), // "arg1"
QT_MOC_LITERAL(86, 32), // "on_outputlang_currentTextChanged"
QT_MOC_LITERAL(119, 22) // "on_swap_button_clicked"

    },
    "Translator\0Translate\0\0on_translatebutton_clicked\0"
    "on_inputlang_currentTextChanged\0arg1\0"
    "on_outputlang_currentTextChanged\0"
    "on_swap_button_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Translator[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    0 /* Private */,
       3,    0,   45,    2, 0x08,    1 /* Private */,
       4,    1,   46,    2, 0x08,    2 /* Private */,
       6,    1,   49,    2, 0x08,    4 /* Private */,
       7,    0,   52,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,

       0        // eod
};

void Translator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Translator *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->Translate(); break;
        case 1: _t->on_translatebutton_clicked(); break;
        case 2: _t->on_inputlang_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_outputlang_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->on_swap_button_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject Translator::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Translator.offsetsAndSize,
    qt_meta_data_Translator,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Translator_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *Translator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Translator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Translator.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Translator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
