QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Customer.cpp \
    Report.cpp \
    addcarwindow.cpp \
    adminauthorizationwindow.cpp \
    adminmainwindow.cpp \
    adminreportswindow.cpp \
    allcarwindow.cpp \
    authorizationwindow.cpp \
    bucket.cpp \
    bucketfirstmenu.cpp \
    car.cpp \
    carinfoform.cpp \
    carshowwindow.cpp \
    contactswindow.cpp \
    deletecarwindow.cpp \
    detailsteslaywindow.cpp \
    dialogtest.cpp \
    findcarwindow.cpp \
    main.cpp \
    mainwindow.cpp \
    news.cpp \
    newsshowwindow.cpp \
    searchwindow.cpp \
    shopwindow.cpp \
    sqlitedbmanager.cpp \
    usermenuwindow.cpp

HEADERS += \
    Customer.h \
    Report.h \
    addcarwindow.h \
    adminauthorizationwindow.h \
    adminmainwindow.h \
    adminreportswindow.h \
    allcarwindow.h \
    authorizationwindow.h \
    bucket.h \
    bucketfirstmenu.h \
    car.h \
    carinfoform.h \
    carshowwindow.h \
    contactswindow.h \
    deletecarwindow.h \
    dbmanager.h \
    detailsteslaywindow.h \
    dialogtest.h \
    findcarwindow.h \
    mainwindow.h \
    news.h \
    newsshowwindow.h \
    searchwindow.h \
    shopwindow.h \
    sqlitedbmanager.h \
    usermenuwindow.h

FORMS += \
    addcarwindow.ui \
    adminauthorizationwindow.ui \
    adminmainwindow.ui \
    adminreportswindow.ui \
    allcarwindow.ui \
    authorizationwindow.ui \
    bucketfirstmenu.ui \
    carinfoform.ui \
    carshowwindow.ui \
    contactswindow.ui \
    deletecarwindow.ui \
    detailsteslaywindow.ui \
    dialogtest.ui \
    findcarwindow.ui \
    mainwindow.ui \
    newsshowwindow.ui \
    searchwindow.ui \
    shopwindow.ui \
    usermenuwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
