/****************************************************************************
** Meta object code from reading C++ file 'webview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "webview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'webview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WebView_t {
    QByteArrayData data[11];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WebView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WebView_t qt_meta_stringdata_WebView = {
    {
QT_MOC_LITERAL(0, 0, 7), // "WebView"
QT_MOC_LITERAL(1, 8, 11), // "iconChanged"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 4), // "icon"
QT_MOC_LITERAL(4, 26, 23), // "webActionEnabledChanged"
QT_MOC_LITERAL(5, 50, 25), // "QWebEnginePage::WebAction"
QT_MOC_LITERAL(6, 76, 9), // "webAction"
QT_MOC_LITERAL(7, 86, 7), // "enabled"
QT_MOC_LITERAL(8, 94, 20), // "handleIconUrlChanged"
QT_MOC_LITERAL(9, 115, 3), // "url"
QT_MOC_LITERAL(10, 119, 16) // "handleIconLoaded"

    },
    "WebView\0iconChanged\0\0icon\0"
    "webActionEnabledChanged\0"
    "QWebEnginePage::WebAction\0webAction\0"
    "enabled\0handleIconUrlChanged\0url\0"
    "handleIconLoaded"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WebView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    2,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   42,    2, 0x08 /* Private */,
      10,    0,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QIcon,    3,
    QMetaType::Void, 0x80000000 | 5, QMetaType::Bool,    6,    7,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,    9,
    QMetaType::Void,

       0        // eod
};

void WebView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WebView *_t = static_cast<WebView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->iconChanged((*reinterpret_cast< const QIcon(*)>(_a[1]))); break;
        case 1: _t->webActionEnabledChanged((*reinterpret_cast< QWebEnginePage::WebAction(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->handleIconUrlChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 3: _t->handleIconLoaded(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WebView::*_t)(const QIcon & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WebView::iconChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WebView::*_t)(QWebEnginePage::WebAction , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WebView::webActionEnabledChanged)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject WebView::staticMetaObject = {
    { &QWebEngineView::staticMetaObject, qt_meta_stringdata_WebView.data,
      qt_meta_data_WebView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WebView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WebView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WebView.stringdata0))
        return static_cast<void*>(const_cast< WebView*>(this));
    return QWebEngineView::qt_metacast(_clname);
}

int WebView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWebEngineView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void WebView::iconChanged(const QIcon & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WebView::webActionEnabledChanged(QWebEnginePage::WebAction _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
