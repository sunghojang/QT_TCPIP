#############################################################################
# Makefile for building: download
# Generated by qmake (2.01a) (Qt 4.8.2) on: Thu Aug 16 17:48:16 2018
# Project:  ../download/download.pro
# Template: app
# Command: /qt/project/bin/qmake -spec /qt/project/mkspecs/qws/linux-arm-g++ -o Makefile ../download/download.pro
#############################################################################

####### Compiler, tools and options

CC            = arm-none-linux-gnueabi-gcc
CXX           = arm-none-linux-gnueabi-g++
DEFINES       = -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_NETWORK_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/qt/project/mkspecs/qws/linux-arm-g++ -I../download -I/qt/project/include/QtCore -I/qt/project/include/QtNetwork -I/qt/project/include/QtGui -I/qt/project/include -I../download -I. -I. -I.
LINK          = arm-none-linux-gnueabi-g++
LFLAGS        = -Wl,-O1 -Wl,-rpath,/qt/project/lib
LIBS          = $(SUBLIBS)  -L/qt/project/lib -lQtGui -L/qt/project/lib -lQtNetwork -lQtCore -lpthread 
AR            = arm-none-linux-gnueabi-ar cqs
RANLIB        = 
QMAKE         = /qt/project/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = arm-none-linux-gnueabi-strip
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

SOURCES       = ../download/main.cpp \
		../download/downloadmanager.cpp \
		../download/textprogressbar.cpp moc_downloadmanager.cpp
OBJECTS       = main.o \
		downloadmanager.o \
		textprogressbar.o \
		moc_downloadmanager.o
DIST          = /qt/project/mkspecs/common/unix.conf \
		/qt/project/mkspecs/common/linux.conf \
		/qt/project/mkspecs/common/gcc-base.conf \
		/qt/project/mkspecs/common/gcc-base-unix.conf \
		/qt/project/mkspecs/common/g++-base.conf \
		/qt/project/mkspecs/common/g++-unix.conf \
		/qt/project/mkspecs/common/qws.conf \
		/qt/project/mkspecs/qconfig.pri \
		/qt/project/mkspecs/modules/qt_webkit_version.pri \
		/qt/project/mkspecs/features/qt_functions.prf \
		/qt/project/mkspecs/features/qt_config.prf \
		/qt/project/mkspecs/features/exclusive_builds.prf \
		/qt/project/mkspecs/features/default_pre.prf \
		/qt/project/mkspecs/features/release.prf \
		/qt/project/mkspecs/features/default_post.prf \
		/qt/project/mkspecs/features/warn_on.prf \
		/qt/project/mkspecs/features/qt.prf \
		/qt/project/mkspecs/features/unix/thread.prf \
		/qt/project/mkspecs/features/moc.prf \
		/qt/project/mkspecs/features/resources.prf \
		/qt/project/mkspecs/features/uic.prf \
		/qt/project/mkspecs/features/yacc.prf \
		/qt/project/mkspecs/features/lex.prf \
		/qt/project/mkspecs/features/include_source_dir.prf \
		../download/download.pro
QMAKE_TARGET  = download
DESTDIR       = 
TARGET        = download

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
	cp download /tftp

$(TARGET): ui_downloadmanager.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: ../download/download.pro  /qt/project/mkspecs/qws/linux-arm-g++/qmake.conf /qt/project/mkspecs/common/unix.conf \
		/qt/project/mkspecs/common/linux.conf \
		/qt/project/mkspecs/common/gcc-base.conf \
		/qt/project/mkspecs/common/gcc-base-unix.conf \
		/qt/project/mkspecs/common/g++-base.conf \
		/qt/project/mkspecs/common/g++-unix.conf \
		/qt/project/mkspecs/common/qws.conf \
		/qt/project/mkspecs/qconfig.pri \
		/qt/project/mkspecs/modules/qt_webkit_version.pri \
		/qt/project/mkspecs/features/qt_functions.prf \
		/qt/project/mkspecs/features/qt_config.prf \
		/qt/project/mkspecs/features/exclusive_builds.prf \
		/qt/project/mkspecs/features/default_pre.prf \
		/qt/project/mkspecs/features/release.prf \
		/qt/project/mkspecs/features/default_post.prf \
		/qt/project/mkspecs/features/warn_on.prf \
		/qt/project/mkspecs/features/qt.prf \
		/qt/project/mkspecs/features/unix/thread.prf \
		/qt/project/mkspecs/features/moc.prf \
		/qt/project/mkspecs/features/resources.prf \
		/qt/project/mkspecs/features/uic.prf \
		/qt/project/mkspecs/features/yacc.prf \
		/qt/project/mkspecs/features/lex.prf \
		/qt/project/mkspecs/features/include_source_dir.prf \
		/qt/project/lib/libQtGui.prl \
		/qt/project/lib/libQtNetwork.prl \
		/qt/project/lib/libQtCore.prl
	$(QMAKE) -spec /qt/project/mkspecs/qws/linux-arm-g++ -o Makefile ../download/download.pro
