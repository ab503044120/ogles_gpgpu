/**
 * GPGPU adaptive thresholding processor.
 */
#ifndef OGLES_GPGPU_COMMON_PROC_ADAPT_THRESH
#define OGLES_GPGPU_COMMON_PROC_ADAPT_THRESH

#include "../common_includes.h"

#include "base/multipassproc.h"
#include "multipass/adapt_thresh_pass.h"

namespace ogles_gpgpu {
class AdaptThreshProc : public MultiPassProc {
public:
    AdaptThreshProc() {
        AdaptThreshProcPass *adaptThreshPass1 = new AdaptThreshProcPass(1);
        AdaptThreshProcPass *adaptThreshPass2 = new AdaptThreshProcPass(2);
        
        procPasses.push_back(adaptThreshPass1);
        procPasses.push_back(adaptThreshPass2);
    }
};
}

#endif