
;;;wxConfigBase.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxConfigBase_Create" wxConfigBase_Create) :pointer)

(cffi:defcfun ("wxConfigBase_Delete" wxConfigBase_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("wxConfigBase_SetPath" wxConfigBase_SetPath) :void
  (_obj :pointer)
  (strPath :pointer))

(cffi:defcfun ("wxConfigBase_GetPath" wxConfigBase_GetPath) :wxstring
  (_obj :pointer))

(cffi:defcfun ("wxConfigBase_GetFirstGroup" wxConfigBase_GetFirstGroup) :wxstring
  (_obj :pointer)
  (lIndex :pointer))

(cffi:defcfun ("wxConfigBase_GetNextGroup" wxConfigBase_GetNextGroup) :wxstring
  (_obj :pointer)
  (lIndex :pointer))

(cffi:defcfun ("wxConfigBase_GetFirstEntry" wxConfigBase_GetFirstEntry) :wxstring
  (_obj :pointer)
  (lIndex :pointer))

(cffi:defcfun ("wxConfigBase_GetNextEntry" wxConfigBase_GetNextEntry) :wxstring
  (_obj :pointer)
  (lIndex :pointer))

(cffi:defcfun ("wxConfigBase_GetNumberOfEntries" wxConfigBase_GetNumberOfEntries) :int
  (_obj :pointer)
  (bRecursive :int))

(cffi:defcfun ("wxConfigBase_GetNumberOfGroups" wxConfigBase_GetNumberOfGroups) :int
  (_obj :pointer)
  (bRecursive :int))

(cffi:defcfun ("wxConfigBase_HasGroup" wxConfigBase_HasGroup) :int
  (_obj :pointer)
  (strName :pointer))

(cffi:defcfun ("wxConfigBase_HasEntry" wxConfigBase_HasEntry) :int
  (_obj :pointer)
  (strName :pointer))

(cffi:defcfun ("wxConfigBase_Exists" wxConfigBase_Exists) :int
  (_obj :pointer)
  (strName :pointer))

(cffi:defcfun ("wxConfigBase_GetEntryType" wxConfigBase_GetEntryType) :int
  (_obj :pointer)
  (name :pointer))

(cffi:defcfun ("wxConfigBase_ReadString" wxConfigBase_ReadString) :wxstring
  (_obj :pointer)
  (key :pointer)
  (defVal :pointer))

(cffi:defcfun ("wxConfigBase_ReadInteger" wxConfigBase_ReadInteger) :int
  (_obj :pointer)
  (key :pointer)
  (defVal :int))

(cffi:defcfun ("wxConfigBase_ReadDouble" wxConfigBase_ReadDouble) :double
  (_obj :pointer)
  (key :pointer)
  (defVal :double))

(cffi:defcfun ("wxConfigBase_ReadBool" wxConfigBase_ReadBool) :int
  (_obj :pointer)
  (key :pointer)
  (defVal :int))

(cffi:defcfun ("wxConfigBase_WriteString" wxConfigBase_WriteString) :int
  (_obj :pointer)
  (key :pointer)
  (value :pointer))

(cffi:defcfun ("wxConfigBase_WriteInteger" wxConfigBase_WriteInteger) :int
  (_obj :pointer)
  (key :pointer)
  (value :int))

(cffi:defcfun ("wxConfigBase_WriteDouble" wxConfigBase_WriteDouble) :int
  (_obj :pointer)
  (key :pointer)
  (value :double))

(cffi:defcfun ("wxConfigBase_WriteBool" wxConfigBase_WriteBool) :int
  (_obj :pointer)
  (key :pointer)
  (value :int))

(cffi:defcfun ("wxConfigBase_Flush" wxConfigBase_Flush) :int
  (_obj :pointer)
  (bCurrentOnly :int))

(cffi:defcfun ("wxConfigBase_RenameEntry" wxConfigBase_RenameEntry) :int
  (_obj :pointer)
  (oldName :pointer)
  (newName :pointer))

(cffi:defcfun ("wxConfigBase_RenameGroup" wxConfigBase_RenameGroup) :int
  (_obj :pointer)
  (oldName :pointer)
  (newName :pointer))

(cffi:defcfun ("wxConfigBase_DeleteEntry" wxConfigBase_DeleteEntry) :int
  (_obj :pointer)
  (key :pointer)
  (bDeleteGroupIfEmpty :int))

(cffi:defcfun ("wxConfigBase_DeleteGroup" wxConfigBase_DeleteGroup) :int
  (_obj :pointer)
  (key :pointer))

(cffi:defcfun ("wxConfigBase_DeleteAll" wxConfigBase_DeleteAll) :int
  (_obj :pointer))

(cffi:defcfun ("wxConfigBase_IsExpandingEnvVars" wxConfigBase_IsExpandingEnvVars) :int
  (_obj :pointer))

(cffi:defcfun ("wxConfigBase_SetExpandEnvVars" wxConfigBase_SetExpandEnvVars) :void
  (_obj :pointer)
  (bDoIt :int))

(cffi:defcfun ("wxConfigBase_SetRecordDefaults" wxConfigBase_SetRecordDefaults) :void
  (_obj :pointer)
  (bDoIt :int))

(cffi:defcfun ("wxConfigBase_IsRecordingDefaults" wxConfigBase_IsRecordingDefaults) :int
  (_obj :pointer))

(cffi:defcfun ("wxConfigBase_ExpandEnvVars" wxConfigBase_ExpandEnvVars) :wxstring
  (_obj :pointer)
  (str :pointer))

(cffi:defcfun ("wxConfigBase_GetAppName" wxConfigBase_GetAppName) :wxstring
  (_obj :pointer))

(cffi:defcfun ("wxConfigBase_GetVendorName" wxConfigBase_GetVendorName) :wxstring
  (_obj :pointer))

(cffi:defcfun ("wxConfigBase_SetAppName" wxConfigBase_SetAppName) :void
  (_obj :pointer)
  (appName :pointer))

(cffi:defcfun ("wxConfigBase_SetVendorName" wxConfigBase_SetVendorName) :void
  (_obj :pointer)
  (vendorName :pointer))

(cffi:defcfun ("wxConfigBase_SetStyle" wxConfigBase_SetStyle) :void
  (_obj :pointer)
  (style :int))

(cffi:defcfun ("wxConfigBase_GetStyle" wxConfigBase_GetStyle) :int
  (_obj :pointer))


