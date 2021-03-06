
;;;wxImageList.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxImageList_Create" wxImageList_Create) :pointer
  (width :int)
  (height :int)
  (mask :int)
  (initialCount :int))

(cffi:defcfun ("wxImageList_Delete" wxImageList_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("wxImageList_GetImageCount" wxImageList_GetImageCount) :int
  (_obj :pointer))

(cffi:defcfun ("wxImageList_GetSize" wxImageList_GetSize) :void
  (_obj :pointer)
  (index :int)
  (width :pointer)
  (height :pointer))

(cffi:defcfun ("wxImageList_AddBitmap" wxImageList_AddBitmap) :int
  (_obj :pointer)
  (bitmap :pointer)
  (mask :pointer))

(cffi:defcfun ("wxImageList_AddMasked" wxImageList_AddMasked) :int
  (_obj :pointer)
  (bitmap :pointer)
  (maskColour :pointer))

(cffi:defcfun ("wxImageList_AddIcon" wxImageList_AddIcon) :int
  (_obj :pointer)
  (icon :pointer))

(cffi:defcfun ("wxImageList_Replace" wxImageList_Replace) :int
  (_obj :pointer)
  (index :int)
  (bitmap :pointer)
  (mask :pointer))

(cffi:defcfun ("wxImageList_ReplaceIcon" wxImageList_ReplaceIcon) :int
  (_obj :pointer)
  (index :int)
  (icon :pointer))

(cffi:defcfun ("wxImageList_Remove" wxImageList_Remove) :int
  (_obj :pointer)
  (index :int))

(cffi:defcfun ("wxImageList_RemoveAll" wxImageList_RemoveAll) :int
  (_obj :pointer))

(cffi:defcfun ("wxImageList_Draw" wxImageList_Draw) :int
  (_obj :pointer)
  (index :int)
  (dc :pointer)
  (x :int)
  (y :int)
  (flags :int)
  (solidBackground :int))


