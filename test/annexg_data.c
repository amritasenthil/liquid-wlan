
//
// test data from IEEE 802.11a specification, Annex G
// 

// Table G.1: initial 100 octets
unsigned char msg_org[100] = {
    0x04, 0x02, 0x00, 0x2e, 0x00, 
    0x60, 0x08, 0xcd, 0x37, 0xa6, 
    0x00, 0x20, 0xd6, 0x01, 0x3c, 
    0xf1, 0x00, 0x60, 0x08, 0xad, 
    0x3b, 0xaf, 0x00, 0x00, 0x4a, 
    0x6f, 0x79, 0x2c, 0x20, 0x62, 
    0x72, 0x69, 0x67, 0x68, 0x74, 
    0x20, 0x73, 0x70, 0x61, 0x72, 
    0x6b, 0x20, 0x6f, 0x66, 0x20, 
    0x64, 0x69, 0x76, 0x69, 0x6e, 
    0x69, 0x74, 0x79, 0x2c, 0x0a, 
    0x44, 0x61, 0x75, 0x67, 0x68, 
    0x74, 0x65, 0x72, 0x20, 0x6f, 
    0x66, 0x20, 0x45, 0x6c, 0x79, 
    0x73, 0x69, 0x75, 0x6d, 0x2c, 
    0x0a, 0x46, 0x69, 0x72, 0x65, 
    0x2d, 0x69, 0x6e, 0x73, 0x69, 
    0x72, 0x65, 0x64, 0x20, 0x77, 
    0x65, 0x20, 0x74, 0x72, 0x65, 
    0x61, 0xda, 0x57, 0x99, 0xed};

// Table G.13: first 144 data bits
unsigned char msg_org144[18] = {    
    0x00, 0x00, 0x20, 0x40, 0x00,
    0x74, 0x00, 0x06, 0x10, 0xb3,
    0xec, 0x65, 0x00, 0x04, 0x6b,
    0x80, 0x3c, 0x8f};

// Table G.14: last 144 data bits
unsigned char msg_org_last[18] = {
    0x04, 0xee, 0xa6, 0x04, 0x2e,
    0x4e, 0xa6, 0x86, 0x5b, 0xea,
    0x99, 0xb7, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00};

// Table G.16: first 144 data bits, scrambled
unsigned char msg_scrambled_test[18] = {    
    0x6c, 0x19, 0x89, 0x8f, 0x68,
    0x21, 0xf4, 0xa5, 0x61, 0x4f,
    0xd7, 0xae, 0x24, 0x0c, 0xf3,
    0x3a, 0xe4, 0xbc};

// Table G.17: last 144 data bits, scrambled
unsigned char msg_scrambled_last[18] = {
    0x7d, 0x8a, 0x27, 0x17, 0x39,
    0x15, 0xa0, 0xec, 0x28, 0x30,
    0x8c, 0xca, 0x00, 0xdc, 0x7f,
    0x0e, 0xf2, 0xc9};

// Table G.18: coded bits of first DATA symbol
unsigned char msg_org[24] = {
    0x2b, 0x08, 0xa1, 0xf0,
    0x9d, 0xb5, 0x9a, 0x1d,
    0x4a, 0xfb, 0xe8, 0xc2,
    0x8f, 0xc0, 0xc8, 0x73,
    0xc0, 0x43, 0xe0, 0x19,
    0xe0, 0xd3, 0xeb, 0xb2};

// Table G.21: interleaved bits of first DATA symbol
unsigned char msg_test[24] = {
    0x77, 0xf0, 0xef, 0xc4,
    0x73, 0x00, 0xbf, 0x11,
    0x10, 0x9a, 0x1d, 0x12,
    0x6e, 0x38, 0xf5, 0x69,
    0x1b, 0x6b, 0x98, 0x43,
    0x00, 0x0d, 0xb3, 0x6d};
