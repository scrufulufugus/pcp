AC_DEFUN([AC_PACKAGE_NEED_QT_QMAKE],
  [ if test -z "$QMAKE"; then
	AC_PATH_PROG(QMAKE, qmake,, /usr/bin)
    fi
    qmake=$QMAKE
    AC_SUBST(qmake)
  ])

AC_DEFUN([AC_PACKAGE_NEED_QT_UIC],
  [ if test -z "$UIC"; then
	AC_PATH_PROG(UIC, uic,, /usr/bin)
    fi
    uic=$UIC
    AC_SUBST(uic)
  ])

AC_DEFUN([AC_PACKAGE_NEED_QT_MOC],
  [ if test -z "$MOC"; then
	AC_PATH_PROG(MOC, moc,, /usr/bin)
    fi
    moc=$MOC
    AC_SUBST(moc)
  ])
