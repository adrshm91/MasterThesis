PLATFORM=WIN64
DIR=win64

PYEXT=.pyd  
EXECOUT = -shared -o 
LIBS = -L$(AME)/sys/python/$(DIR)/lib/python$(PYTHON_VER)/config/ -L$(AME)/libcosim/lib/$(DIR) -lgeneric_cosim -lm -lrt -lpython$(PYTHON_VER)
CFLAGS := $(CFLAGS) -I$(AME)/libcosim/include -I$(AME)/sys/python/$(DIR)/include/python$(PYTHON_VER)

ifeq ($(PLATFORM),WIN64)
  BINEXT = .dll
  CFLAGS := $(CFLAGS) -I$(DEEPLEARNING_PYTHON)/include -DWIN32 -DWIN64
  EXECOUT = -LD -Fe
  LIBS = $(AME)/libcosim/lib/win64/generic_cosim.lib ws2_32.lib $(DEEPLEARNING_PYTHON)/libs/python36.lib
  CC = cl
endif

all:
	$(DIR) $(DIR)/binding_amecommunication$(BINEXT) binding_amecommunication$(PYEXT) 

$(DIR):
	mkdir -p $@

$(DIR)/binding_amecommunication$(BINEXT): binding_amecommunication.c 
	$(CC) $(CFLAGS) $< $(LIBS) $(EXECOUT)$@

binding_amecommunication$(BINEXT): $(DIR)/binding_amecommunication$(BINEXT) 
	rm -f $@ && cp $< $@

binding_amecommunication$(PYEXT): binding_amecommunication$(BINEXT) 
	cp $< $@

clean:
	$(RM) *.obj *.o *~



