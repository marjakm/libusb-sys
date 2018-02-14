extern crate pkg_config;
extern crate cc;

fn main() {
    let libusb = pkg_config::probe_library("libusb-1.0").unwrap();
    let mut builder = cc::Build::new();
    for inc in libusb.include_paths.iter() {
        builder.include(inc);
    }
    builder.file("shim.c").compile("shim");
}
