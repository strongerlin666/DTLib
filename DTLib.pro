TEMPLATE = app
CONFIG  += console c++17
CONFIG  -= app_bundle
CONFIG  -= qt

SOURCES += \
    Exception.cpp \
    Object.cpp \
    main.cpp

HEADERS += \
    DynamicList.h \
    Exception.h \
    List.h \
    Object.h \
    SeqList.h \
    SmartPointer.h \
    StaticList.h

