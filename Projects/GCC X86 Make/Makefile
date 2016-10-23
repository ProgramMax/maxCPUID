PROGRAM_NAME = maxCPUID
CODE_DIRECTORY = ../../Code/TranslationUnits
CXX_SRCS = \
	$(CODE_DIRECTORY)/EntryPoint.cpp \
	$(CODE_DIRECTORY)/../../Dependencies/max/Code/TranslationUnits/Hardware/CPU/CPUID.cpp \
	$(CODE_DIRECTORY)/../../Dependencies/max/Code/TranslationUnits/Hardware/CPU/CacheInfo.cpp \
	$(CODE_DIRECTORY)/../../Dependencies/max/Code/TranslationUnits/Hardware/CPU/TLB.cpp \
	$(CODE_DIRECTORY)/../../Dependencies/max/Code/TranslationUnits/Hardware/CPU/CacheLevel.cpp \
	$(CODE_DIRECTORY)/../../Dependencies/max/Code/TranslationUnits/Hardware/CPU/TraceCache.cpp \
	$(CODE_DIRECTORY)/../../Dependencies/max/Code/TranslationUnits/Hardware/CPU/Prefetch.cpp \
	$(CODE_DIRECTORY)/../../Dependencies/max/Code/TranslationUnits/Hardware/CPU/Associativity.cpp \
	$(CODE_DIRECTORY)/../../Dependencies/max/Code/TranslationUnits/Hardware/CPU/IsCPUIDAvailablePolicies/X86GCCAssemblyIsCPUIDAvailablePolicy.cpp \
	$(CODE_DIRECTORY)/../../Dependencies/max/Code/TranslationUnits/Hardware/CPU/CPUIDPolicies/X86GCCAssemblyCPUIDPolicy.cpp \
	$(CODE_DIRECTORY)/../../Dependencies/max/Code/TranslationUnits/Hardware/CPU/CPUIDSubleafArgumentsAndResult.cpp
CXX_OBJS = $(CXX_SRCS:.cpp=.o)

INCLUDE_PATHS = \
	$(CODE_DIRECTORY)/../../Dependencies/max/Code/Include
INCLUDE_PATHS_FLAGS = $(foreach d, $(INCLUDE_PATHS), -I$d)

LIBRARY_PATHS = \
	.
LIBRARY_PATHS_FLAGS = $(foreach d, $(LIBRARY_PATHS), -L$d)

CPPFLAGS += $(INCLUDE_PATHS_FLAGS) -std=c++14 -Wall -Wextra -Wpedantic -Wconversion -Wsign-conversion -m32
LINKER_FLAGS += $(LIBRARY_PATHS_FLAGS)




all: $(PROGRAM_NAME)

$(PROGRAM_NAME): $(PCH_OBJS) $(CXX_OBJS)
	g++ -g $(CXX_OBJS) $(LINKER_FLAGS) -o $(PROGRAM_NAME)

.cpp.o:
	g++ -g $(CPPFLAGS) -c $< -o $@

clean:
	@- $(RM) $(PROGRAM_NAME)
	@- $(RM) $(CXX_OBJS)

distclean: clean
