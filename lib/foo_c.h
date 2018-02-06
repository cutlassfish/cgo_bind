#ifndef FOO_CIF_H
#define FOO_CIF_H

#include <stdint.h>
#include "pair.h"

typedef uint64_t FOO;

#ifdef __cplusplus
extern "C" {
#endif

FOO Foo_construct();
void Foo_destruct(FOO id);

void Foo_set(FOO id, const char* first, const char* second);
pair_t Foo_get(FOO id);

#ifdef __cplusplus
}
#endif

#endif /* FOO_CIF_H */
