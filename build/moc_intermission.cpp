/****************************************************************************
** Meta object code from reading C++ file 'intermission.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/intermission.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'intermission.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Intermission_t {
    QByteArrayData data[9];
    char stringdata0[89];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Intermission_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Intermission_t qt_meta_stringdata_Intermission = {
    {
QT_MOC_LITERAL(0, 0, 12), // "Intermission"
QT_MOC_LITERAL(1, 13, 9), // "Home_Name"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 9), // "Away_Name"
QT_MOC_LITERAL(4, 34, 10), // "Home_Score"
QT_MOC_LITERAL(5, 45, 10), // "Away_Score"
QT_MOC_LITERAL(6, 56, 6), // "period"
QT_MOC_LITERAL(7, 63, 12), // "Home_Graphic"
QT_MOC_LITERAL(8, 76, 12) // "Away_Graphic"

    },
    "Intermission\0Home_Name\0\0Away_Name\0"
    "Home_Score\0Away_Score\0period\0Home_Graphic\0"
    "Away_Graphic"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Intermission[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a /* Public */,
       3,    1,   52,    2, 0x0a /* Public */,
       4,    1,   55,    2, 0x0a /* Public */,
       5,    1,   58,    2, 0x0a /* Public */,
       6,    1,   61,    2, 0x0a /* Public */,
       7,    1,   64,    2, 0x0a /* Public */,
       8,    1,   67,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void Intermission::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Intermission *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Home_Name((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->Away_Name((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->Home_Score((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->Away_Score((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->period((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->Home_Graphic((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->Away_Graphic((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Intermission::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_Intermission.data,
    qt_meta_data_Intermission,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Intermission::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Intermission::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Intermission.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Intermission::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
