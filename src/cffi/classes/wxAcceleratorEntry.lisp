
;;;wxAcceleratorEntry.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxAcceleratorEntry_Create" wxAcceleratorEntry_Create) :pointer
  (flags :int)
  (keyCode :int)
  (cmd :int))

(cffi:defcfun ("wxAcceleratorEntry_Delete" wxAcceleratorEntry_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("wxAcceleratorEntry_Set" wxAcceleratorEntry_Set) :void
  (_obj :pointer)
  (flags :int)
  (keyCode :int)
  (cmd :int))

(cffi:defcfun ("wxAcceleratorEntry_GetFlags" wxAcceleratorEntry_GetFlags) :int
  (_obj :pointer))

(cffi:defcfun ("wxAcceleratorEntry_GetKeyCode" wxAcceleratorEntry_GetKeyCode) :int
  (_obj :pointer))

(cffi:defcfun ("wxAcceleratorEntry_GetCommand" wxAcceleratorEntry_GetCommand) :int
  (_obj :pointer))

(cffi:defcfun ("wxAcceleratorTable_Create" wxAcceleratorTable_Create) :pointer
  (n :int)
  (entries :pointer))

(cffi:defcfun ("wxAcceleratorTable_Delete" wxAcceleratorTable_Delete) :void
  (_obj :pointer))


