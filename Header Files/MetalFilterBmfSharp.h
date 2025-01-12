//
//     Generated by private class-dump
//

@class NSString, NSObject;
@protocol OS_dispatch_queue, IBmfSharp;

@interface MetalFilterBmfSharp : MetalFilterDefault <MetalFilterSource> {
    struct BmfSharpExtraInfo { int x0; float x1; float x2; float x3; float x4; float x5; BOOL x6; BOOL x7; } *_sharpExtraInfo;
    BOOL _sharpAdaptive;
    BOOL _sharpSync;
    BOOL _initSharpAsync;
    BOOL _useNewInterface;
    BOOL _isSharpInitFinished;
    BOOL _isSharpUpdateFinished;
    int _sharpAlgoType;
    float _sharpWt;
    float _sharpThr;
    float _sharpOvrt;
    float _sharpG0;
    float _sharpLcWtThr;
    int _sharpMode;
    id<IBmfSharp> _sharpLutInstance;
    NSObject<OS_dispatch_queue> *_bmfSharpInitProcessorQueue;
}

@property (nonatomic) int sharpAlgoType;
@property (nonatomic) float sharpWt;
@property (nonatomic) float sharpThr;
@property (nonatomic) float sharpOvrt;
@property (nonatomic) float sharpG0;
@property (nonatomic) float sharpLcWtThr;
@property (nonatomic) BOOL sharpAdaptive;
@property (nonatomic) BOOL sharpSync;
@property (nonatomic) BOOL initSharpAsync;
@property (nonatomic) BOOL useNewInterface;
@property BOOL isSharpInitFinished;
@property BOOL isSharpUpdateFinished;
@property (nonatomic) int sharpMode;
@property (retain, nonatomic) id<IBmfSharp> sharpLutInstance;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *bmfSharpInitProcessorQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setSharpAlgoType:(int)arg0;
- (void)setSharpWt:(float)arg0;
- (void)setSharpThr:(float)arg0;
- (void)setSharpOvrt:(float)arg0;
- (void)setSharpLcWtThr:(float)arg0;
- (void)setSharpG0:(float)arg0;
- (void)setSharpAdaptive:(BOOL)arg0;
- (void)setSharpSync:(BOOL)arg0;
- (void)setInitSharpAsync:(BOOL)arg0;
- (void)setUseNewInterface:(BOOL)arg0;
- (BOOL)useNewInterface;
- (int)sharpAlgoType;
- (float)sharpWt;
- (float)sharpThr;
- (float)sharpOvrt;
- (float)sharpG0;
- (float)sharpLcWtThr;
- (BOOL)sharpAdaptive;
- (BOOL)sharpSync;
- (void)setSharpMode:(int)arg0;
- (BOOL)initSharpAsync;
- (void)setIsSharpInitFinished:(BOOL)arg0;
- (void)setIsSharpUpdateFinished:(BOOL)arg0;
- (id)sharpLutInstance;
- (id)bmfSharpInitProcessorQueue;
- (void)setBmfSharpInitProcessorQueue:(id)arg0;
- (void)initSharp;
- (void)setSharpLutInstance:(id)arg0;
- (BOOL)isSharpUpdateFinished;
- (BOOL)isSharpInitFinished;
- (long long)processBufferWithNewInterface:(struct MetalTextureBuffer { void /* function */ **x0; struct __CVBuffer *x1; void **x2; int *x3; id x4; id x5; id x6; int x7; id x8; id x9; id x10; int x11; int x12; int x13; int x14; int x15; void *x16; int x17; id x18; float x19; int x20; int x21; id x22; long long x23; long long x24; } *)arg0;
- (void)updateSharp:(id)arg0;
- (int)sharpMode;
- (BOOL)returnBmfResult:(void *)arg0;
- (struct VideoFrame { struct VideoFrameBuffer *x0; } *)process:(struct VideoFrame { struct VideoFrameBuffer *x0; } *)arg0;
- (void).cxx_destruct;
- (void)setEffect:(id)arg0;
- (void)dealloc;
- (id)initWithDictionary:(id)arg0 index:(int)arg1;
- (long long)processBuffer:(struct MetalTextureBuffer { void /* function */ **x0; struct __CVBuffer *x1; void **x2; int *x3; id x4; id x5; id x6; int x7; id x8; id x9; id x10; int x11; int x12; int x13; int x14; int x15; void *x16; int x17; id x18; float x19; int x20; int x21; id x22; long long x23; long long x24; } *)arg0;

@end
