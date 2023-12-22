QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Car.cpp \
    Customer.cpp \
    MySqlDBManager.cpp \
    Report.cpp \
    addcarwindow.cpp \
    adminauthorizationwindow.cpp \
    adminmainwindow.cpp \
    adminreportswindow.cpp \
    allcarwindow.cpp \
    authorizationwindow.cpp \
    carinfoform.cpp \
    carshowwindow.cpp \
    contactswindow.cpp \
    deletecarwindow.cpp \
    detailsteslaywindow.cpp \
    dialogtest.cpp \
    findcarwindow.cpp \
    main.cpp \
    mainwindow.cpp \
    searchwindow.cpp \
    usermenuwindow.cpp

HEADERS += \
    Car.h \
    Customer.h \
    MySqlDBManager.h \
    Report.h \
    addcarwindow.h \
    adminauthorizationwindow.h \
    adminmainwindow.h \
    adminreportswindow.h \
    allcarwindow.h \
    authorizationwindow.h \
    carinfoform.h \
    carshowwindow.h \
    contactswindow.h \
    deletecarwindow.h \
    detailsteslaywindow.h \
    dialogtest.h \
    findcarwindow.h \
    mainwindow.h \
    searchwindow.h \
    usermenuwindow.h

FORMS += \
    addcarwindow.ui \
    adminauthorizationwindow.ui \
    adminmainwindow.ui \
    adminreportswindow.ui \
    allcarwindow.ui \
    authorizationwindow.ui \
    carinfoform.ui \
    carshowwindow.ui \
    contactswindow.ui \
    deletecarwindow.ui \
    detailsteslaywindow.ui \
    dialogtest.ui \
    findcarwindow.ui \
    mainwindow.ui \
    searchwindow.ui \
    usermenuwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
