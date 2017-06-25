
;;;wxIcon.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxIcon_CreateDefault" wxIcon_CreateDefault) :pointer)

(cffi:defcfun ("wxIcon_Delete" wxIcon_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("wxIcon_FromRaw" wxIcon_FromRaw) :pointer
  (data :pointer)
  (width :int)
  (height :int))

(cffi:defcfun ("wxIcon_FromXPM" wxIcon_FromXPM) :pointer
  (data :pointer))

(cffi:defcfun ("wxIcon_CreateLoad" wxIcon_CreateLoad) :pointer
  (name :string)
  (type :long)
  (width :int)
  (height :int))

(cffi:defcfun ("wxIcon_Load" wxIcon_Load) :int
  (_obj :pointer)
  (name :string)
  (type :long)
  (width :int)
  (height :int))

(cffi:defcfun ("wxIcon_CopyFromBitmap" wxIcon_CopyFromBitmap) :void
  (_obj :pointer)
  (bmp :pointer))

(cffi:defcfun ("wxIcon_Ok" wxIcon_Ok) :int
  (_obj :pointer))

(cffi:defcfun ("wxIcon_GetDepth" wxIcon_GetDepth) :int
  (_obj :pointer))

(cffi:defcfun ("wxIcon_GetWidth" wxIcon_GetWidth) :int
  (_obj :pointer))

(cffi:defcfun ("wxIcon_GetHeight" wxIcon_GetHeight) :int
  (_obj :pointer))

(cffi:defcfun ("wxIcon_Assign" wxIcon_Assign) :void
  (_obj :pointer)
  (other :pointer))

(cffi:defcfun ("wxIcon_IsEqual" wxIcon_IsEqual) :int
  (_obj :pointer)
  (other :pointer))


