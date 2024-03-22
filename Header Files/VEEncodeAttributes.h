//
//     Generated by private class-dump
//

@class IESMMObject, VESampleData, HTSGLFramebuffer;
@protocol VEProcessSampleDelegate, VECompileStageProtocol;

@interface VEEncodeAttributes : NSObject {
    double _begin;
    long long _sampleFlag;
    VESampleData *_sampleData;
    HTSGLFramebuffer *_inputFramebuffer;
    IESMMObject<VEProcessSampleDelegate, VECompileStageProtocol> *_vtUnit;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _pts;
}

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } pts;
@property (nonatomic) double begin;
@property (nonatomic) long long sampleFlag;
@property (retain, nonatomic) VESampleData *sampleData;
@property (retain, nonatomic) HTSGLFramebuffer *inputFramebuffer;
@property (retain, nonatomic) IESMMObject<VEProcessSampleDelegate, VECompileStageProtocol> *vtUnit;

- (void)setSampleFlag:(long long)arg0;
- (long long)sampleFlag;
- (id)inputFramebuffer;
- (void)setInputFramebuffer:(id)arg0;
- (id)vtUnit;
- (void)setVtUnit:(id)arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })pts;
- (double)begin;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setBegin:(double)arg0;
- (id)sampleData;
- (void)setSampleData:(id)arg0;
- (void)setPts:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;

@end