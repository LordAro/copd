QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = copd
TEMPLATE = app

DESTDIR     = bin
OBJECTS_DIR = obj
MOC_DIR     = src/gen
UI_DIR      = src/gen

SOURCES += $$files(src/*.cpp)
HEADERS += $$files(src/*.h)
FORMS   += $$files(forms/*.ui)
