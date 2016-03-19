/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../code/gcs/src/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[25];
    char stringdata[263];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 14), // "update_vehicle"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 7), // "vehicle"
QT_MOC_LITERAL(4, 35, 15), // "updateIDGraphic"
QT_MOC_LITERAL(5, 51, 3), // "gID"
QT_MOC_LITERAL(6, 55, 23), // "EsriRuntimeQt::Graphic*"
QT_MOC_LITERAL(7, 79, 7), // "graphic"
QT_MOC_LITERAL(8, 87, 18), // "removeLayerGraphic"
QT_MOC_LITERAL(9, 106, 4), // "drop"
QT_MOC_LITERAL(10, 111, 20), // "update_vehicle_queue"
QT_MOC_LITERAL(11, 132, 14), // "update_targets"
QT_MOC_LITERAL(12, 147, 7), // "Target*"
QT_MOC_LITERAL(13, 155, 8), // "mapReady"
QT_MOC_LITERAL(14, 164, 7), // "vStatus"
QT_MOC_LITERAL(15, 172, 5), // "UDrop"
QT_MOC_LITERAL(16, 178, 7), // "UGVDrop"
QT_MOC_LITERAL(17, 186, 11), // "showCommand"
QT_MOC_LITERAL(18, 198, 11), // "showControl"
QT_MOC_LITERAL(19, 210, 10), // "updateVech"
QT_MOC_LITERAL(20, 221, 9), // "addTarget"
QT_MOC_LITERAL(21, 231, 3), // "lat"
QT_MOC_LITERAL(22, 235, 3), // "lon"
QT_MOC_LITERAL(23, 239, 13), // "elementSelect"
QT_MOC_LITERAL(24, 253, 9) // "updateADI"

    },
    "MainWindow\0update_vehicle\0\0vehicle\0"
    "updateIDGraphic\0gID\0EsriRuntimeQt::Graphic*\0"
    "graphic\0removeLayerGraphic\0drop\0"
    "update_vehicle_queue\0update_targets\0"
    "Target*\0mapReady\0vStatus\0UDrop\0UGVDrop\0"
    "showCommand\0showControl\0updateVech\0"
    "addTarget\0lat\0lon\0elementSelect\0"
    "updateADI"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       4,    2,   97,    2, 0x06 /* Public */,
       8,    1,  102,    2, 0x06 /* Public */,
       9,    1,  105,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,  108,    2, 0x08 /* Private */,
      11,    1,  109,    2, 0x08 /* Private */,
      13,    0,  112,    2, 0x08 /* Private */,
      14,    2,  113,    2, 0x08 /* Private */,
      15,    0,  118,    2, 0x08 /* Private */,
      16,    0,  119,    2, 0x08 /* Private */,
      17,    0,  120,    2, 0x08 /* Private */,
      18,    0,  121,    2, 0x08 /* Private */,
      19,    1,  122,    2, 0x08 /* Private */,
      20,    2,  125,    2, 0x08 /* Private */,
      23,    1,  130,    2, 0x08 /* Private */,
      24,    1,  133,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 6,    5,    7,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,   21,   22,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->update_vehicle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->updateIDGraphic((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< EsriRuntimeQt::Graphic*(*)>(_a[2]))); break;
        case 2: _t->removeLayerGraphic((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->drop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->update_vehicle_queue(); break;
        case 5: _t->update_targets((*reinterpret_cast< Target*(*)>(_a[1]))); break;
        case 6: _t->mapReady(); break;
        case 7: _t->vStatus((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->UDrop(); break;
        case 9: _t->UGVDrop(); break;
        case 10: _t->showCommand(); break;
        case 11: _t->showControl(); break;
        case 12: _t->updateVech((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->addTarget((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 14: _t->elementSelect((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->updateADI((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EsriRuntimeQt::Graphic* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (MainWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::update_vehicle)) {
                *result = 0;
            }
        }
        {
            typedef void (MainWindow::*_t)(int , EsriRuntimeQt::Graphic * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::updateIDGraphic)) {
                *result = 1;
            }
        }
        {
            typedef void (MainWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::removeLayerGraphic)) {
                *result = 2;
            }
        }
        {
            typedef void (MainWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&MainWindow::drop)) {
                *result = 3;
            }
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::update_vehicle(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::updateIDGraphic(int _t1, EsriRuntimeQt::Graphic * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::removeLayerGraphic(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::drop(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
