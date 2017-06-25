
;;;wxMime.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxMimeTypesManager_Create" wxMimeTypesManager_Create) :pointer)

(cffi:defcfun ("wxMimeTypesManager_GetFileTypeFromExtension" wxMimeTypesManager_GetFileTypeFromExtension) :pointer
  (_obj :pointer)
  (_ext :pointer))

(cffi:defcfun ("wxMimeTypesManager_GetFileTypeFromMimeType" wxMimeTypesManager_GetFileTypeFromMimeType) :pointer
  (_obj :pointer)
  (_name :pointer))

(cffi:defcfun ("wxMimeTypesManager_ReadMailcap" wxMimeTypesManager_ReadMailcap) :int
  (_obj :pointer)
  (_file :pointer)
  (_fb :int))

(cffi:defcfun ("wxMimeTypesManager_ReadMimeTypes" wxMimeTypesManager_ReadMimeTypes) :int
  (_obj :pointer)
  (_file :pointer))

(cffi:defcfun ("wxMimeTypesManager_EnumAllFileTypes" wxMimeTypesManager_EnumAllFileTypes) :int
  (_obj :pointer)
  (_lst :pointer))

(cffi:defcfun ("wxMimeTypesManager_AddFallbacks" wxMimeTypesManager_AddFallbacks) :void
  (_obj :pointer)
  (_types :pointer))

(cffi:defcfun ("wxMimeTypesManager_IsOfType" wxMimeTypesManager_IsOfType) :int
  (_obj :pointer)
  (_type :pointer)
  (_wildcard :pointer))

(cffi:defcfun ("wxFileType_GetMimeType" wxFileType_GetMimeType) :int
  (_obj :pointer)
  (_buf :pointer))

(cffi:defcfun ("wxFileType_GetMimeTypes" wxFileType_GetMimeTypes) :int
  (_obj :pointer)
  (_lst :pointer))

(cffi:defcfun ("wxFileType_GetExtensions" wxFileType_GetExtensions) :int
  (_obj :pointer)
  (_lst :pointer))

(cffi:defcfun ("wxFileType_GetIcon" wxFileType_GetIcon) :int
  (_obj :pointer)
  (icon :pointer))

(cffi:defcfun ("wxFileType_GetDescription" wxFileType_GetDescription) :int
  (_obj :pointer)
  (_buf :pointer))

(cffi:defcfun ("wxFileType_GetOpenCommand" wxFileType_GetOpenCommand) :int
  (_obj :pointer)
  (_buf :pointer)
  (_params :pointer))

(cffi:defcfun ("wxFileType_GetPrintCommand" wxFileType_GetPrintCommand) :int
  (_obj :pointer)
  (_buf :pointer)
  (_params :pointer))

(cffi:defcfun ("wxFileType_ExpandCommand" wxFileType_ExpandCommand) :int
  (_obj :pointer)
  (_cmd :pointer)
  (_params :pointer)
  (_buf :pointer))

(cffi:defcfun ("wxFileType_Delete" wxFileType_Delete) :void
  (_obj :pointer))


