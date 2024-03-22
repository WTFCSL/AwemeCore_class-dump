//
//     Generated by private class-dump
//

@interface VERecordFragmentInfo : NSObject {
    BOOL _videoRecorded;
    BOOL _cameraPosition;
    double _rate;
    double _videoStartTime;
    double _maxAccelerate;
    double _delayTime;
}

@property (nonatomic) double rate;
@property (nonatomic) BOOL videoRecorded;
@property (nonatomic) double videoStartTime;
@property (nonatomic) double maxAccelerate;
@property (nonatomic) BOOL cameraPosition;
@property (nonatomic) double delayTime;

- (BOOL)videoRecorded;
- (void)setVideoRecorded:(BOOL)arg0;
- (double)videoStartTime;
- (void)setVideoStartTime:(double)arg0;
- (double)maxAccelerate;
- (void)setMaxAccelerate:(double)arg0;
- (BOOL)cameraPosition;
- (void)setDelayTime:(double)arg0;
- (void)setRate:(double)arg0;
- (double)delayTime;
- (double)rate;
- (void)setCameraPosition:(BOOL)arg0;

@end
