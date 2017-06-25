
;;;wxDirDialog.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxDirDialog_Create" wxDirDialog_Create) :pointer
  (_prt :pointer)
  (_msg :pointer)
  (_dir :pointer)
  (_lft :int)
  (_top :int)
  (_stl :int))

(cffi:defcfun ("wxDirDialog_SetMessage" wxDirDialog_SetMessage) :void
  (_obj :pointer)
  (msg :pointer))

(cffi:defcfun ("wxDirDialog_SetPath" wxDirDialog_SetPath) :void
  (_obj :pointer)
  (pth :pointer))

(cffi:defcfun ("wxDirDialog_SetStyle" wxDirDialog_SetStyle) :void
  (_obj :pointer)
  (style :int))

(cffi:defcfun ("wxDirDialog_GetMessage" wxDirDialog_GetMessage) :wxstring
  (_obj :pointer))

(cffi:defcfun ("wxDirDialog_GetPath" wxDirDialog_GetPath) :wxstring
  (_obj :pointer))

(cffi:defcfun ("wxDirDialog_GetStyle" wxDirDialog_GetStyle) :int
  (_obj :pointer))


