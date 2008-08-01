typedef enum {
  NOP = 0,
  GETLOCAL,
  SETLOCAL,
  GETSPECIAL,
  SETSPECIAL,
  GETDYNAMIC,
  SETDYNAMIC,
  GETINSTANCEVARIABLE,
  SETINSTANCEVARIABLE,
  GETCLASSVARIABLE,
  SETCLASSVARIABLE,
  GETCONSTANT,
  SETCONSTANT,
  GETGLOBAL,
  SETGLOBAL,
  PUTNIL,
  PUTSELF,
  PUTUNDEF,
  PUTOBJECT,
  PUTSTRING,
  CONCATSTRINGS,
  TOSTRING,
  TOREGEXP,
  NEWARRAY,
  DUPARRAY,
  EXPANDARRAY,
  CONCATARRAY,
  SPLATARRAY,
  CHECKINCLUDEARRAY,
  NEWHASH,
  NEWRANGE,
  PUTNOT,
  POP,
  DUP,
  DUPN,
  SWAP,
  REPUT,
  TOPN,
  EMPTSTACK,
  DEFINEMETHOD,
  ALIAS,
  UNDEF,
  DEFINED,
  POSTEXE,
  TRACE,
  DEFINECLASS,
  SEND,
  INVOKESUPER,
  INVOKEBLOCK,
  LEAVE,
  FINISH,
  THROW,
  JUMP,
  BRANCHIF,
  BRANCHUNLESS,
  GETINLINECACHE,
  ONCEINLINECACHE,
  SETINLINECACHE,
  OPT_CASE_DISPATCH,
  OPT_CHECKENV,
  OPT_PLUS,
  OPT_MINUS,
  OPT_MULT,
  OPT_DIV,
  OPT_MOD,
  OPT_EQ,
  OPT_LT,
  OPT_LE,
  OPT_LTLT,
  OPT_AREF,
  OPT_ASET,
  OPT_LENGTH,
  OPT_SUCC,
  OPT_REGEXPMATCH1,
  OPT_REGEXPMATCH2,
  OPT_CALL_NATIVE_COMPILED,
  BITBLT,
  ANSWER,
  GETLOCAL_OP_2,
  GETLOCAL_OP_3,
  GETLOCAL_OP_4,
  SETLOCAL_OP_2,
  SETLOCAL_OP_3,
  SETLOCAL_OP_4,
  GETDYNAMIC_OP__WC__0,
  GETDYNAMIC_OP_1_0,
  GETDYNAMIC_OP_2_0,
  GETDYNAMIC_OP_3_0,
  GETDYNAMIC_OP_4_0,
  ETDYNAMIC_OP__WC__0,
  SETDYNAMIC_OP_1_0,
  SETDYNAMIC_OP_2_0,
  SETDYNAMIC_OP_3_0,
  SETDYNAMIC_OP_4_0,
  UTOBJECT_OP_INT2FIX_O_0_C_,
  PUTOBJECT_OP_INT2FIX_O_1_C_,
  PUTOBJECT_OP_QTRUE,
  PUTOBJECT_OP_QFALSE,
  END_OP__WC___WC__QFALSE_0__WC_,
  SEND_OP__WC__0_QFALSE_0__WC_,
  SEND_OP__WC__1_QFALSE_0__WC_,
  SEND_OP__WC__2_QFALSE_0__WC_,
  SEND_OP__WC__3_QFALSE_0__WC_,
  SEND_OP__WC___WC__QFALSE_0X04__WC_,
  SEND_OP__WC__0_QFALSE_0X04__WC_,
  SEND_OP__WC__1_QFALSE_0X04__WC_,
  SEND_OP__WC__2_QFALSE_0X04__WC_,
  SEND_OP__WC__3_QFALSE_0X04__WC_,
  SEND_OP__WC__0_QFALSE_0X0C__WC_,
  UNIFIED_PUTOBJECT_PUTOBJECT,
  UNIFIED_PUTOBJECT_PUTSTRING,
  UNIFIED_PUTOBJECT_SETLOCAL,
  UNIFIED_PUTOBJECT_SETDYNAMIC,
  UNIFIED_PUTSTRING_PUTSTRING,
  UNIFIED_PUTSTRING_PUTOBJECT,
  UNIFIED_PUTSTRING_SETLOCAL, 
  UNIFIED_PUTSTRING_SETDYNAMIC,
  UNIFIED_DUP_SETLOCAL,
  UNIFIED_GETLOCAL_GETLOCAL, 
  UNIFIED_GETLOCAL_PUTOBJECT
} tr_inst_e;