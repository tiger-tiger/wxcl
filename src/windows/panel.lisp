(in-package :wxcl)

(defconstant +tab-traversal+ 524288)

(defun make-panel (parent &key (id -1) (position +default-position+) (size +default-size+) (style +tab-traversal+))
  (make-wx-instance 'panel (wxPanel_Create (object-pointer parent) id
					   (point-x position) (point-y position)
					   (size-width size) (size-height size) style)))

(defmethod init-dialog ((obj panel))
  (wxPanel_InitDialog (object-pointer obj)))

(defmethod default-item ((obj panel))
  (make-wx-instance 'window (wxPanel_GetDefaultItem (object-pointer obj))))

(defmethod (setf default-item) (btn (obj panel))
  (wxPanel_SetDefaultItem (object-pointer btn) (object-pointer obj)))
