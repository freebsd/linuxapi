PREFIX?=	/usr/local
DESTDIR?=

CC?=		cc
CMAKE?=		cmake
CPIO?=		cpio
FIND?=		find
INSTALL?=	install
MKDIR?=		mkdir -p
SED?=		sed
SH?=		sh

COPYTREE_SHARE=	${SH} -c '(${FIND} -Ed $$1 $$3 | ${CPIO} -dumpl $$2 >/dev/null 2>&1) && \
	${FIND} -Ed $$1 $$3 \(   -type d -exec ${SH} -c '\''cd '\''$$2'\'' && chmod 755 "$$@"'\'' . {} + \
	-o -type f -exec ${SH} -c '\''cd '\''$$2'\'' && chmod 0644 "$$@"'\'' . {} + \)' COPYTREE_SHARE

install:
	${COPYTREE_SHARE} linuxapi ${DESTDIR}${PREFIX}

	${MKDIR} ${DESTDIR}${PREFIX}/share/pkgconfig
	${SED} 's|%%PREFIX%%|${PREFIX}|' linuxapi.pc.in > ${DESTDIR}${PREFIX}/share/pkgconfig/linuxapi.pc
	${MKDIR} ${DESTDIR}${PREFIX}/share/cmake
	${SED} 's|%%PREFIX%%|${PREFIX}|' linuxapi-config.cmake.in > ${DESTDIR}${PREFIX}/share/cmake/linuxapi-config.cmake

test:
	${CC} -c -Ilinuxapi tests/smoketest.c -o /dev/null

	${RM} -r tests/work
	${CMAKE} -S tests/cmake -B tests/work
	${MAKE} -C tests/work
	${RM} -r tests/work
