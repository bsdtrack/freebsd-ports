PORTNAME=	spotify-tui
DISTVERSIONPREFIX=	v
DISTVERSION=	0.25.0
PORTREVISION=	37
CATEGORIES=	audio

MAINTAINER=	lcook@FreeBSD.org
COMMENT=	Spotify for the terminal written in Rust
WWW=		https://github.com/Rigellute/spotify-tui

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		cargo localbase:ldflags python:build ssl xorg
USE_GITHUB=	yes
GH_ACCOUNT=	Rigellute
USE_XORG=	xcb

CARGO_CRATES=	addr2line-0.14.1 \
		adler-0.2.3 \
		adler32-1.2.0 \
		aho-corasick-0.7.13 \
		ansi_term-0.11.0 \
		anyhow-1.0.43 \
		arboard-1.2.0 \
		arrayref-0.3.6 \
		arrayvec-0.5.1 \
		atty-0.2.14 \
		autocfg-0.1.7 \
		autocfg-1.0.0 \
		backtrace-0.3.56 \
		base64-0.10.1 \
		base64-0.11.0 \
		base64-0.12.3 \
		bitflags-1.2.1 \
		blake2b_simd-0.5.10 \
		block-0.1.6 \
		bumpalo-3.4.0 \
		bytemuck-1.4.1 \
		byteorder-1.3.4 \
		bytes-0.4.12 \
		bytes-0.5.6 \
		cassowary-0.3.0 \
		cc-1.0.58 \
		cfg-if-0.1.10 \
		cfg-if-1.0.0 \
		chrono-0.4.13 \
		clap-2.33.3 \
		clipboard-win-4.0.3 \
		cloudabi-0.0.3 \
		cloudabi-0.1.0 \
		color_quant-1.1.0 \
		constant_time_eq-0.1.5 \
		core-foundation-0.7.0 \
		core-foundation-0.9.1 \
		core-foundation-sys-0.7.0 \
		core-foundation-sys-0.8.2 \
		core-graphics-0.21.0 \
		crc32fast-1.2.1 \
		crossbeam-utils-0.7.2 \
		crossterm-0.20.0 \
		crossterm_winapi-0.8.0 \
		darling-0.9.0 \
		darling_core-0.9.0 \
		darling_macro-0.9.0 \
		deflate-0.8.6 \
		derive_builder-0.7.2 \
		derive_builder_core-0.5.0 \
		dirs-3.0.1 \
		dirs-sys-0.3.5 \
		dotenv-0.13.0 \
		dtoa-0.4.6 \
		either-1.5.3 \
		encoding_rs-0.8.23 \
		env_logger-0.6.2 \
		error-code-2.0.2 \
		failure-0.1.8 \
		failure_derive-0.1.8 \
		fnv-1.0.7 \
		foreign-types-0.3.2 \
		foreign-types-shared-0.1.1 \
		fuchsia-cprng-0.1.1 \
		fuchsia-zircon-0.3.3 \
		fuchsia-zircon-sys-0.3.3 \
		futures-0.3.5 \
		futures-channel-0.3.5 \
		futures-core-0.3.5 \
		futures-executor-0.3.5 \
		futures-io-0.3.5 \
		futures-macro-0.3.5 \
		futures-sink-0.3.5 \
		futures-task-0.3.5 \
		futures-util-0.3.5 \
		gethostname-0.2.1 \
		getrandom-0.1.14 \
		getrandom-0.2.2 \
		gimli-0.23.0 \
		h2-0.2.6 \
		hashbrown-0.8.1 \
		hermit-abi-0.1.15 \
		http-0.2.1 \
		http-body-0.3.1 \
		httparse-1.3.4 \
		humantime-1.3.0 \
		hyper-0.13.7 \
		hyper-tls-0.4.3 \
		ident_case-1.0.1 \
		idna-0.1.5 \
		idna-0.2.0 \
		image-0.23.12 \
		indexmap-1.5.0 \
		instant-0.1.7 \
		iovec-0.1.4 \
		itertools-0.8.2 \
		itoa-0.4.6 \
		jpeg-decoder-0.1.20 \
		js-sys-0.3.42 \
		kernel32-sys-0.2.2 \
		lazy_static-1.4.0 \
		libc-0.2.82 \
		linked-hash-map-0.5.3 \
		lock_api-0.4.1 \
		log-0.4.11 \
		malloc_buf-0.0.6 \
		matches-0.1.8 \
		memchr-2.3.3 \
		mime-0.3.16 \
		mime_guess-2.0.3 \
		miniz_oxide-0.3.7 \
		miniz_oxide-0.4.3 \
		mio-0.6.23 \
		mio-0.7.0 \
		mio-named-pipes-0.1.7 \
		mio-uds-0.6.8 \
		miow-0.2.2 \
		miow-0.3.5 \
		native-tls-0.2.4 \
		net2-0.2.37 \
		nix-0.20.0 \
		ntapi-0.3.4 \
		num-integer-0.1.43 \
		num-iter-0.1.42 \
		num-rational-0.3.2 \
		num-traits-0.2.12 \
		num_cpus-1.13.0 \
		objc-0.2.7 \
		objc-foundation-0.1.1 \
		objc_id-0.1.1 \
		object-0.23.0 \
		once_cell-1.4.0 \
		openssl-0.10.30 \
		openssl-probe-0.1.2 \
		openssl-sys-0.9.58 \
		parking_lot-0.11.0 \
		parking_lot_core-0.8.0 \
		percent-encoding-1.0.1 \
		percent-encoding-2.1.0 \
		pin-project-0.4.22 \
		pin-project-internal-0.4.22 \
		pin-project-lite-0.1.7 \
		pin-utils-0.1.0 \
		pkg-config-0.3.18 \
		png-0.16.8 \
		ppv-lite86-0.2.8 \
		proc-macro-hack-0.5.16 \
		proc-macro-nested-0.1.6 \
		proc-macro2-0.4.30 \
		proc-macro2-1.0.24 \
		quick-error-1.2.3 \
		quote-0.6.13 \
		quote-1.0.7 \
		rand-0.6.5 \
		rand-0.7.3 \
		rand-0.8.3 \
		rand_chacha-0.1.1 \
		rand_chacha-0.2.2 \
		rand_chacha-0.3.0 \
		rand_core-0.3.1 \
		rand_core-0.4.2 \
		rand_core-0.5.1 \
		rand_core-0.6.2 \
		rand_hc-0.1.0 \
		rand_hc-0.2.0 \
		rand_hc-0.3.0 \
		rand_isaac-0.1.1 \
		rand_jitter-0.1.4 \
		rand_os-0.1.3 \
		rand_pcg-0.1.2 \
		rand_xorshift-0.1.1 \
		random-0.12.2 \
		rdrand-0.4.0 \
		redox_syscall-0.1.57 \
		redox_users-0.3.4 \
		regex-1.3.9 \
		regex-syntax-0.6.18 \
		remove_dir_all-0.5.3 \
		reqwest-0.10.6 \
		rspotify-0.10.0 \
		rust-argon2-0.7.0 \
		rustc-demangle-0.1.16 \
		rustc-serialize-0.3.24 \
		ryu-1.0.5 \
		schannel-0.1.19 \
		scopeguard-1.1.0 \
		security-framework-0.4.4 \
		security-framework-sys-0.4.3 \
		serde-1.0.128 \
		serde_derive-1.0.128 \
		serde_json-1.0.64 \
		serde_urlencoded-0.6.1 \
		serde_yaml-0.8.19 \
		signal-hook-0.3.9 \
		signal-hook-mio-0.2.1 \
		signal-hook-registry-1.4.0 \
		slab-0.4.2 \
		smallvec-1.4.1 \
		socket2-0.3.19 \
		str-buf-1.0.5 \
		strsim-0.7.0 \
		strsim-0.8.0 \
		syn-0.15.44 \
		syn-1.0.60 \
		synstructure-0.12.4 \
		tempfile-3.1.0 \
		termcolor-1.1.0 \
		textwrap-0.11.0 \
		thiserror-1.0.20 \
		thiserror-impl-1.0.20 \
		thread_local-1.0.1 \
		tiff-0.6.1 \
		time-0.1.43 \
		tinyvec-0.3.3 \
		tokio-0.2.25 \
		tokio-macros-0.2.6 \
		tokio-socks-0.2.2 \
		tokio-tls-0.3.1 \
		tokio-util-0.3.1 \
		tower-service-0.3.0 \
		tracing-0.1.17 \
		tracing-core-0.1.11 \
		try-lock-0.2.3 \
		tui-0.16.0 \
		unicase-2.6.0 \
		unicode-bidi-0.3.4 \
		unicode-normalization-0.1.13 \
		unicode-segmentation-1.6.0 \
		unicode-width-0.1.8 \
		unicode-xid-0.1.0 \
		unicode-xid-0.2.1 \
		url-1.7.2 \
		url-2.1.1 \
		vcpkg-0.2.10 \
		vec_map-0.8.2 \
		version_check-0.9.2 \
		want-0.3.0 \
		wasi-0.9.0+wasi-snapshot-preview1 \
		wasi-0.10.2+wasi-snapshot-preview1 \
		wasm-bindgen-0.2.65 \
		wasm-bindgen-backend-0.2.65 \
		wasm-bindgen-futures-0.4.15 \
		wasm-bindgen-macro-0.2.65 \
		wasm-bindgen-macro-support-0.2.65 \
		wasm-bindgen-shared-0.2.65 \
		web-sys-0.3.42 \
		webbrowser-0.5.5 \
		weezl-0.1.3 \
		widestring-0.4.2 \
		winapi-0.2.8 \
		winapi-0.3.9 \
		winapi-build-0.1.1 \
		winapi-i686-pc-windows-gnu-0.4.0 \
		winapi-util-0.1.5 \
		winapi-wsapoll-0.1.1 \
		winapi-x86_64-pc-windows-gnu-0.4.0 \
		winreg-0.7.0 \
		ws2_32-sys-0.2.1 \
		x11rb-0.8.1 \
		yaml-rust-0.4.5

BINARY_ALIAS=	python3=${PYTHON_CMD}

SUB_FILES=	pkg-message
PLIST_FILES=	bin/spt
PORTDOCS=	CHANGELOG.md README.md

OPTIONS_DEFINE=	DOCS SPOTIFYD
SPOTIFYD_DESC=	Lightweight Spotify client daemon

SPOTIFYD_RUN_DEPENDS=	spotifyd:audio/spotifyd

.include <bsd.port.options.mk>

.if ( ${OPSYS} == FreeBSD && ${OSVERSION} >= 1400092 && ${SSL_DEFAULT} == base ) || ${SSL_DEFAULT:Mopenssl} || ${SSL_DEFAULT:Mopenssl3*}
BROKEN_SSL=	base openssl openssl31
BROKEN_SSL_REASON=	Fails to detect OpenSSL 3.0.0 and later
.endif

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
