QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addcarwindow.cpp \
    adminauthorizationwindow.cpp \
    adminmainwindow.cpp \
    adminreportswindow.cpp \
    authorizationwindow.cpp \
    car.cpp \
    carinfoform.cpp \
    carshowwindow.cpp \
    contactswindow.cpp \
    detailsteslaywindow.cpp \
    dialogtest.cpp \
    main.cpp \
    mainwindow.cpp \
    searchwindow.cpp \
    sqlitedbmanager.cpp \
    usermenuwindow.cpp

HEADERS += \
    addcarwindow.h \
    adminauthorizationwindow.h \
    adminmainwindow.h \
    adminreportswindow.h \
    authorizationwindow.h \
    car.h \
    carinfoform.h \
    carshowwindow.h \
    contactswindow.h \
    dbmanager.h \
    detailsteslaywindow.h \
    dialogtest.h \
    mainwindow.h \
    searchwindow.h \
    sqlitedbmanager.h \
    usermenuwindow.h

FORMS += \
    addcarwindow.ui \
    adminauthorizationwindow.ui \
    adminmainwindow.ui \
    adminreportswindow.ui \
    authorizationwindow.ui \
    carinfoform.ui \
    carshowwindow.ui \
    contactswindow.ui \
    detailsteslaywindow.ui \
    dialogtest.ui \
    mainwindow.ui \
    searchwindow.ui \
    usermenuwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
