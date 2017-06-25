
;;;wxGLCanvas.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxGLCanvas_Create" wxGLCanvas_Create) :pointer
  (parent :pointer)
  (windowID :int)
  (x :int)
  (y :int)
  (w :int)
  (h :int)
  (style :int)
  (title :wxstring)
  (attributes :pointer)
  (palette :pointer))

(cffi:defcfun ("wxGLCanvas_CreateShared" wxGLCanvas_CreateShared) :pointer
  (parent :pointer)
  (sharedCanvas :pointer)
  (windowID :int)
  (x :int)
  (y :int)
  (w :int)
  (h :int)
  (style :int)
  (title :wxstring)
  (attributes :pointer)
  (palette :pointer))

(cffi:defcfun ("wxGLCanvas_SetCurrent" wxGLCanvas_SetCurrent) :void
  (self :pointer))

(cffi:defcfun ("wxGLCanvas_SetColour" wxGLCanvas_SetColour) :void
  (self :pointer)
  (colour :pointer))

(cffi:defcfun ("wxGLCanvas_SwapBuffers" wxGLCanvas_SwapBuffers) :void
  (self :pointer))


