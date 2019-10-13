#include "rrr.h"

#ifdef __cplusplus
extern "C" {
#endif

  rrr_t* bvector_rrr_create(uint64_t *d, uint64_t n, uint64_t b, uint64_t s) {
    auto *r = new bvector::rrr(d, n, b, s);
    return reinterpret_cast<rrr_t *>(r);
  }

  uint64_t bvector_rrr_access(rrr_t *r, uint64_t i) {
    return reinterpret_cast<bvector::rrr *>(r)->access(i);
  }

  uint64_t bvector_rrr_rank0(rrr_t *r, uint64_t i) {
    return reinterpret_cast<bvector::rrr *>(r)->rank0(i);
  }

  uint64_t bvector_rrr_rank1(rrr_t *r, uint64_t i) {
    return reinterpret_cast<bvector::rrr *>(r)->rank1(i);
  }

  uint64_t bvector_rrr_select0(rrr_t *r, uint64_t i) {
    return reinterpret_cast<bvector::rrr *>(r)->select0(i);
  }

  uint64_t bvector_rrr_select1(rrr_t *r, uint64_t i) {
    return reinterpret_cast<bvector::rrr *>(r)->select1(i);
  }

  uint64_t bvector_rrr_size(rrr_t *r) {
    return reinterpret_cast<bvector::rrr *>(r)->size();
  }

#ifdef __cplusplus
}
#endif
