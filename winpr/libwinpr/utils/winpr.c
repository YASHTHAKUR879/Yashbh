/**
 * WinPR: Windows Portable Runtime
 * Debugging Utils
 *
 * Copyright 2015 Armin Novak <armin.novak@thincast.com>
 * Copyright 2015 Thincast Technologies GmbH
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <stdlib.h>
#include <stdio.h>
#include <winpr/winpr.h>
#include <winpr/version.h>

void winpr_get_version(int* major, int* minor, int* revision)
{
	if (major)
		*major = WINPR_VERSION_MAJOR;
	if (minor)
		*minor = WINPR_VERSION_MINOR;
	if (revision)
		*revision = WINPR_VERSION_REVISION;
}

char* winpr_get_version_string(void)
{
	return WINPR_VERSION_FULL;
}

char* winpr_get_build_date(void)
{
	static char build_date[64];

	_snprintf(build_date, sizeof(build_date), "%s %s", __DATE__, __TIME__);

	return build_date;
}

char* winpr_get_build_revision(void)
{
	return GIT_REVISION;
}

