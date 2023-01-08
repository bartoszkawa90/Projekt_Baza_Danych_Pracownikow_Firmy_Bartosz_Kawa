QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    adding_window.cpp \
    address.cpp \
    change_mod_win.cpp \
    erasing_window.cpp \
    job.cpp \
    main.cpp \
    mainwindow.cpp \
    new.cpp \
    person.cpp

HEADERS += \
    adding_window.h \
    address.h \
    change_mod_win.h \
    erasing_window.h \
    job.h \
    mainwindow.h \
    new.h \
    person.h

FORMS += \
    adding_window.ui \
    change_mod_win.ui \
    erasing_window.ui \
    mainwindow.ui \
    new.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    MyRes.qrc
