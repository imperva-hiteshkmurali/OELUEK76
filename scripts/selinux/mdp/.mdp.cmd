cmd_scripts/selinux/mdp/mdp := gcc -Wp,-MD,scripts/selinux/mdp/.mdp.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu89     -I./include/uapi -I./include -I./security/selinux/include -I./include    -o scripts/selinux/mdp/mdp scripts/selinux/mdp/mdp.c   

source_scripts/selinux/mdp/mdp := scripts/selinux/mdp/mdp.c

deps_scripts/selinux/mdp/mdp := \
    $(wildcard include/config/ext2/fs/security.h) \
    $(wildcard include/config/ext4/fs/security.h) \
    $(wildcard include/config/ext4/use/for/ext2.h) \
    $(wildcard include/config/jfs/security.h) \
    $(wildcard include/config/reiserfs/fs/security.h) \
    $(wildcard include/config/jffs2/fs/security.h) \
    $(wildcard include/config/xfs/fs.h) \
    $(wildcard include/config/gfs2/fs.h) \
    $(wildcard include/config/btrfs/fs.h) \
    $(wildcard include/config/f2fs/fs/security.h) \
    $(wildcard include/config/ocfs2/fs.h) \
    $(wildcard include/config/overlay/fs.h) \
    $(wildcard include/config/squashfs/xattr.h) \
    $(wildcard include/config/unix98/ptys.h) \
    $(wildcard include/config/hugetlbfs.h) \
    $(wildcard include/config/tmpfs.h) \
    $(wildcard include/config/devtmpfs.h) \
    $(wildcard include/config/posix/mqueue.h) \
    $(wildcard include/config/proc/fs.h) \
    $(wildcard include/config/security/selinux.h) \
    $(wildcard include/config/sysfs.h) \
    $(wildcard include/config/debug/fs.h) \
    $(wildcard include/config/tracing.h) \
    $(wildcard include/config/pstore.h) \
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
  include/linux/kconfig.h \
    $(wildcard include/config/cpu/big/endian.h) \
    $(wildcard include/config/booger.h) \
    $(wildcard include/config/foo.h) \
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

scripts/selinux/mdp/mdp: $(deps_scripts/selinux/mdp/mdp)

$(deps_scripts/selinux/mdp/mdp):
