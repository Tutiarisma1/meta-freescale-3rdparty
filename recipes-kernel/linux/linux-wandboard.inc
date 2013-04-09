# Adapted from linux-imx.inc, copyright (C) 2012 O.S. Systems Software LTDA
# Released under the MIT license (see COPYING.MIT for the terms)

DESCRIPTION = "Linux kernel for Wandboard"
LICENSE = "GPLv2"
LIC_FILES_CHKSUM = "file://COPYING;md5=d7810fab7487fb0aad327b76f1be7cd7"

require recipes-kernel/linux/linux-imx.inc

INC_PR = "r1"

# Put a local version until we have a true SRCREV to point to
LOCALVERSION ?= "+yocto"
SCMVERSION ?= "y"

# SRC_URI for wandboard kernel
SRC_URI = "git://repo.or.cz/wandboard.git \
           file://defconfig \
"
