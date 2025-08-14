/*
 * Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 * SPDX-License-Identifier: BSD-3-Clause-Clear
 */

DEF_REG_FIELD(SSR_CAUSE,
    "cause", 0, 8,
    "8-bit field that contains the reason for various exception.")
DEF_REG_FIELD(SSR_ASID,
    "asid", 8, 7,
    "7-bit field that contains the Address Space Identifier.")
DEF_REG_FIELD(SSR_UM,
    "um", 16, 1,
    "read-write bit.")
DEF_REG_FIELD(SSR_EX,
    "ex", 17, 1,
    "set when an interrupt or exception is accepted.")
DEF_REG_FIELD(SSR_IE,
    "ie", 18, 1,
    "indicates whether the global interrupt is enabled.")
DEF_REG_FIELD(SSR_GM,
    "gm", 19, 1,
    "Guest mode bit.")
DEF_REG_FIELD(SSR_V0,
    "v0", 20, 1,
    "if BADVA0 register contents are from a valid slot 0 instruction.")
DEF_REG_FIELD(SSR_V1,
     "v1", 21, 1,
    "if BADVA1 register contents are from a valid slot 1 instruction.")
DEF_REG_FIELD(SSR_BVS,
    "bvs", 22, 1,
    "BADVA Selector.")
DEF_REG_FIELD(SSR_CE,
    "ce", 23, 1,
    "grants user or guest read permissions to the PCYCLE register aliases.")
DEF_REG_FIELD(SSR_PE,
    "pe", 24, 1,
    "grants guest read permissions to the PMU register aliases.")
DEF_REG_FIELD(SSR_BP,
    "bp", 25, 1,
    "Internal Bus Priority bit.")
DEF_REG_FIELD(SSR_XA,
    "xa", 27, 3,
    "Extension Active, which control operation of an attached coprocessor.")
DEF_REG_FIELD(SSR_SS,
    "ss", 30, 1,
    "Single Step, which enables single-step exceptions.")
DEF_REG_FIELD(SSR_XE,
    "xe", 31, 1,
    "Coprocessor Enable, which enables use of an attached coprocessor.")
