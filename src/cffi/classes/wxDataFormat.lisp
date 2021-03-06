
;;;wxDataFormat.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxDataFormat_CreateFromId" wxDataFormat_CreateFromId) :pointer
  (name :pointer))

(cffi:defcfun ("wxDataFormat_CreateFromType" wxDataFormat_CreateFromType) :pointer
  (typ :int))

(cffi:defcfun ("wxDataFormat_Delete" wxDataFormat_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("wxDataFormat_IsEqual" wxDataFormat_IsEqual) :int
  (_obj :pointer)
  (other :pointer))

(cffi:defcfun ("wxDataFormat_GetId" wxDataFormat_GetId) :wxstring
  (_obj :pointer)
  (_buf :pointer))

(cffi:defcfun ("wxDataFormat_GetType" wxDataFormat_GetType) :int
  (_obj :pointer))

(cffi:defcfun ("wxDataFormat_SetId" wxDataFormat_SetId) :void
  (_obj :pointer)
  (id :pointer))

(cffi:defcfun ("wxDataFormat_SetType" wxDataFormat_SetType) :void
  (_obj :pointer)
  (typ :int))


