# Created by: alp@sfedu.ru
# $FreeBSD$

PORTNAME=	postgresql-repmgr
PORTVERSION=	3.3
CATEGORIES=	databases
MASTER_SITES=	http://www.repmgr.org/download/
DISTNAME=	repmgr-${PORTVERSION}

MAINTAINER=	bofh@FreeBSD.org
COMMENT=	PostgreSQL replication manager

LICENSE=	GPLv3

RUN_DEPENDS=	rsync:net/rsync

USES+=		gettext gmake pgsql:9.3+
USE_RC_SUBR=	repmgrd
WANT_PGSQL=	server
MAKE_ENV=	USE_PGXS=1

OPTIONS_DEFINE=	DOCS
PORTDOCS=	CONTRIBUTING.md COPYRIGHT CREDITS FAILOVER.rst FAQ.md HISTORY LICENSE \
		PACKAGES.md QUICKSTART.md README.md SSH-RSYNC.md TODO

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/repmgr ${STAGEDIR}${PREFIX}/bin
	${INSTALL_PROGRAM} ${WRKSRC}/repmgrd ${STAGEDIR}${PREFIX}/sbin
	${INSTALL_DATA} ${WRKSRC}/repmgr.conf.sample ${STAGEDIR}${PREFIX}/etc
	@${MKDIR} ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/repmgr.sql ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/sql/repmgr_funcs.sql ${STAGEDIR}${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/sql/uninstall_repmgr_funcs.sql ${STAGEDIR}${DATADIR}
	@${MKDIR} ${STAGEDIR}${PREFIX}/lib/postgresql
	${INSTALL_LIB} ${WRKSRC}/sql/repmgr_funcs.so ${STAGEDIR}${PREFIX}/lib/postgresql

do-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
.for f in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/$f ${STAGEDIR}${DOCSDIR}
.endfor

.include <bsd.port.mk>
