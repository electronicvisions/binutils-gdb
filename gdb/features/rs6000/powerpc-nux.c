/*
	powerpc:nux register order and types used in gdb.
	This file is manually created.
*/
#include "defs.h"
#include "osabi.h"
#include "target-descriptions.h"

struct target_desc *tdesc_powerpc_nux;
static void
initialize_tdesc_powerpc_nux (void)
{
  struct target_desc *result = allocate_target_description ();
  struct tdesc_feature *feature;
  struct tdesc_type *field_type;
  struct tdesc_type *type;

  set_tdesc_architecture (result, bfd_scan_arch ("powerpc:nux"));

  feature = tdesc_create_feature (result, "org.gnu.gdb.power.core");
  tdesc_create_reg (feature, "r0", 0, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r1", 1, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r2", 2, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r3", 3, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r4", 4, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r5", 5, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r6", 6, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r7", 7, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r8", 8, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r9", 9, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r10", 10, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r11", 11, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r12", 12, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r13", 13, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r14", 14, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r15", 15, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r16", 16, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r17", 17, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r18", 18, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r19", 19, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r20", 20, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r21", 21, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r22", 22, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r23", 23, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r24", 24, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r25", 25, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r26", 26, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r27", 27, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r28", 28, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r29", 29, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r30", 30, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "r31", 31, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "pc", 32, 1, NULL, 32, "code_ptr");
  tdesc_create_reg (feature, "msr", 33, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "cr", 34, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "lr", 35, 1, NULL, 32, "code_ptr");
  tdesc_create_reg (feature, "ctr", 36, 1, NULL, 32, "uint32");
  tdesc_create_reg (feature, "xer", 37, 1, NULL, 32, "uint32");

  feature = tdesc_create_feature (result, "org.gnu.gdb.power.nux");

  // vector register type
  field_type = tdesc_named_type (feature, "int16");
  tdesc_create_vector (feature, "v8i16", field_type, 8);

  field_type = tdesc_named_type (feature, "int8");
  tdesc_create_vector (feature, "v16i8", field_type, 16);

  type = tdesc_create_union (feature, "vec128");
  field_type = tdesc_named_type (feature, "v8i16");
  tdesc_add_field (type, "v8_int16", field_type);
  field_type = tdesc_named_type (feature, "v16i8");
  tdesc_add_field (type, "v16_int8", field_type);

  // vector accumulator register type
  field_type = tdesc_named_type (feature, "int16");
  tdesc_create_vector (feature, "v16i16", field_type, 16);

  field_type = tdesc_named_type (feature, "int32");
  tdesc_create_vector (feature, "v8i32", field_type, 8);

  type = tdesc_create_union (feature, "vec256");
  field_type = tdesc_named_type (feature, "v16i16");
  tdesc_add_field (type, "v16_int16", field_type);
  field_type = tdesc_named_type (feature, "v8i32");
  tdesc_add_field (type, "v8_int32", field_type);

  // vector condiional register
  tdesc_create_reg (feature, "kc", 38, 1, "vector", 32, "uint32");
  // vector register
  tdesc_create_reg (feature, "kv0", 39, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "kv1", 40, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "kv2", 41, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "kv3", 42, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "kv4", 43, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "kv5", 44, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "kv6", 45, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "kv7", 46, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "kv8", 47, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "kv9", 48, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "kv10", 49, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "kv11", 50, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "kv12", 51, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "kv13", 52, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "kv14", 53, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "kv15", 54, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "kv16", 55, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "kv17", 56, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "kv18", 57, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "kv19", 58, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "kv20", 59, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "kv21", 60, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "kv22", 61, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "kv23", 62, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "kv24", 63, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "kv25", 64, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "kv26", 65, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "kv27", 66, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "kv28", 67, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "kv29", 68, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "kv30", 69, 1, NULL, 128, "vec128");
  tdesc_create_reg (feature, "kv31", 70, 1, NULL, 128, "vec128");
  // vector accumulator register
  tdesc_create_reg (feature, "ka", 71, 1, "vector", 256, "vec256");

  tdesc_powerpc_nux = result;
}
