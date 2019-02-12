TEMPLATE        = app
LANGUAGE        = C++
SOURCES         = qmc_context.cpp
CONFIG          += qt console warn_on
INCLUDEPATH     += ../../../src/include
INCLUDEPATH     += ../../../src/libpcp_qmc/src
CONFIG(release) {
DESTDIR = build/release
}
config(debug) {
DESTDIR   = build/debug
}
LIBS            += -L../../../src/libpcp/src
LIBS            += -L../../../src/libpcp_qmc/src
LIBS            += -L../../../src/libpcp_qmc/src/$$DESTDIR
LIBS            += -lpcp_qmc -lpcp
QT		-= gui
QMAKE_CFLAGS	+= $$(CFLAGS)
QMAKE_CXXFLAGS	+= $$(CFLAGS) $$(CXXFLAGS)
QMAKE_LFLAGS	+= $$(LDFLAGS)
