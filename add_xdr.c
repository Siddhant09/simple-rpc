/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "add.h"

bool_t
xdr_list (XDR *xdrs, list *objp)
{
	register int32_t *buf;

	int i;
	 if (!xdr_vector (xdrs, (char *)objp->item1, 20,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->item2, 20,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->item3, 20,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->item4, 20,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->item5, 20,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	 if (!xdr_vector (xdrs, (char *)objp->item6, 20,
		sizeof (char), (xdrproc_t) xdr_char))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_matrix (XDR *xdrs, matrix *objp)
{
	register int32_t *buf;


	if (xdrs->x_op == XDR_ENCODE) {
		buf = XDR_INLINE (xdrs, 4 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_int (xdrs, &objp->a))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->b))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->c))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->d))
				 return FALSE;
		} else {
			IXDR_PUT_LONG(buf, objp->a);
			IXDR_PUT_LONG(buf, objp->b);
			IXDR_PUT_LONG(buf, objp->c);
			IXDR_PUT_LONG(buf, objp->d);
		}
		return TRUE;
	} else if (xdrs->x_op == XDR_DECODE) {
		buf = XDR_INLINE (xdrs, 4 * BYTES_PER_XDR_UNIT);
		if (buf == NULL) {
			 if (!xdr_int (xdrs, &objp->a))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->b))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->c))
				 return FALSE;
			 if (!xdr_int (xdrs, &objp->d))
				 return FALSE;
		} else {
			objp->a = IXDR_GET_LONG(buf);
			objp->b = IXDR_GET_LONG(buf);
			objp->c = IXDR_GET_LONG(buf);
			objp->d = IXDR_GET_LONG(buf);
		}
	 return TRUE;
	}

	 if (!xdr_int (xdrs, &objp->a))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->b))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->c))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->d))
		 return FALSE;
	return TRUE;
}