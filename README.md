qt2deb-demo
===========

This demo describes how to create ubuntu deb package from a Qt application source code.

Setting
========

At first, you should download the necessay tools via apt-get:

sudo apt-get install build-essential devscripts ubuntu-dev-tools debhelper dh-make diff patch gnupg fakeroot lintian pbuilder

Usage
======

Then untar hello\_1.0.orig.tar.gz:

tar -xzvf hello\_1.0.orig.tar.gz

Change to the directory and execute dh\_make. Answer to the questions which dh\_make ask:

cd hello-1.0

dh\_make --createorig --single -e yyhoo2.young@gmail.com -c gpl

Execute debuild command, you can get deb package successfully at last.

Have a fun! \^\_^/

