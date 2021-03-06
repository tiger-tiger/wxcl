(in-package :wxcl)

(defun make-mask (bmp)
  (make-wx-instance 'mask (wxMask_Create (cffi-object-pointer bmp))))

(defun make-mask-coloured (bmp colour)
  (make-wx-instance 'mask (wxMask_CreateColoured bmp colour)))
