#pragma once

#ifdef BINARY
#define PLAINTEXT_MODULUS 2
#define PLAINTEXT_MODULUS_MPZ "2"
#else 
#ifdef MPZ
#define PLAINTEXT_MODULUS 0
#define PLAINTEXT_MODULUS_MPZ "987543987543987543987543987543987543"
#else // ULONG
#define PLAINTEXT_MODULUS 28276
#define PLAINTEXT_MODULUS_MPZ "28276"
#endif
#endif

#define SECURITY_LEVEL 80
#define MULTIPLICATIVE_DEPTH 1
