# Created by: Ju Pengfei <jupengfei@gmail.com>
# $FreeBSD$

PORTNAME=	fortune
PORTVERSION=	1.2.2
PORTREVISION=	2
CATEGORIES=	chinese
MASTER_SITES=	GOOGLE_CODE
DISTNAME=	fortune-mod-zh-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Classic fortune file in Chinese

BROKEN=		Unfetchable (google code has gone away)
DEPRECATED=	Unfetchable for more than six months (google code has gone away)
EXPIRATION_DATE=	2017-04-30

RUN_DEPENDS=	autob5:chinese/autoconvert

PROJECTHOST=	chinese-fortune
NO_BUILD=	yes
USES=		tar:bzip2 gmake
SUB_FILES=	pkg-message

.if exists(/usr/games/strfile)
STRFILE=	/usr/games/strfile
.elif exists(/usr/bin/strfile)
STRFILE=	/usr/bin/strfile
.else
IGNORE=		needs strfile command. Please install games distribution of base system
.endif

post-patch:
	@${REINPLACE_CMD} -e "s|/usr/|${PREFIX}/|" \
		-e "s|strfile|${STRFILE}|" \
		${WRKSRC}/src/Makefile

.include <bsd.port.mk>
