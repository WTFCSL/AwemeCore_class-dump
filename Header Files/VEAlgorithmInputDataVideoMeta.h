//
//     Generated by private class-dump
//

@interface VEAlgorithmInputDataVideoMeta : NSObject {
    BOOL _isLast;
    long long _frameIndex;
    long long _frameId;
    double _timeStamp;
}

@property (nonatomic) long long frameIndex;
@property (nonatomic) long long frameId;
@property (nonatomic) double timeStamp;
@property (nonatomic) BOOL isLast;

- (void)setIsLast:(BOOL)arg0;
- (double)timeStamp;
- (long long)frameId;
- (void)setFrameId:(long long)arg0;
- (void)setTimeStamp:(double)arg0;
- (BOOL)isLast;
- (long long)frameIndex;
- (void)setFrameIndex:(long long)arg0;

@end