/qt/project/mkspecs/common/unix.conf:
/qt/project/mkspecs/common/linux.conf:
/qt/project/mkspecs/common/gcc-base.conf:
/qt/project/mkspecs/common/gcc-base-unix.conf:
/qt/project/mkspecs/common/g++-base.conf:
/qt/project/mkspecs/common/g++-unix.conf:
/qt/project/mkspecs/common/qws.conf:
/qt/project/mkspecs/qconfig.pri:
/qt/project/mkspecs/modules/qt_webkit_version.pri:
/qt/project/mkspecs/features/qt_functions.prf:
/qt/project/mkspecs/features/qt_config.prf:
/qt/project/mkspecs/features/exclusive_builds.prf:
/qt/project/mkspecs/features/default_pre.prf:
/qt/project/mkspecs/features/release.prf:
/qt/project/mkspecs/features/default_post.prf:
/qt/project/mkspecs/features/warn_on.prf:
/qt/project/mkspecs/features/qt.prf:
/qt/project/mkspecs/features/unix/thread.prf:
/qt/project/mkspecs/features/moc.prf:
/qt/project/mkspecs/features/resources.prf:
/qt/project/mkspecs/features/uic.prf:
/qt/project/mkspecs/features/yacc.prf:
/qt/project/mkspecs/features/lex.prf:
/qt/project/mkspecs/features/include_source_dir.prf:
/qt/project/lib/libQtGui.prl:
/qt/project/lib/libQtNetwork.prl:
/qt/project/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec /qt/project/mkspecs/qws/linux-arm-g++ -o Makefile ../download/download.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/download1.0.0 || $(MKDIR) .tmp/download1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/download1.0.0/ && $(COPY_FILE) --parents ../download/downloadmanager.h ../download/textprogressbar.h .tmp/download1.0.0/ && $(COPY_FILE) --parents ../download/main.cpp ../download/downloadmanager.cpp ../download/textprogressbar.cpp .tmp/download1.0.0/ && $(COPY_FILE) --parents ../download/downloadmanager.ui .tmp/download1.0.0/ && (cd `dirname .tmp/download1.0.0` && $(TAR) download1.0.0.tar download1.0.0 && $(COMPRESS) download1.0.0.tar) && $(MOVE) `dirname .tmp/download1.0.0`/download1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/download1.0.0


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

compiler_moc_header_make_all: moc_downloadmanager.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_downloadmanager.cpp
moc_downloadmanager.cpp: ../download/textprogressbar.h \
		../download/downloadmanager.h
	/qt/project/bin/moc $(DEFINES) $(INCPATH) ../download/downloadmanager.h -o moc_downloadmanager.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_downloadmanager.h
compiler_uic_clean:
	-$(DEL_FILE) ui_downloadmanager.h
ui_downloadmanager.h: ../download/downloadmanager.ui
	/qt/project/bin/uic ../download/downloadmanager.ui -o ui_downloadmanager.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_uic_clean 

####### Compile

main.o: ../download/main.cpp ../download/downloadmanager.h \
		../download/textprogressbar.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o ../download/main.cpp

