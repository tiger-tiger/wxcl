
;;;wxDCSVG.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxSVGFileDC_Create" wxSVGFileDC_Create) :pointer
  (a_filename :pointer))

(cffi:defcfun ("wxSVGFileDC_CreateWithSize" wxSVGFileDC_CreateWithSize) :pointer
  (a_filename :pointer)
  (a_width :int)
  (a_height :int))

(cffi:defcfun ("wxSVGFileDC_CreateWithSizeAndResolution" wxSVGFileDC_CreateWithSizeAndResolution) :pointer
  (a_filename :pointer)
  (a_width :int)
  (a_height :int)
  (a_dpi :float))

(cffi:defcfun ("wxSVGFileDC_Delete" wxSVGFileDC_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("wxSVGFileDC_ComputeScaleAndOrigin" wxSVGFileDC_ComputeScaleAndOrigin) :void
  (_obj :pointer))


