qt2deb-demo
===========

This demo describes how to create ubuntu deb package from a Qt application source code.

Setting
========

At first, you should download the necessay tools via apt-get:

$ sudo apt-get install build-essential devscripts ubuntu-dev-tools debhelper dh-make diff patch gnupg fakeroot lintian pbuilder

How to build
=======

$ cd hello-1.0

Please execute debuild command:

$ debuild

you can get deb package successfully.

Have a fun! ^\_^//

