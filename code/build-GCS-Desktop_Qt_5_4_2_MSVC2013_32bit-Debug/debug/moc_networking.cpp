/****************************************************************************
** Meta object code from reading C++ file 'networking.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../code/gcs/src/protonet/networking.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'networking.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_networking_t {
    QByteArrayData data[55];
    char stringdata[661];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_networking_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_networking_t qt_meta_stringdata_networking = {
    {
QT_MOC_LITERAL(0, 0, 10), // "networking"
QT_MOC_LITERAL(1, 11, 4), // "ping"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 12), // "update_queue"
QT_MOC_LITERAL(4, 30, 18), // "network_set_serial"
QT_MOC_LITERAL(5, 49, 9), // "newTarget"
QT_MOC_LITERAL(6, 59, 7), // "Target*"
QT_MOC_LITERAL(7, 67, 14), // "updateVechicle"
QT_MOC_LITERAL(8, 82, 8), // "waypoint"
QT_MOC_LITERAL(9, 91, 11), // "Waypoint22*"
QT_MOC_LITERAL(10, 103, 20), // "vehicle_auth_request"
QT_MOC_LITERAL(11, 124, 17), // "telemetry_command"
QT_MOC_LITERAL(12, 142, 9), // "targeting"
QT_MOC_LITERAL(13, 152, 12), // "manTargeting"
QT_MOC_LITERAL(14, 165, 7), // "vTarget"
QT_MOC_LITERAL(15, 173, 4), // "drop"
QT_MOC_LITERAL(16, 178, 6), // "armUAV"
QT_MOC_LITERAL(17, 185, 9), // "disarmUAV"
QT_MOC_LITERAL(18, 195, 13), // "vehicleStatus"
QT_MOC_LITERAL(19, 209, 17), // "UGV_joystick_stop"
QT_MOC_LITERAL(20, 227, 18), // "UGV_joystick_start"
QT_MOC_LITERAL(21, 246, 3), // "ATM"
QT_MOC_LITERAL(22, 250, 3), // "MTA"
QT_MOC_LITERAL(23, 254, 1), // "R"
QT_MOC_LITERAL(24, 256, 8), // "DisableM"
QT_MOC_LITERAL(25, 265, 7), // "ToggleM"
QT_MOC_LITERAL(26, 273, 7), // "EnableM"
QT_MOC_LITERAL(27, 281, 7), // "message"
QT_MOC_LITERAL(28, 289, 12), // "messageAlert"
QT_MOC_LITERAL(29, 302, 14), // "messageConfirm"
QT_MOC_LITERAL(30, 317, 20), // "update_vehicle_queue"
QT_MOC_LITERAL(31, 338, 18), // "update_target_disp"
QT_MOC_LITERAL(32, 357, 10), // "updateVech"
QT_MOC_LITERAL(33, 368, 9), // "send_ping"
QT_MOC_LITERAL(34, 378, 18), // "network_serial_set"
QT_MOC_LITERAL(35, 397, 25), // "send_vehicle_auth_request"
QT_MOC_LITERAL(36, 423, 22), // "send_telemetry_command"
QT_MOC_LITERAL(37, 446, 14), // "send_targeting"
QT_MOC_LITERAL(38, 461, 13), // "send_waypoint"
QT_MOC_LITERAL(39, 475, 6), // "target"
QT_MOC_LITERAL(40, 482, 5), // "UDrop"
QT_MOC_LITERAL(41, 488, 3), // "arm"
QT_MOC_LITERAL(42, 492, 6), // "disarm"
QT_MOC_LITERAL(43, 499, 7), // "vStatus"
QT_MOC_LITERAL(44, 507, 18), // "start_UGV_Joystick"
QT_MOC_LITERAL(45, 526, 17), // "stop_UGV_Joystick"
QT_MOC_LITERAL(46, 544, 12), // "ManualToAuto"
QT_MOC_LITERAL(47, 557, 12), // "AutoToManual"
QT_MOC_LITERAL(48, 570, 5), // "Reset"
QT_MOC_LITERAL(49, 576, 12), // "DisableMotor"
QT_MOC_LITERAL(50, 589, 11), // "EnableMotor"
QT_MOC_LITERAL(51, 601, 11), // "ToggleMotor"
QT_MOC_LITERAL(52, 613, 11), // "messageSlot"
QT_MOC_LITERAL(53, 625, 16), // "messageAlertSlot"
QT_MOC_LITERAL(54, 642, 18) // "messageConfirmSlot"

    },
    "networking\0ping\0\0update_queue\0"
    "network_set_serial\0newTarget\0Target*\0"
    "updateVechicle\0waypoint\0Waypoint22*\0"
    "vehicle_auth_request\0telemetry_command\0"
    "targeting\0manTargeting\0vTarget\0drop\0"
    "armUAV\0disarmUAV\0vehicleStatus\0"
    "UGV_joystick_stop\0UGV_joystick_start\0"
    "ATM\0MTA\0R\0DisableM\0ToggleM\0EnableM\0"
    "message\0messageAlert\0messageConfirm\0"
    "update_vehicle_queue\0update_target_disp\0"
    "updateVech\0send_ping\0network_serial_set\0"
    "send_vehicle_auth_request\0"
    "send_telemetry_command\0send_targeting\0"
    "send_waypoint\0target\0UDrop\0arm\0disarm\0"
    "vStatus\0start_UGV_Joystick\0stop_UGV_Joystick\0"
    "ManualToAuto\0AutoToManual\0Reset\0"
    "DisableMotor\0EnableMotor\0ToggleMotor\0"
    "messageSlot\0messageAlertSlot\0"
    "messageConfirmSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_networking[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      52,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      26,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  274,    2, 0x06 /* Public */,
       3,    0,  277,    2, 0x06 /* Public */,
       4,    1,  278,    2, 0x06 /* Public */,
       5,    1,  281,    2, 0x06 /* Public */,
       7,    1,  284,    2, 0x06 /* Public */,
       8,    2,  287,    2, 0x06 /* Public */,
      10,    1,  292,    2, 0x06 /* Public */,
      11,    1,  295,    2, 0x06 /* Public */,
      12,    3,  298,    2, 0x06 /* Public */,
      13,    3,  305,    2, 0x06 /* Public */,
      14,    2,  312,    2, 0x06 /* Public */,
      15,    1,  317,    2, 0x06 /* Public */,
      16,    1,  320,    2, 0x06 /* Public */,
      17,    1,  323,    2, 0x06 /* Public */,
      18,    2,  326,    2, 0x06 /* Public */,
      19,    0,  331,    2, 0x06 /* Public */,
      20,    0,  332,    2, 0x06 /* Public */,
      21,    0,  333,    2, 0x06 /* Public */,
      22,    0,  334,    2, 0x06 /* Public */,
      23,    0,  335,    2, 0x06 /* Public */,
      24,    0,  336,    2, 0x06 /* Public */,
      25,    0,  337,    2, 0x06 /* Public */,
      26,    0,  338,    2, 0x06 /* Public */,
      27,    1,  339,    2, 0x06 /* Public */,
      28,    1,  342,    2, 0x06 /* Public */,
      29,    1,  345,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      30,    0,  348,    2, 0x0a /* Public */,
      31,    1,  349,    2, 0x0a /* Public */,
      32,    1,  352,    2, 0x0a /* Public */,
      33,    1,  355,    2, 0x0a /* Public */,
      34,    1,  358,    2, 0x0a /* Public */,
      35,    1,  361,    2, 0x0a /* Public */,
      36,    1,  364,    2, 0x0a /* Public */,
      37,    3,  367,    2, 0x0a /* Public */,
      38,    2,  374,    2, 0x0a /* Public */,
       5,    2,  379,    2, 0x0a /* Public */,
      39,    3,  384,    2, 0x0a /* Public */,
      40,    1,  391,    2, 0x0a /* Public */,
      41,    1,  394,    2, 0x0a /* Public */,
      42,    1,  397,    2, 0x0a /* Public */,
      43,    2,  400,    2, 0x0a /* Public */,
      44,    0,  405,    2, 0x0a /* Public */,
      45,    0,  406,    2, 0x0a /* Public */,
      46,    0,  407,    2, 0x0a /* Public */,
      47,    0,  408,    2, 0x0a /* Public */,
      48,    0,  409,    2, 0x0a /* Public */,
      49,    0,  410,    2, 0x0a /* Public */,
      50,    0,  411,    2, 0x0a /* Public */,
      51,    0,  412,    2, 0x0a /* Public */,
      52,    1,  413,    2, 0x0a /* Public */,
      53,    1,  416,    2, 0x0a /* Public */,
      54,    1,  419,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,    2,    2,    2,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double,    2,    2,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::Float,    2,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,    2,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void networking::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        networking *_t = static_cast<networking *>(_o);
        switch (_id) {
        case 0: _t->ping((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->update_queue(); break;
        case 2: _t->network_set_serial((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->newTarget((*reinterpret_cast< Target*(*)>(_a[1]))); break;
        case 4: _t->updateVechicle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->waypoint((*reinterpret_cast< Waypoint22*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->vehicle_auth_request((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->telemetry_command((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->targeting((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 9: _t->manTargeting((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3]))); break;
        case 10: _t->vTarget((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 11: _t->drop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->armUAV((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->disarmUAV((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->vehicleStatus((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: _t->UGV_joystick_stop(); break;
        case 16: _t->UGV_joystick_start(); break;
        case 17: _t->ATM(); break;
        case 18: _t->MTA(); break;
        case 19: _t->R(); break;
        case 20: _t->DisableM(); break;
        case 21: _t->ToggleM(); break;
        case 22: _t->EnableM(); break;
        case 23: _t->message((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 24: _t->messageAlert((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 25: _t->messageConfirm((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 26: _t->update_vehicle_queue(); break;
        case 27: _t->update_target_disp((*reinterpret_cast< Target*(*)>(_a[1]))); break;
        case 28: _t->updateVech((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->send_ping((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 30: _t->network_serial_set((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 31: _t->send_vehicle_auth_request((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 32: _t->send_telemetry_command((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: _t->send_targeting((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 34: _t->send_waypoint((*reinterpret_cast< Waypoint22*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 35: _t->newTarget((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2]))); break;
        case 36: _t->target((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 37: _t->UDrop((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 38: _t->arm((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 39: _t->disarm((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: _t->vStatus((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 41: _t->start_UGV_Joystick(); break;
        case 42: _t->stop_UGV_Joystick(); break;
        case 43: _t->ManualToAuto(); break;
        case 44: _t->AutoToManual(); break;
        case 45: _t->Reset(); break;
        case 46: _t->DisableMotor(); break;
        case 47: _t->EnableMotor(); break;
        case 48: _t->ToggleMotor(); break;
        case 49: _t->messageSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 50: _t->messageAlertSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 51: _t->messageConfirmSlot((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Waypoint22* >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Waypoint22* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (networking::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&networking::ping)) {
                *result = 0;
            }
        }
        {
            typedef void (networking::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&networking::update_queue)) {
                *result = 1;
            }
        }
        {
            typedef void (networking::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&networking::network_set_serial)) {
                *result = 2;
            }
        }
        {
            typedef void (networking::*_t)(Target * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&networking::newTarget)) {
                *result = 3;
            }
        }
        {
            typedef void (networking::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&networking::updateVechicle)) {
                *result = 4;
            }
        }
        {
            typedef void (networking::*_t)(Waypoint22 * , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&networking::waypoint)) {
                *result = 5;
            }
        }
        {
            typedef void (networking::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&networking::vehicle_auth_request)) {
                *result = 6;
            }
        }
        {
            typedef void (networking::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&networking::telemetry_command)) {
                *result = 7;
            }
        }
        {
            typedef void (networking::*_t)(float , float , float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&networking::targeting)) {
                *result = 8;
            }
        }
        {
            typedef void (networking::*_t)(double , double , double );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&networking::manTargeting)) {
                *result = 9;
            }
        }
        {
            typedef void (networking::*_t)(float , float );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&networking::vTarget)) {
                *result = 10;
            }
        }
        {
            typedef void (networking::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&networking::drop)) {
                *result = 11;
            }
        }
        {
            typedef void (networking::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&networking::armUAV)) {
                *result = 12;
            }
        }
        {
            typedef void (networking::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&networking::disarmUAV)) {
                *result = 13;
            }
        }
        {
            typedef void (networking::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&networking::vehicleStatus)) {
                *result = 14;
            }
        }
        {
            typedef void (networking::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&networking::UGV_joystick_stop)) {
                *result = 15;
            }
        }
        {
            typedef void (networking::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&networking::UGV_joystick_start)) {
                *result = 16;
            }
        }
        {
            typedef void (networking::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&networking::ATM)) {
                *result = 17;
            }
        }
        {
            typedef void (networking::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&networking::MTA)) {
                *result = 18;
            }
        }
        {
            typedef void (networking::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&networking::R)) {
                *result = 19;
            }
        }
        {
            typedef void (networking::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&networking::DisableM)) {
                *result = 20;
            }
        }
        {
            typedef void (networking::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&networking::ToggleM)) {
                *result = 21;
            }
        }
        {
            typedef void (networking::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&networking::EnableM)) {
                *result = 22;
            }
        }
        {
            typedef void (networking::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&networking::message)) {
                *result = 23;
            }
        }
        {
            typedef void (networking::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&networking::messageAlert)) {
                *result = 24;
            }
        }
        {
            typedef void (networking::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&networking::messageConfirm)) {
                *result = 25;
            }
        }
    }
}

const QMetaObject networking::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_networking.data,
      qt_meta_data_networking,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *networking::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *networking::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_networking.stringdata))
        return static_cast<void*>(const_cast< networking*>(this));
    return QObject::qt_metacast(_clname);
}

int networking::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 52)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 52;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 52)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 52;
    }
    return _id;
}

// SIGNAL 0
void networking::ping(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void networking::update_queue()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void networking::network_set_serial(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void networking::newTarget(Target * _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void networking::updateVechicle(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void networking::waypoint(Waypoint22 * _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void networking::vehicle_auth_request(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void networking::telemetry_command(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void networking::targeting(float _t1, float _t2, float _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void networking::manTargeting(double _t1, double _t2, double _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void networking::vTarget(float _t1, float _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void networking::drop(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void networking::armUAV(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void networking::disarmUAV(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void networking::vehicleStatus(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void networking::UGV_joystick_stop()
{
    QMetaObject::activate(this, &staticMetaObject, 15, Q_NULLPTR);
}

// SIGNAL 16
void networking::UGV_joystick_start()
{
    QMetaObject::activate(this, &staticMetaObject, 16, Q_NULLPTR);
}

// SIGNAL 17
void networking::ATM()
{
    QMetaObject::activate(this, &staticMetaObject, 17, Q_NULLPTR);
}

// SIGNAL 18
void networking::MTA()
{
    QMetaObject::activate(this, &staticMetaObject, 18, Q_NULLPTR);
}

// SIGNAL 19
void networking::R()
{
    QMetaObject::activate(this, &staticMetaObject, 19, Q_NULLPTR);
}

// SIGNAL 20
void networking::DisableM()
{
    QMetaObject::activate(this, &staticMetaObject, 20, Q_NULLPTR);
}

// SIGNAL 21
void networking::ToggleM()
{
    QMetaObject::activate(this, &staticMetaObject, 21, Q_NULLPTR);
}

// SIGNAL 22
void networking::EnableM()
{
    QMetaObject::activate(this, &staticMetaObject, 22, Q_NULLPTR);
}

// SIGNAL 23
void networking::message(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void networking::messageAlert(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}

// SIGNAL 25
void networking::messageConfirm(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 25, _a);
}
QT_END_MOC_NAMESPACE
