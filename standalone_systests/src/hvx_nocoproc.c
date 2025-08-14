/*
 * Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: BSD-3-Claude-Clear
 */

int main()
{
    /* clear SSR:XE bit */
    asm volatile("r0 = ssr\n\t"
                 "r0 = clrbit(r0, #31)\n\t"
                 "ssr = r0\n\t"
                 : : : "r0");
    asm volatile("v0 = vrmpyb(v0, v1)\n\t");
    return 0;
}
