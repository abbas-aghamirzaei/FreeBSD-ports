# Created by: tcberner
# $FreeBSD$

PORTNAME=	kjs
PORTVERSION=	${KDE_FRAMEWORKS_VERSION}
PORTREVISION=	1
CATEGORIES=	www kde kde-frameworks

MAINTAINER=	kde@FreeBSD.org
COMMENT=	KF5 library providing an ECMAScript interpreter

LIB_DEPENDS=	libpcre.so:devel/pcre

USES=		cmake:outsource compiler:c++11-lib kde:5 pkgconfig tar:xz
USE_KDE=	ecm doctools
USE_QT5=	buildtools_build core qmake_build

.include <bsd.port.mk>
