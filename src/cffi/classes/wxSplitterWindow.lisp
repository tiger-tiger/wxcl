
;;;wxSplitterWindow.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxSplitterWindow_Create" wxSplitterWindow_Create) :pointer
  (_prt :pointer)
  (_id :int)
  (_lft :int)
  (_top :int)
  (_wdt :int)
  (_hgt :int)
  (_stl :int))

(cffi:defcfun ("wxSplitterWindow_GetWindow1" wxSplitterWindow_GetWindow1) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxSplitterWindow_GetWindow2" wxSplitterWindow_GetWindow2) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxSplitterWindow_SetSplitMode" wxSplitterWindow_SetSplitMode) :void
  (_obj :pointer)
  (mode :int))

(cffi:defcfun ("wxSplitterWindow_GetSplitMode" wxSplitterWindow_GetSplitMode) :int
  (_obj :pointer))

(cffi:defcfun ("wxSplitterWindow_Initialize" wxSplitterWindow_Initialize) :void
  (_obj :pointer)
  (window :pointer))

(cffi:defcfun ("wxSplitterWindow_SplitVertically" wxSplitterWindow_SplitVertically) :int
  (_obj :pointer)
  (window1 :pointer)
  (window2 :pointer)
  (sashPosition :int))

(cffi:defcfun ("wxSplitterWindow_SplitHorizontally" wxSplitterWindow_SplitHorizontally) :int
  (_obj :pointer)
  (window1 :pointer)
  (window2 :pointer)
  (sashPosition :int))

(cffi:defcfun ("wxSplitterWindow_Unsplit" wxSplitterWindow_Unsplit) :int
  (_obj :pointer)
  (toRemove :pointer))

(cffi:defcfun ("wxSplitterWindow_ReplaceWindow" wxSplitterWindow_ReplaceWindow) :int
  (_obj :pointer)
  (winOld :pointer)
  (winNew :pointer))

(cffi:defcfun ("wxSplitterWindow_IsSplit" wxSplitterWindow_IsSplit) :int
  (_obj :pointer))

(cffi:defcfun ("wxSplitterWindow_SetSashSize" wxSplitterWindow_SetSashSize) :void
  (_obj :pointer)
  (width :int))

(cffi:defcfun ("wxSplitterWindow_SetBorderSize" wxSplitterWindow_SetBorderSize) :void
  (_obj :pointer)
  (width :int))

(cffi:defcfun ("wxSplitterWindow_GetSashSize" wxSplitterWindow_GetSashSize) :int
  (_obj :pointer))

(cffi:defcfun ("wxSplitterWindow_GetSashGravity" wxSplitterWindow_GetSashGravity) :double
  (_obj :pointer))

(cffi:defcfun ("wxSplitterWindow_SetSashGravity" wxSplitterWindow_SetSashGravity) :void
  (_obj :pointer)
  (gravity :double))

(cffi:defcfun ("wxSplitterWindow_GetBorderSize" wxSplitterWindow_GetBorderSize) :int
  (_obj :pointer))

(cffi:defcfun ("wxSplitterWindow_SetSashPosition" wxSplitterWindow_SetSashPosition) :void
  (_obj :pointer)
  (position :int)
  (redraw :int))

(cffi:defcfun ("wxSplitterWindow_GetSashPosition" wxSplitterWindow_GetSashPosition) :int
  (_obj :pointer))

(cffi:defcfun ("wxSplitterWindow_SetMinimumPaneSize" wxSplitterWindow_SetMinimumPaneSize) :void
  (_obj :pointer)
  (min :int))

(cffi:defcfun ("wxSplitterWindow_GetMinimumPaneSize" wxSplitterWindow_GetMinimumPaneSize) :int
  (_obj :pointer))


