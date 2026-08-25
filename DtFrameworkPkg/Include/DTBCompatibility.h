// Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
// SPDX-License-Identifier: BSD-3-Clause Clear

/** @file DTBCompatibility.h
  Compatibility aliases resolving the unprefixed names used throughout
  the DTFramework submodule (DTBExtnLib_*.c, DTBInternals.h) to their
  canonical DTB_-namespaced definitions in edk2-platforms's DTBDefs.h.
  Isolated here, in DtFrameworkPkg/Include rather than the DTFramework
  submodule itself, so DTBDefs.h only carries its own canonical
  definitions and the submodule's naming exceptions stay out of it.
**/

#ifndef DTBCOMPATIBILITY_H_
#define DTBCOMPATIBILITY_H_

/*
 * DTBExtnLib.h and create-dtb-apis.h declare their fdt_* API prototypes
 * using the lowercase fdt_node_handle spelling directly. This alias lets
 * those declarations resolve to the same canonical struct without
 * duplicating it.
 */
typedef FDT_NODE_HANDLE fdt_node_handle;

/*
 * Referenced directly by DTBExtnLib_blob.c, DTBExtnLib_node.c, and
 * DTBInternals.h.
 */
#define MAX_BLOB_ID      DTB_MAX_BLOB_ID
#define DEFAULT_BLOB_ID  DTB_DEFAULT_BLOB_ID

/*
 * Referenced directly by DTBExtnLib_driver.c.
 */
#define SIZE_NIL   DTB_REG_SIZE_NIL
#define SIZE_32    DTB_REG_SIZE_32
#define SIZE_64    DTB_REG_SIZE_64
#define SIZE_BLOB  DTB_REG_SIZE_BLOB

/*
 * Referenced directly by DTBExtnLib_blob.c, DTBExtnLib_node.c,
 * DTBExtnLib_prop.c, DTBExtnLib_driver.c, DTBExtnLib_create-dtb.c,
 * DTBExtnLib_overlay.c, and DTBInternals.h.
 */
#define FDT_ERR_QC_NOERROR        DTB_ERR_NOERROR
#define FDT_ERR_QC_NULLPTR        DTB_ERR_NULLPTR
#define FDT_ERR_QC_TRUNCATED      DTB_ERR_TRUNCATED
#define FDT_ERR_QC_BUF2SMALL      DTB_ERR_BUF2SMALL
#define FDT_ERR_QC_NILVALUE       DTB_ERR_NILVALUE
#define FDT_ERR_QC_BADFORMAT      DTB_ERR_BADFORMAT
#define FDT_ERR_QC_INPUT_ARG_ERR  DTB_ERR_INPUT_ARG_ERR
#define FDT_ERR_QC_REGIDX         DTB_ERR_REGIDX
#define FDT_ERR_QC_TARGETIDX      DTB_ERR_TARGETIDX
#define FDT_ERR_QC_MEMALLOC       DTB_ERR_MEMALLOC
#define FDT_ERR_QC_BLOBID         DTB_ERR_BLOBID
#define FDT_ERR_QC_NOTSUPPORTED   DTB_ERR_NOTSUPPORTED
#define FDT_ERR_QC_NODE_DIFFERENT DTB_ERR_NODE_DIFFERENT
#define FDT_ERR_QC_SLICE_RANGE    DTB_ERR_SLICE_RANGE
#define FDT_ERR_QC_SLICE_COUNT    DTB_ERR_SLICE_COUNT
#define FDT_ERR_QC_BAD_SELECTOR   DTB_ERR_BAD_SELECTOR
#define FDT_ERR_QC_FDTLIB_ERROR   DTB_ERR_FDTLIB_ERROR
#define FDT_ERR_QC_OVERFLOW       DTB_ERR_OVERFLOW

#endif /* DTBCOMPATIBILITY_H_ */
