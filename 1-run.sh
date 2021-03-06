./i386-softmmu/qemu-system-i386 \
-drive file=./data/tizen-common.x86,if=virtio,index=1 \
-boot c \
-append 'security=none console=ttyS0 root=/dev/vda rw video=LVDS-1:1920x1080-32@30 ip=10.0.2.15::10.0.2.2:255.255.255.0::eth0:none' \
-serial file:./data/kernel.log \
-m 512 \
-M pc \
-kernel ./data/bzImage \
-enable-kvm \
-smp `grep -c 'cpu cores' /proc/cpuinfo` \
-vga none \
-soundhw all \
-device vigs \
-device yagl 1>./data/qemu.log 2>&1
