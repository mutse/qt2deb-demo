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

Create the directory hello-1.0 and move .cpp, .pro & data into it.

mkdir hello-1.0

mv data hello.cpp hello.pro hello-1.0

After finished, execute dh\_make command. Answer to the questions which dh\_make ask:

dh\_make --createorig --single -e yyhoo2.young@gmail.com -c gpl

Execute debuild command, you can get deb package successfully at last.

Have a fun! ^\_^//

