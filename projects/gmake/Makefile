# GNU Make solution makefile autogenerated by Premake
# Type "make help" for usage help

ifndef config
  config=debug
endif
export config

PROJECTS := png zlib jpeg EnvMapTool

.PHONY: all clean help $(PROJECTS)

all: $(PROJECTS)

png: 
	@echo "==== Building png ($(config)) ===="
	@${MAKE} --no-print-directory -C . -f png.make

zlib: 
	@echo "==== Building zlib ($(config)) ===="
	@${MAKE} --no-print-directory -C . -f zlib.make

jpeg: 
	@echo "==== Building jpeg ($(config)) ===="
	@${MAKE} --no-print-directory -C . -f jpeg.make

EnvMapTool: png zlib jpeg
	@echo "==== Building EnvMapTool ($(config)) ===="
	@${MAKE} --no-print-directory -C . -f EnvMapTool.make

clean:
	@${MAKE} --no-print-directory -C . -f png.make clean
	@${MAKE} --no-print-directory -C . -f zlib.make clean
	@${MAKE} --no-print-directory -C . -f jpeg.make clean
	@${MAKE} --no-print-directory -C . -f EnvMapTool.make clean

help:
	@echo "Usage: make [config=name] [target]"
	@echo ""
	@echo "CONFIGURATIONS:"
	@echo "   debug"
	@echo "   release"
	@echo "   debug_emscripten"
	@echo "   release_emscripten"
	@echo ""
	@echo "TARGETS:"
	@echo "   all (default)"
	@echo "   clean"
	@echo "   png"
	@echo "   zlib"
	@echo "   jpeg"
	@echo "   EnvMapTool"
	@echo ""
	@echo "For more information, see http://industriousone.com/premake/quick-start"
