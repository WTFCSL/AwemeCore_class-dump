//
//     Generated by private class-dump
//

@interface VECaptureFrameConfig : NSObject {
    BOOL _useOriginColorSpace;
    BOOL _needProcess;
    BOOL _isLastImage;
    BOOL _cancelLastRequest;
    BOOL _isMV;
    struct CGSize { double width; double height; } _size;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _atTime;
}

@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } atTime;
@property (nonatomic) BOOL useOriginColorSpace;
@property (nonatomic) struct CGSize { double width; double height; } size;
@property (nonatomic) BOOL needProcess;
@property (nonatomic) BOOL isLastImage;
@property (nonatomic) BOOL cancelLastRequest;
@property (nonatomic) BOOL isMV;

- (BOOL)needProcess;
- (void)setAtTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)setNeedProcess:(BOOL)arg0;
- (void)setIsLastImage:(BOOL)arg0;
- (void)setCancelLastRequest:(BOOL)arg0;
- (void)setIsMV:(BOOL)arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })atTime;
- (BOOL)cancelLastRequest;
- (BOOL)isMV;
- (BOOL)isLastImage;
- (BOOL)useOriginColorSpace;
- (void)setUseOriginColorSpace:(BOOL)arg0;
- (struct CGSize { double x0; double x1; })size;
- (void)setSize:(struct CGSize { double x0; double x1; })arg0;

@end