downloadmanager.o: ../download/downloadmanager.cpp ../download/downloadmanager.h \
		../download/textprogressbar.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o downloadmanager.o ../download/downloadmanager.cpp

textprogressbar.o: ../download/textprogressbar.cpp ../download/textprogressbar.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o textprogressbar.o ../download/textprogressbar.cpp

moc_downloadmanager.o: moc_downloadmanager.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_downloadmanager.o moc_downloadmanager.cpp

####### Install

install_target: first FORCE
	@$(CHK_DIR_EXISTS) $(INSTALL_ROOT)/qt/project/examples/network/downloadmanager/ || $(MKDIR) $(INSTALL_ROOT)/qt/project/examples/network/downloadmanager/ 
	-$(INSTALL_PROGRAM) "$(QMAKE_TARGET)" "$(INSTALL_ROOT)/qt/project/examples/network/downloadmanager/$(QMAKE_TARGET)"
	-$(STRIP) "$(INSTALL_ROOT)/qt/project/examples/network/downloadmanager/$(QMAKE_TARGET)"

uninstall_target:  FORCE
	-$(DEL_FILE) "$(INSTALL_ROOT)/qt/project/examples/network/downloadmanager/$(QMAKE_TARGET)"
	-$(DEL_DIR) $(INSTALL_ROOT)/qt/project/examples/network/downloadmanager/ 


install_sources: first FORCE
	@$(CHK_DIR_EXISTS) $(INSTALL_ROOT)/qt/project/examples/network/downloadmanager/ || $(MKDIR) $(INSTALL_ROOT)/qt/project/examples/network/downloadmanager/ 
	-$(INSTALL_FILE) /root/TcpIp/QT_TCPIP/download/download/main.cpp $(INSTALL_ROOT)/qt/project/examples/network/downloadmanager/
	-$(INSTALL_FILE) /root/TcpIp/QT_TCPIP/download/download/downloadmanager.cpp $(INSTALL_ROOT)/qt/project/examples/network/downloadmanager/
	-$(INSTALL_FILE) /root/TcpIp/QT_TCPIP/download/download/textprogressbar.cpp $(INSTALL_ROOT)/qt/project/examples/network/downloadmanager/
	-$(INSTALL_FILE) /root/TcpIp/QT_TCPIP/download/download/downloadmanager.h $(INSTALL_ROOT)/qt/project/examples/network/downloadmanager/
	-$(INSTALL_FILE) /root/TcpIp/QT_TCPIP/download/download/textprogressbar.h $(INSTALL_ROOT)/qt/project/examples/network/downloadmanager/
	-$(INSTALL_FILE) /root/TcpIp/QT_TCPIP/download/download/downloadmanager.ui $(INSTALL_ROOT)/qt/project/examples/network/downloadmanager/
	-$(INSTALL_FILE) /root/TcpIp/QT_TCPIP/download/download/download.pro $(INSTALL_ROOT)/qt/project/examples/network/downloadmanager/


uninstall_sources:  FORCE
	-$(DEL_FILE) -r $(INSTALL_ROOT)/qt/project/examples/network/downloadmanager/main.cpp 
	 -$(DEL_FILE) -r $(INSTALL_ROOT)/qt/project/examples/network/downloadmanager/downloadmanager.cpp 
	 -$(DEL_FILE) -r $(INSTALL_ROOT)/qt/project/examples/network/downloadmanager/textprogressbar.cpp 
	 -$(DEL_FILE) -r $(INSTALL_ROOT)/qt/project/examples/network/downloadmanager/downloadmanager.h 
	 -$(DEL_FILE) -r $(INSTALL_ROOT)/qt/project/examples/network/downloadmanager/textprogressbar.h 
	 -$(DEL_FILE) -r $(INSTALL_ROOT)/qt/project/examples/network/downloadmanager/downloadmanager.ui 
	 -$(DEL_FILE) -r $(INSTALL_ROOT)/qt/project/examples/network/downloadmanager/download.pro
	-$(DEL_DIR) $(INSTALL_ROOT)/qt/project/examples/network/downloadmanager/ 


install:  install_target install_sources  FORCE

uninstall: uninstall_target uninstall_sources   FORCE

FORCE:

