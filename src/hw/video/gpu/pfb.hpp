// SPDX-License-Identifier: GPL-3.0-or-later

// SPDX-FileCopyrightText: 2024 ergo720

#pragma once

#include <cstdint>


struct pfb_t {
	// Appear to contain info about the ram modules
	uint32_t cfg0, cfg1;
};

void pfb_init();
void pfb_reset();
