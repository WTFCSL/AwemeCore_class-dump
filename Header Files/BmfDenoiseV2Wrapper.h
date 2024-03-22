//
//     Generated by private class-dump
//

@class LiveStreamCapture;

@interface BmfDenoiseV2Wrapper : NSObject {
    struct unique_ptr<BMFDenoiseLive, std::default_delete<BMFDenoiseLive>> { struct __compressed_pair<BMFDenoiseLive *, std::default_delete<BMFDenoiseLive>> { struct BMFDenoiseLive *__value_; } __ptr_; } obj;
    int frameIndex;
    float bitrateRatioGE1080p;
    float bitrateRatioLT1080p;
    int lastWidth;
    int lastHeight;
    LiveStreamCapture *capture;
}

- (id)initWithObj:(id)arg0 :(void *)arg1 :(float)arg2 :(float)arg3;
- (BOOL)updateBitrateRatios:(float)arg0 :(float)arg1;
- (struct __CVBuffer { } *)process:(struct __CVBuffer { } *)arg0 :(float)arg1 :(float)arg2 :(BOOL)arg3;
- (void)checkSizeChange:(int)arg0 :(int)arg1;
- (void).cxx_destruct;
- (struct BmfMetalVeryfastDenoiseReport { unsigned int x0; float x1; int x2; float x3; float x4; })report;
- (void)dealloc;
- (id).cxx_construct;

@end
