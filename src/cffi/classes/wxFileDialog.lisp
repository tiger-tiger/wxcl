
;;;wxFileDialog.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxFileDialog_Create" wxFileDialog_Create) :pointer
  (_prt :pointer)
  (_msg :pointer)
  (_dir :pointer)
  (_fle :pointer)
  (_wcd :pointer)
  (_lft :int)
  (_top :int)
  (_stl :int))

(cffi:defcfun ("wxFileDialog_SetMessage" wxFileDialog_SetMessage) :void
  (_obj :pointer)
  (message :pointer))

(cffi:defcfun ("wxFileDialog_SetPath" wxFileDialog_SetPath) :void
  (_obj :pointer)
  (path :pointer))

(cffi:defcfun ("wxFileDialog_SetDirectory" wxFileDialog_SetDirectory) :void
  (_obj :pointer)
  (dir :pointer))

(cffi:defcfun ("wxFileDialog_SetFilename" wxFileDialog_SetFilename) :void
  (_obj :pointer)
  (name :pointer))

(cffi:defcfun ("wxFileDialog_SetWildcard" wxFileDialog_SetWildcard) :void
  (_obj :pointer)
  (wildCard :pointer))

(cffi:defcfun ("wxFileDialog_SetStyle" wxFileDialog_SetStyle) :void
  (_obj :pointer)
  (style :int))

(cffi:defcfun ("wxFileDialog_SetFilterIndex" wxFileDialog_SetFilterIndex) :void
  (_obj :pointer)
  (filterIndex :int))

(cffi:defcfun ("wxFileDialog_GetMessage" wxFileDialog_GetMessage) :wxstring
  (_obj :pointer))

(cffi:defcfun ("wxFileDialog_GetPath" wxFileDialog_GetPath) :wxstring
  (_obj :pointer))

(cffi:defcfun ("wxFileDialog_GetPaths" wxFileDialog_GetPaths) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxFileDialog_GetDirectory" wxFileDialog_GetDirectory) :wxstring
  (_obj :pointer))

(cffi:defcfun ("wxFileDialog_GetFilename" wxFileDialog_GetFilename) :wxstring
  (_obj :pointer))

(cffi:defcfun ("wxFileDialog_GetFilenames" wxFileDialog_GetFilenames) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxFileDialog_GetWildcard" wxFileDialog_GetWildcard) :wxstring
  (_obj :pointer))

(cffi:defcfun ("wxFileDialog_GetStyle" wxFileDialog_GetStyle) :int
  (_obj :pointer))

(cffi:defcfun ("wxFileDialog_GetFilterIndex" wxFileDialog_GetFilterIndex) :int
  (_obj :pointer))


