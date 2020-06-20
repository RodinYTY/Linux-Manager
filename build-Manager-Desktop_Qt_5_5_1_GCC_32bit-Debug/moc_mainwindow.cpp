/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Manager/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[17];
    char stringdata0[340];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 14), // "update_per_sec"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 15), // "update_per_5sec"
QT_MOC_LITERAL(4, 43, 30), // "on_pushButton_shutdown_clicked"
QT_MOC_LITERAL(5, 74, 28), // "on_pushButton_reboot_clicked"
QT_MOC_LITERAL(6, 103, 30), // "on_pushButton_homepage_clicked"
QT_MOC_LITERAL(7, 134, 29), // "on_pushButton_refresh_clicked"
QT_MOC_LITERAL(8, 164, 11), // "fill_le_pid"
QT_MOC_LITERAL(9, 176, 28), // "on_pushButton_endPro_clicked"
QT_MOC_LITERAL(10, 205, 21), // "on_le_pid_textChanged"
QT_MOC_LITERAL(11, 227, 4), // "arg1"
QT_MOC_LITERAL(12, 232, 31), // "on_pushButton_createPro_clicked"
QT_MOC_LITERAL(13, 264, 31), // "on_comboBox_currentIndexChanged"
QT_MOC_LITERAL(14, 296, 5), // "index"
QT_MOC_LITERAL(15, 302, 24), // "on_le_search_textChanged"
QT_MOC_LITERAL(16, 327, 12) // "update_graph"

    },
    "MainWindow\0update_per_sec\0\0update_per_5sec\0"
    "on_pushButton_shutdown_clicked\0"
    "on_pushButton_reboot_clicked\0"
    "on_pushButton_homepage_clicked\0"
    "on_pushButton_refresh_clicked\0fill_le_pid\0"
    "on_pushButton_endPro_clicked\0"
    "on_le_pid_textChanged\0arg1\0"
    "on_pushButton_createPro_clicked\0"
    "on_comboBox_currentIndexChanged\0index\0"
    "on_le_search_textChanged\0update_graph"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    1,   90,    2, 0x08 /* Private */,
       9,    0,   93,    2, 0x08 /* Private */,
      10,    1,   94,    2, 0x08 /* Private */,
      12,    0,   97,    2, 0x08 /* Private */,
      13,    1,   98,    2, 0x08 /* Private */,
      13,    1,  101,    2, 0x08 /* Private */,
      15,    1,  104,    2, 0x08 /* Private */,
      16,    0,  107,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update_per_sec(); break;
        case 1: _t->update_per_5sec(); break;
        case 2: _t->on_pushButton_shutdown_clicked(); break;
        case 3: _t->on_pushButton_reboot_clicked(); break;
        case 4: _t->on_pushButton_homepage_clicked(); break;
        case 5: _t->on_pushButton_refresh_clicked(); break;
        case 6: _t->fill_le_pid((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 7: _t->on_pushButton_endPro_clicked(); break;
        case 8: _t->on_le_pid_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: _t->on_pushButton_createPro_clicked(); break;
        case 10: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->on_le_search_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->update_graph(); break;
        default: ;
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
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
