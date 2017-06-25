
;;;wxLocale.lisp
;;;License  : wxWindows License 3.1
;;;Author(s) : Surendra Singhi (surendra@asu.edu) 
;;;Copyright (C) 2005 Surendra Singhi 
;;;See the file LICENSE for information on usage and redistribution.
;;;
;;; $Header$
;;;

(in-package :wxcl)




(cffi:defcfun ("wxLocale_Create" wxLocale_Create) :pointer
  (_lang :int)
  (_flags :int))

(cffi:defcfun ("wxLocale_Delete" wxLocale_Delete) :void
  (_obj :pointer))

(cffi:defcfun ("wxLocale_IsOk" wxLocale_IsOk) :int
  (_obj :pointer))

(cffi:defcfun ("wxLocale_GetLocale" wxLocale_GetLocale) :pointer
  (_obj :pointer))

(cffi:defcfun ("wxLocale_AddCatalogLookupPathPrefix" wxLocale_AddCatalogLookupPathPrefix) :void
  (_obj :pointer)
  (prefix :pointer))

(cffi:defcfun ("wxLocale_AddCatalog" wxLocale_AddCatalog) :int
  (_obj :pointer)
  (szDomain :pointer))

(cffi:defcfun ("wxLocale_IsLoaded" wxLocale_IsLoaded) :int
  (_obj :pointer)
  (szDomain :pointer))

(cffi:defcfun ("wxLocale_GetString" wxLocale_GetString) :pointer
  (_obj :pointer)
  (szOrigString :pointer)
  (szDomain :pointer))

(cffi:defcfun ("wxLocale_GetName" wxLocale_GetName) :int
  (_obj :pointer)
  (_ref :pointer))

(cffi:defcfun ("wxGetELJLocale" wxGetELJLocale) :pointer)

(cffi:defcfun ("wxGetELJTranslation" wxGetELJTranslation) :pointer
  (sz :pointer))


