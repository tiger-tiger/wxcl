
;;;wxBitmap.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcvar ("wxNull_Bitmap" wxNull_Bitmap)
 :pointer)

(cffi:defcfun ("wxBitmap_Create" wxBitmap_Create) :pointer
  (_data :pointer)
  (_type :int)
  (_width :int)
  (_height :int)
  (_depth :int))

(cffi:defcfun ("wxBitmap_CreateFromXPM" wxBitmap_CreateFromXPM) :pointer
  (_data :pointer))

(cffi:defcfun ("wxBitmap_CreateEmpty" wxBitmap_CreateEmpty) :pointer
  (_width :int)
  (_height :int)
  (_depth :int))

(cffi:defcfun ("wxBitmap_CreateLoad" wxBitmap_CreateLoad) :pointer
  (name :string)
  (type :int))

(cffi:defcfun ("wxBitmap_CreateDefault" wxBitmap_CreateDefault) :pointer)

(cffi:defcfun ("wxBitmap_Delete" wxBitmap_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("wxBitmap_GetSubBitmap" wxBitmap_GetSubBitmap) :pointer
  (_obj :pointer)
  (x :int)
  (y :int)
  (w :int)
  (h :int))

(cffi:defcfun ("wxBitmap_LoadFile" wxBitmap_LoadFile) :int
  (_obj :pointer)
  (name :string)
  (type :int))

(cffi:defcfun ("wxBitmap_SaveFile" wxBitmap_SaveFile) :int
  (_obj :pointer)
  (name :string)
  (type :int)
  (cmap :pointer))

(cffi:defcfun ("wxBitmap_GetMask" wxBitmap_GetMask) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxBitmap_SetMask" wxBitmap_SetMask) :void
  (_obj :pointer)
  (mask :pointer))

(cffi:defcfun ("wxBitmap_AddHandler" wxBitmap_AddHandler) :void
  (handler :pointer))

(cffi:defcfun ("wxBitmap_InsertHandler" wxBitmap_InsertHandler) :void
  (handler :pointer))

(cffi:defcfun ("wxBitmap_RemoveHandler" wxBitmap_RemoveHandler) :int
  (name :string))

(cffi:defcfun ("wxBitmap_FindHandlerByName" wxBitmap_FindHandlerByName) :pointer
  (name :string))

(cffi:defcfun ("wxBitmap_FindHandlerByExtension" wxBitmap_FindHandlerByExtension) :pointer
  (extension :string)
  (type :long))

(cffi:defcfun ("wxBitmap_FindHandlerByType" wxBitmap_FindHandlerByType) :pointer
  (type :long))

(cffi:defcfun ("wxBitmap_InitStandardHandlers" wxBitmap_InitStandardHandlers) :void)

(cffi:defcfun ("wxBitmap_CleanUpHandlers" wxBitmap_CleanUpHandlers) :void)

(cffi:defcfun ("wxBitmap_Ok" wxBitmap_Ok) :int
  (_obj :pointer))

(cffi:defcfun ("wxBitmap_GetWidth" wxBitmap_GetWidth) :int
  (_obj :pointer))

(cffi:defcfun ("wxBitmap_GetHeight" wxBitmap_GetHeight) :int
  (_obj :pointer))

(cffi:defcfun ("wxBitmap_GetDepth" wxBitmap_GetDepth) :int
  (_obj :pointer))

(cffi:defcfun ("wxBitmap_SetWidth" wxBitmap_SetWidth) :void
  (_obj :pointer)
  (w :int))

(cffi:defcfun ("wxBitmap_SetHeight" wxBitmap_SetHeight) :void
  (_obj :pointer)
  (h :int))

(cffi:defcfun ("wxBitmap_SetDepth" wxBitmap_SetDepth) :void
  (_obj :pointer)
  (d :int))

(cffi:defcfun ("wxStaticBitmap_Create" wxStaticBitmap_Create) :pointer
  (_prt :pointer)
  (_id :int)
  (bitmap :pointer)
  (_lft :int)
  (_top :int)
  (_wdt :int)
  (_hgt :int)
  (_stl :int))

(cffi:defcfun ("wxStaticBitmap_SetIcon" wxStaticBitmap_SetIcon) :void
  (_obj :pointer)
  (icon :pointer))

(cffi:defcfun ("wxStaticBitmap_SetBitmap" wxStaticBitmap_SetBitmap) :void
  (_obj :pointer)
  (bitmap :pointer))

(cffi:defcfun ("wxStaticBitmap_GetIcon" wxStaticBitmap_GetIcon) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxStaticBitmap_GetBitmap" wxStaticBitmap_GetBitmap) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxStaticBitmap_Delete" wxStaticBitmap_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("wxBitmap_CreateFromImage" wxBitmap_CreateFromImage) :pointer
  (image :pointer)
  (depth :int))


