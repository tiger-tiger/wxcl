
;;;wxClipboard.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxClipboard_Create" wxClipboard_Create) :pointer)

(cffi:defcfun ("wxClipboard_Delete" wxClipboard_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("wxClipboard_Open" wxClipboard_Open) :int
  (_obj :pointer))

(cffi:defcfun ("wxClipboard_Close" wxClipboard_Close) :void
  (_obj :pointer))

(cffi:defcfun ("wxClipboard_IsOpened" wxClipboard_IsOpened) :int
  (_obj :pointer))

(cffi:defcfun ("wxClipboard_SetData" wxClipboard_SetData) :int
  (_obj :pointer)
  (data :pointer))

(cffi:defcfun ("wxClipboard_AddData" wxClipboard_AddData) :int
  (_obj :pointer)
  (data :pointer))

(cffi:defcfun ("wxClipboard_IsSupported" wxClipboard_IsSupported) :int
  (_obj :pointer)
  (format :pointer))

(cffi:defcfun ("wxClipboard_GetData" wxClipboard_GetData) :int
  (_obj :pointer)
  (data :pointer))

(cffi:defcfun ("wxClipboard_Clear" wxClipboard_Clear) :void
  (_obj :pointer))

(cffi:defcfun ("wxClipboard_Flush" wxClipboard_Flush) :int
  (_obj :pointer))

(cffi:defcfun ("wxClipboard_UsePrimarySelection" wxClipboard_UsePrimarySelection) :void
  (_obj :pointer)
  (primary :int))


