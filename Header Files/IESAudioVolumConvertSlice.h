//
//     Generated by private class-dump
//

@interface IESAudioVolumConvertSlice : NSObject {
    double _startTime;
    double _duration;
    unsigned long long _pointCount;
    long long _sliceId;
}

@property (nonatomic) double startTime;
@property (nonatomic) double duration;
@property (nonatomic) unsigned long long pointCount;
@property (nonatomic) long long sliceId;

- (long long)sliceId;
- (void)setSliceId:(long long)arg0;
- (void)setStartTime:(double)arg0;
- (double)duration;
- (double)startTime;
- (void)setDuration:(double)arg0;
- (unsigned long long)pointCount;
- (void)setPointCount:(unsigned long long)arg0;

@end
