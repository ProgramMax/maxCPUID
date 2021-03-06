// Copyright 2015, Chris Blume. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MAX_CONFIGURATION_PLATFORM_WIN32_HPP
#define MAX_CONFIGURATION_PLATFORM_WIN32_HPP

#include <max/Compiling/Configuration/Compiler.hpp>

#define MAX_PLATFORM_WINDOWS

#if defined( MAX_COMPILER_GCC )
	#if defined( __x86_64__ )
		#define MAX_64BIT_WORD_SIZE
		#define MAX_X86_64
	#elif defined( __i386__ )
		#define MAX_32BIT_WORD_SIZE
		#define MAX_X86
	#elif defined( __IA64__ )
		#define MAX_64BIT_WORD_SIZE
		#define MAX_IA64
	#else
		static_assert( false, "Unknown platform" );
	#endif
#elif defined( MAX_COMPILER_VC )
	#if defined( _M_X64 )
		#define MAX_64BIT_WORD_SIZE
		#define MAX_X86_64
	#elif defined( _M_IX86 )
		#define MAX_32BIT_WORD_SIZE
		#define MAX_X86
	#elif defined( _M_IA64 )
		#define MAX_64BIT_WORD_SIZE
		#define MAX_IA64
	#else
		static_assert( false, "Unknown platform" );
	#endif
#else
	static_assert( false, "Unknown platform" );
#endif

#endif // #ifndef MAX_CONFIGURATION_PLATFORM_WIN32_HPP
