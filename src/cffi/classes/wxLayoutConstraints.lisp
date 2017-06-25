
;;;wxLayoutConstraints.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxLayoutConstraints_left" wxLayoutConstraints_left) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxLayoutConstraints_top" wxLayoutConstraints_top) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxLayoutConstraints_right" wxLayoutConstraints_right) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxLayoutConstraints_bottom" wxLayoutConstraints_bottom) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxLayoutConstraints_width" wxLayoutConstraints_width) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxLayoutConstraints_height" wxLayoutConstraints_height) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxLayoutConstraints_centreX" wxLayoutConstraints_centreX) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxLayoutConstraints_centreY" wxLayoutConstraints_centreY) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxLayoutConstraints_Create" wxLayoutConstraints_Create) :pointer)

(cffi:defcfun ("wxIndividualLayoutConstraint_Set" wxIndividualLayoutConstraint_Set) :void
  (_obj :pointer)
  (rel :int)
  (otherW :pointer)
  (otherE :int)
  (val :int)
  (marg :int))

(cffi:defcfun ("wxIndividualLayoutConstraint_LeftOf" wxIndividualLayoutConstraint_LeftOf) :void
  (_obj :pointer)
  (sibling :pointer)
  (marg :int))

(cffi:defcfun ("wxIndividualLayoutConstraint_RightOf" wxIndividualLayoutConstraint_RightOf) :void
  (_obj :pointer)
  (sibling :pointer)
  (marg :int))

(cffi:defcfun ("wxIndividualLayoutConstraint_Above" wxIndividualLayoutConstraint_Above) :void
  (_obj :pointer)
  (sibling :pointer)
  (marg :int))

(cffi:defcfun ("wxIndividualLayoutConstraint_Below" wxIndividualLayoutConstraint_Below) :void
  (_obj :pointer)
  (sibling :pointer)
  (marg :int))

(cffi:defcfun ("wxIndividualLayoutConstraint_SameAs" wxIndividualLayoutConstraint_SameAs) :void
  (_obj :pointer)
  (otherW :pointer)
  (edge :int)
  (marg :int))

(cffi:defcfun ("wxIndividualLayoutConstraint_PercentOf" wxIndividualLayoutConstraint_PercentOf) :void
  (_obj :pointer)
  (otherW :pointer)
  (wh :int)
  (per :int))

(cffi:defcfun ("wxIndividualLayoutConstraint_Absolute" wxIndividualLayoutConstraint_Absolute) :void
  (_obj :pointer)
  (val :int))

(cffi:defcfun ("wxIndividualLayoutConstraint_Unconstrained" wxIndividualLayoutConstraint_Unconstrained) :void
  (_obj :pointer))

(cffi:defcfun ("wxIndividualLayoutConstraint_AsIs" wxIndividualLayoutConstraint_AsIs) :void
  (_obj :pointer))

(cffi:defcfun ("wxIndividualLayoutConstraint_GetOtherWindow" wxIndividualLayoutConstraint_GetOtherWindow) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxIndividualLayoutConstraint_GetMyEdge" wxIndividualLayoutConstraint_GetMyEdge) :int
  (_obj :pointer))

(cffi:defcfun ("wxIndividualLayoutConstraint_SetEdge" wxIndividualLayoutConstraint_SetEdge) :void
  (_obj :pointer)
  (which :int))

(cffi:defcfun ("wxIndividualLayoutConstraint_SetValue" wxIndividualLayoutConstraint_SetValue) :void
  (_obj :pointer)
  (v :int))

(cffi:defcfun ("wxIndividualLayoutConstraint_GetMargin" wxIndividualLayoutConstraint_GetMargin) :int
  (_obj :pointer))

(cffi:defcfun ("wxIndividualLayoutConstraint_SetMargin" wxIndividualLayoutConstraint_SetMargin) :void
  (_obj :pointer)
  (m :int))

(cffi:defcfun ("wxIndividualLayoutConstraint_GetValue" wxIndividualLayoutConstraint_GetValue) :int
  (_obj :pointer))

(cffi:defcfun ("wxIndividualLayoutConstraint_GetPercent" wxIndividualLayoutConstraint_GetPercent) :int
  (_obj :pointer))

(cffi:defcfun ("wxIndividualLayoutConstraint_GetOtherEdge" wxIndividualLayoutConstraint_GetOtherEdge) :int
  (_obj :pointer))

(cffi:defcfun ("wxIndividualLayoutConstraint_GetDone" wxIndividualLayoutConstraint_GetDone) :int
  (_obj :pointer))

(cffi:defcfun ("wxIndividualLayoutConstraint_SetDone" wxIndividualLayoutConstraint_SetDone) :void
  (_obj :pointer)
  (d :int))

(cffi:defcfun ("wxIndividualLayoutConstraint_GetRelationship" wxIndividualLayoutConstraint_GetRelationship) :int
  (_obj :pointer))

(cffi:defcfun ("wxIndividualLayoutConstraint_SetRelationship" wxIndividualLayoutConstraint_SetRelationship) :void
  (_obj :pointer)
  (r :int))

(cffi:defcfun ("wxIndividualLayoutConstraint_ResetIfWin" wxIndividualLayoutConstraint_ResetIfWin) :int
  (_obj :pointer)
  (otherW :pointer))

(cffi:defcfun ("wxIndividualLayoutConstraint_SatisfyConstraint" wxIndividualLayoutConstraint_SatisfyConstraint) :int
  (_obj :pointer)
  (constraints :pointer)
  (win :pointer))

(cffi:defcfun ("wxIndividualLayoutConstraint_GetEdge" wxIndividualLayoutConstraint_GetEdge) :int
  (_obj :pointer)
  (which :int)
  (thisWin :pointer)
  (other :pointer))


