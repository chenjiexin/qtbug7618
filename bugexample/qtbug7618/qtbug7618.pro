TEMPLATE = app

TARGET = qtbug7618
target.path = $${PREFIX}/bin
INSTALLS *= target

DEFINES += _LARGEFILE64_SOURCE

SOURCES += main.cpp
HEADERS += main.h

# clean up after emacs 
CLEAN_COMMANDS += ; find . -name "*~" -exec rm {} +

CLEAN_TARGET += ; rm -f $${TARGET}

QMAKE_CLEAN += $${CLEAN_FILES} $${CLEAN_COMMANDS} $${CLEAN_TARGET}
