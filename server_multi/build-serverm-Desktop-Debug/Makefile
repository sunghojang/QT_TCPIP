#############################################################################
# Makefile for building: serverm
# Generated by qmake (2.01a) (Qt 4.8.2) on: Fri Aug 17 15:47:17 2018
# Project:  ../serverm/serverm.pro
# Template: app
# Command: /qt/qt-everywhere-opensource-src-4.8.2/bin/qmake -spec /usr/local/Trolltech/Qt-4.8.2/mkspecs/linux-g++-64 CONFIG+=debug -o Makefile ../serverm/serverm.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_GUI_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -m64 -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -m64 -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/local/Trolltech/Qt-4.8.2/mkspecs/linux-g++-64 -I../serverm -I/usr/local/Trolltech/Qt-4.8.2/include/QtCore -I/usr/local/Trolltech/Qt-4.8.2/include/QtNetwork -I/usr/local/Trolltech/Qt-4.8.2/include/QtGui -I/usr/local/Trolltech/Qt-4.8.2/include -I. -I. -I../serverm -I.
LINK          = g++
LFLAGS        = -m64 -Wl,-rpath,/usr/local/Trolltech/Qt-4.8.2/lib
LIBS          = $(SUBLIBS)  -L/usr/local/Trolltech/Qt-4.8.2/lib -lQtGui -L/usr/local/Trolltech/Qt-4.8.2/lib -L/usr/X11R6/lib64 -lQtNetwork -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /qt/qt-everywhere-opensource-src-4.8.2/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = ../serverm/main.cpp \
		../serverm/mainwindow.cpp moc_mainwindow.cpp
OBJECTS       = main.o \
		mainwindow.o \
		moc_mainwindow.o
DIST          = /usr/local/Trolltech/Qt-4.8.2/mkspecs/common/unix.conf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/common/linux.conf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/common/gcc-base.conf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/common/gcc-base-unix.conf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/common/g++-base.conf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/common/g++-unix.conf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/qconfig.pri \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/modules/qt_webkit_version.pri \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/qt_functions.prf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/qt_config.prf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/exclusive_builds.prf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/default_pre.prf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/debug.prf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/default_post.prf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/warn_on.prf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/qt.prf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/unix/thread.prf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/moc.prf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/resources.prf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/uic.prf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/yacc.prf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/lex.prf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/include_source_dir.prf \
		../serverm/serverm.pro
QMAKE_TARGET  = serverm
DESTDIR       = 
TARGET        = serverm

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): ui_mainwindow.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)
	{ test -n "$(DESTDIR)" && DESTDIR="$(DESTDIR)" || DESTDIR=.; } && test $$(gdb --version | sed -e 's,[^0-9]\+\([0-9]\)\.\([0-9]\).*,\1\2,;q') -gt 72 && gdb --nx --batch --quiet -ex 'set confirm off' -ex "save gdb-index $$DESTDIR" -ex quit '$(TARGET)' && test -f $(TARGET).gdb-index && objcopy --add-section '.gdb_index=$(TARGET).gdb-index' --set-section-flags '.gdb_index=readonly' '$(TARGET)' '$(TARGET)' && rm -f $(TARGET).gdb-index || true

Makefile: ../serverm/serverm.pro  /usr/local/Trolltech/Qt-4.8.2/mkspecs/linux-g++-64/qmake.conf /usr/local/Trolltech/Qt-4.8.2/mkspecs/common/unix.conf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/common/linux.conf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/common/gcc-base.conf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/common/gcc-base-unix.conf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/common/g++-base.conf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/common/g++-unix.conf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/qconfig.pri \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/modules/qt_webkit_version.pri \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/qt_functions.prf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/qt_config.prf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/exclusive_builds.prf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/default_pre.prf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/debug.prf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/default_post.prf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/warn_on.prf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/qt.prf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/unix/thread.prf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/moc.prf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/resources.prf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/uic.prf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/yacc.prf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/lex.prf \
		/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/include_source_dir.prf \
		/usr/local/Trolltech/Qt-4.8.2/lib/libQtGui.prl \
		/usr/local/Trolltech/Qt-4.8.2/lib/libQtCore.prl \
		/usr/local/Trolltech/Qt-4.8.2/lib/libQtNetwork.prl
	$(QMAKE) -spec /usr/local/Trolltech/Qt-4.8.2/mkspecs/linux-g++-64 CONFIG+=debug -o Makefile ../serverm/serverm.pro
