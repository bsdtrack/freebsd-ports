PORTNAME=	ovirt-engine-sdk
PORTVERSION=	4.4.1
PORTREVISION=	2
CATEGORIES=	net rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Ruby SDK for the oVirt Engine API
WWW=		https://ovirt.org/ \
		https://github.com/oVirt/ovirt-engine-sdk-ruby

LICENSE=	APACHE20
LICENSE_FILE=	${WRKSRC}/LICENSE.txt

BROKEN_RUBY32=	yes

LIB_DEPENDS=	libcurl.so:ftp/curl
RUN_DEPENDS=	rubygem-json>=1<3:devel/rubygem-json

USES=		gem gnome
USE_GNOME=	libxml2

.include <bsd.port.mk>
