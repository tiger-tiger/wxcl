
;;;wxFindReplaceDialog.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxFindReplaceData_CreateDefault" wxFindReplaceData_CreateDefault) :pointer)

(cffi:defcfun ("wxFindReplaceData_Create" wxFindReplaceData_Create) :pointer
  (flags :int))

(cffi:defcfun ("wxFindReplaceData_Delete" wxFindReplaceData_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("wxFindReplaceData_GetFindString" wxFindReplaceData_GetFindString) :wxstring
  (_obj :pointer))

(cffi:defcfun ("wxFindReplaceData_GetReplaceString" wxFindReplaceData_GetReplaceString) :wxstring
  (_obj :pointer))

(cffi:defcfun ("wxFindReplaceData_GetFlags" wxFindReplaceData_GetFlags) :int
  (_obj :pointer))

(cffi:defcfun ("wxFindReplaceData_SetFlags" wxFindReplaceData_SetFlags) :void
  (_obj :pointer)
  (flags :int))

(cffi:defcfun ("wxFindReplaceData_SetFindString" wxFindReplaceData_SetFindString) :void
  (_obj :pointer)
  (str :pointer))

(cffi:defcfun ("wxFindReplaceData_SetReplaceString" wxFindReplaceData_SetReplaceString) :void
  (_obj :pointer)
  (str :pointer))

(cffi:defcfun ("wxFindDialogEvent_GetFlags" wxFindDialogEvent_GetFlags) :int
  (_obj :pointer))

(cffi:defcfun ("wxFindDialogEvent_GetFindString" wxFindDialogEvent_GetFindString) :wxstring
  (_obj :pointer))

(cffi:defcfun ("wxFindDialogEvent_GetReplaceString" wxFindDialogEvent_GetReplaceString) :wxstring
  (_obj :pointer))

(cffi:defcfun ("wxFindReplaceDialog_Create" wxFindReplaceDialog_Create) :pointer
  (parent :pointer)
  (data :pointer)
  (title :pointer)
  (style :int))

(cffi:defcfun ("wxFindReplaceDialog_GetData" wxFindReplaceDialog_GetData) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxFindReplaceDialog_SetData" wxFindReplaceDialog_SetData) :void
  (_obj :pointer)
  (data :pointer))

(cffi:defcfun ("expEVT_COMMAND_FIND" expEVT_COMMAND_FIND) :int)

(cffi:defcfun ("expEVT_COMMAND_FIND_NEXT" expEVT_COMMAND_FIND_NEXT) :int)

(cffi:defcfun ("expEVT_COMMAND_FIND_REPLACE" expEVT_COMMAND_FIND_REPLACE) :int)

(cffi:defcfun ("expEVT_COMMAND_FIND_REPLACE_ALL" expEVT_COMMAND_FIND_REPLACE_ALL) :int)

(cffi:defcfun ("expEVT_COMMAND_FIND_CLOSE" expEVT_COMMAND_FIND_CLOSE) :int)