/usr/local/Trolltech/Qt-4.8.2/mkspecs/common/unix.conf:
/usr/local/Trolltech/Qt-4.8.2/mkspecs/common/linux.conf:
/usr/local/Trolltech/Qt-4.8.2/mkspecs/common/gcc-base.conf:
/usr/local/Trolltech/Qt-4.8.2/mkspecs/common/gcc-base-unix.conf:
/usr/local/Trolltech/Qt-4.8.2/mkspecs/common/g++-base.conf:
/usr/local/Trolltech/Qt-4.8.2/mkspecs/common/g++-unix.conf:
/usr/local/Trolltech/Qt-4.8.2/mkspecs/qconfig.pri:
/usr/local/Trolltech/Qt-4.8.2/mkspecs/modules/qt_webkit_version.pri:
/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/qt_functions.prf:
/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/qt_config.prf:
/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/exclusive_builds.prf:
/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/default_pre.prf:
/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/debug.prf:
/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/default_post.prf:
/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/warn_on.prf:
/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/qt.prf:
/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/unix/thread.prf:
/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/moc.prf:
/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/resources.prf:
/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/uic.prf:
/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/yacc.prf:
/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/lex.prf:
/usr/local/Trolltech/Qt-4.8.2/mkspecs/features/include_source_dir.prf:
/usr/local/Trolltech/Qt-4.8.2/lib/libQtGui.prl:
/usr/local/Trolltech/Qt-4.8.2/lib/libQtCore.prl:
/usr/local/Trolltech/Qt-4.8.2/lib/libQtNetwork.prl:
qmake:  FORCE
	@$(QMAKE) -spec /usr/local/Trolltech/Qt-4.8.2/mkspecs/linux-g++-64 CONFIG+=debug -o Makefile ../serverm/serverm.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/serverm1.0.0 || $(MKDIR) .tmp/serverm1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/serverm1.0.0/ && $(COPY_FILE) --parents ../serverm/mainwindow.h .tmp/serverm1.0.0/ && $(COPY_FILE) --parents ../serverm/main.cpp ../serverm/mainwindow.cpp .tmp/serverm1.0.0/ && $(COPY_FILE) --parents ../serverm/mainwindow.ui .tmp/serverm1.0.0/ && (cd `dirname .tmp/serverm1.0.0` && $(TAR) serverm1.0.0.tar serverm1.0.0 && $(COMPRESS) serverm1.0.0.tar) && $(MOVE) `dirname .tmp/serverm1.0.0`/serverm1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/serverm1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_mainwindow.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_mainwindow.cpp
moc_mainwindow.cpp: ../serverm/mainwindow.h
	/usr/local/Trolltech/Qt-4.8.2/bin/moc $(DEFINES) $(INCPATH) ../serverm/mainwindow.h -o moc_mainwindow.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_mainwindow.h
compiler_uic_clean:
	-$(DEL_FILE) ui_mainwindow.h
ui_mainwindow.h: ../serverm/mainwindow.ui
	/usr/local/Trolltech/Qt-4.8.2/bin/uic ../serverm/mainwindow.ui -o ui_mainwindow.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 

####### Compile

main.o: ../serverm/main.cpp ../serverm/mainwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o ../serverm/main.cpp

mainwindow.o: ../serverm/mainwindow.cpp ../serverm/mainwindow.h \
		ui_mainwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mainwindow.o ../serverm/mainwindow.cpp

moc_mainwindow.o: moc_mainwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mainwindow.o moc_mainwindow.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

