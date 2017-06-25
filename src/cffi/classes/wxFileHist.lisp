
;;;wxFileHist.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxFileHistory_Create" wxFileHistory_Create) :pointer
  (maxFiles :int))

(cffi:defcfun ("wxFileHistory_Delete" wxFileHistory_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("wxFileHistory_AddFileToHistory" wxFileHistory_AddFileToHistory) :void
  (_obj :pointer)
  (file :pointer))

(cffi:defcfun ("wxFileHistory_RemoveFileFromHistory" wxFileHistory_RemoveFileFromHistory) :void
  (_obj :pointer)
  (i :int))

(cffi:defcfun ("wxFileHistory_GetMaxFiles" wxFileHistory_GetMaxFiles) :int
  (_obj :pointer))

(cffi:defcfun ("wxFileHistory_UseMenu" wxFileHistory_UseMenu) :void
  (_obj :pointer)
  (menu :pointer))

(cffi:defcfun ("wxFileHistory_RemoveMenu" wxFileHistory_RemoveMenu) :void
  (_obj :pointer)
  (menu :pointer))

(cffi:defcfun ("wxFileHistory_Load" wxFileHistory_Load) :void
  (_obj :pointer)
  (config :pointer))

(cffi:defcfun ("wxFileHistory_Save" wxFileHistory_Save) :void
  (_obj :pointer)
  (config :pointer))

(cffi:defcfun ("wxFileHistory_AddFilesToMenu" wxFileHistory_AddFilesToMenu) :void
  (_obj :pointer)
  (menu :pointer))

(cffi:defcfun ("wxFileHistory_GetHistoryFile" wxFileHistory_GetHistoryFile) :wxstring
  (_obj :pointer)
  (i :int))

(cffi:defcfun ("wxFileHistory_GetCount" wxFileHistory_GetCount) :int
  (_obj :pointer))

(cffi:defcfun ("wxFileHistory_GetNoHistoryFiles" wxFileHistory_GetNoHistoryFiles) :int
  (_obj :pointer))

(cffi:defcfun ("wxFileHistory_GetMenus" wxFileHistory_GetMenus) :int
  (_obj :pointer)
  (_ref :pointer))


