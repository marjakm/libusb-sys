#include "libusb.h"


void LIBUSB_CALL _libusb_fill_control_setup(unsigned char *buffer, uint8_t bmRequestType, uint8_t bRequest, uint16_t wValue, uint16_t wIndex, uint16_t wLength) {
    return libusb_fill_control_setup(buffer, bmRequestType, bRequest, wValue, wIndex, wLength);
}

void LIBUSB_CALL _libusb_fill_control_transfer(struct libusb_transfer *transfer, libusb_device_handle *dev_handle, unsigned char *buffer, libusb_transfer_cb_fn callback, void *user_data, unsigned int timeout) {
    return libusb_fill_control_transfer(transfer, dev_handle, buffer, callback, user_data, timeout);
}


void LIBUSB_CALL _libusb_fill_bulk_transfer(struct libusb_transfer *transfer, libusb_device_handle *dev_handle, unsigned char endpoint, unsigned char *buffer, int length, libusb_transfer_cb_fn callback, void *user_data, unsigned int timeout) {
    return libusb_fill_bulk_transfer(transfer, dev_handle, endpoint, buffer, length, callback, user_data, timeout);
}


void LIBUSB_CALL _libusb_fill_bulk_stream_transfer(struct libusb_transfer *transfer, libusb_device_handle *dev_handle, unsigned char endpoint, uint32_t stream_id, unsigned char *buffer, int length, libusb_transfer_cb_fn callback, void *user_data, unsigned int timeout) {
    return libusb_fill_bulk_stream_transfer(transfer, dev_handle, endpoint, stream_id, buffer, length, callback, user_data, timeout);
}


void LIBUSB_CALL _libusb_fill_interrupt_transfer(struct libusb_transfer *transfer, libusb_device_handle *dev_handle, unsigned char endpoint, unsigned char *buffer, int length, libusb_transfer_cb_fn callback, void *user_data, unsigned int timeout) {
    return libusb_fill_interrupt_transfer(transfer, dev_handle, endpoint, buffer, length, callback, user_data, timeout);
}


void LIBUSB_CALL _libusb_fill_iso_transfer(struct libusb_transfer *transfer, libusb_device_handle *dev_handle, unsigned char endpoint, unsigned char *buffer, int length, int num_iso_packets, libusb_transfer_cb_fn callback, void *user_data, unsigned int timeout) {
    return libusb_fill_iso_transfer(transfer, dev_handle, endpoint, buffer, length, num_iso_packets, callback, user_data, timeout);
}
