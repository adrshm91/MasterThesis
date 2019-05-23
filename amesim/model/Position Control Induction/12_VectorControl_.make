#
# Simcenter Amesim system make file
#

# This variable can be used in -L statements
# or otherwise to separate machine dependent code
# The legal values are : sun, ibm, hp, sgi, lnx, win32

# This makefile has been created using the following cathegory path list
#	$AME
#	$AME/libsig
#	$AME/libmec
#	$AME/libhydr
#	$AME/libpn
#	$AME/libth
#	$AME/libemd
#	$AME/libesc
#	$AME/libeb
#	$AME/libmotion
#	$AME/libplm
#	$AME/libtr
#	$AME/libm6dof
#	$AME/libcosim
# End category path list

MACHINETYPE = win32-gcc

# Then the object files
OBJECTS = \
	c:/program\ files/simcenter/2019.1/amesim/libemd/submodels/win32-gcc/EMDSCIMFOC01.o \
	c:/program\ files/simcenter/2019.1/amesim/libeb/submodels/win32-gcc/EBCT00.o \
	c:/program\ files/simcenter/2019.1/amesim/libesc/submodels/win32-gcc/ESCAVINV001.o \
	c:/program\ files/simcenter/2019.1/amesim/submodels/win32-gcc/THTS1.o \
	c:/program\ files/simcenter/2019.1/amesim/libeb/submodels/win32-gcc/EBVS01.o \
	c:/program\ files/simcenter/2019.1/amesim/libsig/submodels/win32-gcc/CONS00.o \
	c:/program\ files/simcenter/2019.1/amesim/libeb/submodels/win32-gcc/EB3N03.o \
	c:/program\ files/simcenter/2019.1/amesim/libeb/submodels/win32-gcc/EBVT01.o \
	c:/program\ files/simcenter/2019.1/amesim/libsig/submodels/win32-gcc/GA00.o \
	c:/program\ files/simcenter/2019.1/amesim/libeb/submodels/win32-gcc/EB4N04.o \
	c:/program\ files/simcenter/2019.1/amesim/libeb/submodels/win32-gcc/EBZV01.o \
	c:/program\ files/simcenter/2019.1/amesim/libmec/submodels/win32-gcc/W000.o \
	c:/program\ files/simcenter/2019.1/amesim/libemd/submodels/win32-gcc/EMDSCIM11.o \
	c:/program\ files/simcenter/2019.1/amesim/libmec/submodels/win32-gcc/RN001.o \
	c:/program\ files/simcenter/2019.1/amesim/libmec/submodels/win32-gcc/MECRL0.o \
	c:/program\ files/simcenter/2019.1/amesim/libmec/submodels/win32-gcc/RSD00.o \
	c:/program\ files/simcenter/2019.1/amesim/libmec/submodels/win32-gcc/TORQC.o \
	c:/program\ files/simcenter/2019.1/amesim/libmec/submodels/win32-gcc/MECRSS0B.o \
	c:/program\ files/simcenter/2019.1/amesim/libsig/submodels/win32-gcc/UD00.o

OBJECTS2 = \
	"c:/program files/simcenter/2019.1/amesim/libemd/submodels/win32-gcc/EMDSCIMFOC01.o" \
	"c:/program files/simcenter/2019.1/amesim/libeb/submodels/win32-gcc/EBCT00.o" \
	"c:/program files/simcenter/2019.1/amesim/libesc/submodels/win32-gcc/ESCAVINV001.o" \
	"c:/program files/simcenter/2019.1/amesim/submodels/win32-gcc/THTS1.o" \
	"c:/program files/simcenter/2019.1/amesim/libeb/submodels/win32-gcc/EBVS01.o" \
	"c:/program files/simcenter/2019.1/amesim/libsig/submodels/win32-gcc/CONS00.o" \
	"c:/program files/simcenter/2019.1/amesim/libeb/submodels/win32-gcc/EB3N03.o" \
	"c:/program files/simcenter/2019.1/amesim/libeb/submodels/win32-gcc/EBVT01.o" \
	"c:/program files/simcenter/2019.1/amesim/libsig/submodels/win32-gcc/GA00.o" \
	"c:/program files/simcenter/2019.1/amesim/libeb/submodels/win32-gcc/EB4N04.o" \
	"c:/program files/simcenter/2019.1/amesim/libeb/submodels/win32-gcc/EBZV01.o" \
	"c:/program files/simcenter/2019.1/amesim/libmec/submodels/win32-gcc/W000.o" \
	"c:/program files/simcenter/2019.1/amesim/libemd/submodels/win32-gcc/EMDSCIM11.o" \
	"c:/program files/simcenter/2019.1/amesim/libmec/submodels/win32-gcc/RN001.o" \
	"c:/program files/simcenter/2019.1/amesim/libmec/submodels/win32-gcc/MECRL0.o" \
	"c:/program files/simcenter/2019.1/amesim/libmec/submodels/win32-gcc/RSD00.o" \
	"c:/program files/simcenter/2019.1/amesim/libmec/submodels/win32-gcc/TORQC.o" \
	"c:/program files/simcenter/2019.1/amesim/libmec/submodels/win32-gcc/MECRSS0B.o" \
	"c:/program files/simcenter/2019.1/amesim/libsig/submodels/win32-gcc/UD00.o"

12_VectorControl_.dll: $(OBJECTS) 12_VectorControl_.o
	@echo 12_VectorControl_.make.link_args =
	@type 12_VectorControl_.make.link_args
	"$(AME)\interfaces\standalonesimulator\win32\stdsim_dynlink"  $(CC) -m32 $(LDFLAGS) -o 12_VectorControl_.dll 12_VectorControl_.o @"12_VectorControl_.make.link_args" $(AMELIBS)

12_VectorControl_.o: 12_VectorControl_.c
	"$(AME)\interfaces\user_cosim\win32\ame_user_cosim_dyncompile" $(CC) -m32 -c -I"$(AME)\interfaces\user_cosim" -I"$(AME)\interfaces\standalonesimulator" -I"$(AME)\interfaces" $(CFLAGS) -o 12_VectorControl_.o 12_VectorControl_.c

.c.o:
	@echo
	@echo "Warning: \"$<\" is newer than the object."
	@echo ""

.f.o:
	@echo
	@echo "Warning: \"$<\" is newer than the object."
	@echo ""

# End of file

