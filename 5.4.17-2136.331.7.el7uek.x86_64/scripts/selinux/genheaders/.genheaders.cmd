cmd_scripts/selinux/genheaders/genheaders := gcc -Wp,-MD,scripts/selinux/genheaders/.genheaders.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu89     -I./include/uapi -I./include -I./security/selinux/include    -o scripts/selinux/genheaders/genheaders scripts/selinux/genheaders/genheaders.c   

source_scripts/selinux/genheaders/genheaders := scripts/selinux/genheaders/genheaders.c

deps_scripts/selinux/genheaders/genheaders := \
  /usr/include/stdc-predef.h \
  /usr/include/stdio.h \
  /usr/include/features.h \
  /usr/include/sys/cdefs.h \
  /usr/include/bits/wordsize.h \
  /usr/include/gnu/stubs.h \
  /usr/include/gnu/stubs-64.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stddef.h \
  /usr/include/bits/types.h \
  /usr/include/bits/typesizes.h \
  /usr/include/libio.h \
  /usr/include/_G_config.h \
  /usr/include/wchar.h \
  /usr/lib/gcc/x86_64-redhat-linux/4.8.5/include/stdarg.h \
  /usr/include/bits/stdio_lim.h \
  /usr/include/bits/sys_errlist.h \
  /usr/include/bits/stdio.h \
  /usr/include/stdlib.h \
  /usr/include/bits/waitflags.h \
  /usr/include/bits/waitstatus.h \
  /usr/include/endian.h \
  /usr/include/bits/endian.h \
  /usr/include/bits/byteswap.h \
  /usr/include/bits/byteswap-16.h \
  /usr/include/sys/types.h \
  /usr/include/time.h \
  /usr/include/sys/select.h \
  /usr/include/bits/select.h \
  /usr/include/bits/sigset.h \
  /usr/include/bits/time.h \
  /usr/include/sys/sysmacros.h \
  /usr/include/bits/pthreadtypes.h \
  /usr/include/alloca.h \
  /usr/include/bits/stdlib-float.h \
  /usr/include/unistd.h \
  /usr/include/bits/posix_opt.h \
  /usr/include/bits/environments.h \
  /usr/include/bits/confname.h \
  /usr/include/getopt.h \
  /usr/include/string.h \
  /usr/include/xlocale.h \
  /usr/include/bits/string.h \
  /usr/include/bits/string2.h \
  /usr/include/errno.h \
  /usr/include/bits/errno.h \
  include/uapi/linux/errno.h \
  /usr/include/asm/errno.h \
  include/uapi/asm-generic/errno.h \
  include/uapi/asm-generic/errno-base.h \
  /usr/include/ctype.h \
  security/selinux/include/classmap.h \
  include/uapi/linux/capability.h \
  include/uapi/linux/types.h \
  /usr/include/asm/types.h \
  include/uapi/asm-generic/types.h \
  include/uapi/asm-generic/int-ll64.h \
  /usr/include/asm/bitsperlong.h \
  include/uapi/asm-generic/bitsperlong.h \
    $(wildcard include/config/64bit.h) \
  include/uapi/linux/posix_types.h \
  include/uapi/linux/stddef.h \
  include/linux/compiler_types.h \
    $(wildcard include/config/have/arch/compiler/h.h) \
    $(wildcard include/config/enable/must/check.h) \
    $(wildcard include/config/optimize/inlining.h) \
    $(wildcard include/config/cc/has/asm/inline.h) \
  /usr/include/asm/posix_types.h \
  /usr/include/asm/posix_types_64.h \
  include/uapi/asm-generic/posix_types.h \
  include/uapi/linux/socket.h \
  security/selinux/include/initial_sid_to_string.h \

scripts/selinux/genheaders/genheaders: $(deps_scripts/selinux/genheaders/genheaders)

$(deps_scripts/selinux/genheaders/genheaders):
