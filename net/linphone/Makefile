# $FreeBSD$

PORTNAME=	linphone
PORTVERSION=	3.10.2
PORTEPOCH=	1
CATEGORIES=	net
MASTER_SITES=	SAVANNAH/linphone/3.10.x/sources

MAINTAINER=	tijl@FreeBSD.org
COMMENT=	SIP client supporting voice/video calls and text messaging

LIB_DEPENDS=	libbctoolbox.so:net/bctoolbox \
		libbellesip.so:net/belle-sip \
		libmediastreamer_base.so:net/mediastreamer \
		libortp.so:net/ortp \
		libsqlite3.so:databases/sqlite3

CONFLICTS_INSTALL=	linphone-base-[0-9]*

GNU_CONFIGURE=	yes
CONFIGURE_ENV=	OBJC="${CC}"
CONFIGURE_ARGS=	--disable-deplibs-link --disable-documentation \
		--disable-speex --disable-strict \
		--disable-tutorials \
		--enable-external-mediastreamer --enable-external-ortp \
		--enable-lime \
		--with-readline=${LOCALBASE}
CPPFLAGS+=	-I${LOCALBASE}/include
LIBS+=		-L${LOCALBASE}/lib
INSTALLS_ICONS=	yes
INSTALL_TARGET=	install-strip
USES=		gettext-tools gmake gnome iconv libtool pathfix pkgconfig \
		readline:port
USE_GNOME=	gtk20 intltool libxml2
USE_LDCONFIG=	yes
USE_XORG=	x11

OPTIONS_DEFINE=	LDAP NLS NOTIFY UPNP VIDEO
OPTIONS_DEFAULT=NOTIFY UPNP VIDEO
OPTIONS_SUB=	yes

LDAP_CONFIGURE_ENABLE=	ldap
LDAP_LIB_DEPENDS=	libsasl2.so:security/cyrus-sasl2
LDAP_USE=		OPENLDAP=yes

NLS_CONFIGURE_ENABLE=	nls
NLS_USES=		gettext-runtime

NOTIFY_CONFIGURE_ENABLE=notify
NOTIFY_LIB_DEPENDS=	libnotify.so:devel/libnotify

UPNP_CONFIGURE_ENABLE=	upnp
UPNP_LIB_DEPENDS=	libupnp.so:devel/upnp

VIDEO_CONFIGURE_ENABLE=	video

.if defined(WITH_DEBUG) && !defined(WITHOUT_DEBUG)
CONFIGURE_ARGS+=--enable-debug
.endif

post-install:
	${RM} -r ${STAGEDIR}${PREFIX}/share/gnome

.include <bsd.port.mk>
