// Copyright 2016, Chris Blume. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MAX_CPUID_X64GCCASSEMBLYISCPUIDAVAILABLEPOLICY_HPP
#define MAX_CPUID_X64GCCASSEMBLYISCPUIDAVAILABLEPOLICY_HPP

namespace max
{
namespace CPU
{

	class X64GCCAssemblyIsCPUIDAvailablePolicy
	{
	public:

		static bool IsCPUIDAvailable() noexcept;

	};

} // namespace CPU
} // namespace max

#endif // #ifndef MAX_CPUID_X64GCCASSEMBLYISCPUIDAVAILABLEPOLICY_HPP
