/****************************************************************************
** Meta object code from reading C++ file 'progressWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/progressWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'progressWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ProgressWindow_t {
    QByteArrayData data[11];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ProgressWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ProgressWindow_t qt_meta_stringdata_ProgressWindow = {
    {
QT_MOC_LITERAL(0, 0, 14), // "ProgressWindow"
QT_MOC_LITERAL(1, 15, 7), // "addText"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 4), // "text"
QT_MOC_LITERAL(4, 29, 19), // "setValueProgressBar"
QT_MOC_LITERAL(5, 49, 5), // "value"
QT_MOC_LITERAL(6, 55, 9), // "clearText"
QT_MOC_LITERAL(7, 65, 10), // "clearImage"
QT_MOC_LITERAL(8, 76, 5), // "clear"
QT_MOC_LITERAL(9, 82, 11), // "updateImage"
QT_MOC_LITERAL(10, 94, 5) // "image"

    },
    "ProgressWindow\0addText\0\0text\0"
    "setValueProgressBar\0value\0clearText\0"
    "clearImage\0clear\0updateImage\0image"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ProgressWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x0a /* Public */,
       4,    1,   47,    2, 0x0a /* Public */,
       6,    0,   50,    2, 0x0a /* Public */,
       7,    0,   51,    2, 0x0a /* Public */,
       8,    0,   52,    2, 0x0a /* Public */,
       9,    1,   53,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,

       0        // eod
};

void ProgressWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProgressWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->addText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->setValueProgressBar((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->clearText(); break;
        case 3: _t->clearImage(); break;
        case 4: _t->clear(); break;
        case 5: _t->updateImage((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ProgressWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ProgressWindow.data,
    qt_meta_data_ProgressWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ProgressWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProgressWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ProgressWindow.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ProgressWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
