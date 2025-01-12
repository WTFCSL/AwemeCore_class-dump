//
//     Generated by private class-dump
//

@interface IESMMSpinSpeedUtils : NSObject {
    double _avgSpeedRatio;
    double _x1;
    double _x2;
    double _y1;
    double _y2;
    long long _srcDuration;
    long long _dstDuration;
    long long _cycleSrcTimeUs;
    long long _cycleDstTimeUs;
}

@property (nonatomic) double x1;
@property (nonatomic) double x2;
@property (nonatomic) double y1;
@property (nonatomic) double y2;
@property (nonatomic) long long srcDuration;
@property (nonatomic) long long dstDuration;
@property (nonatomic) long long cycleSrcTimeUs;
@property (nonatomic) long long cycleDstTimeUs;
@property (readonly, nonatomic) double avgSpeedRatio;

- (void)setSrcDuration:(long long)arg0;
- (id)initWithPoints:(id)arg0 yPoints:(id)arg1 srcDuration:(long long)arg2 config:(id)arg3;
- (long long)transVideoTimeToPlayTime:(long long)arg0;
- (long long)transPlayTimeToVideoTime:(long long)arg0;
- (double)avgSpeedRatio;
- (double)x1;
- (void)setX1:(double)arg0;
- (void)setX2:(double)arg0;
- (double)y1;
- (void)setY1:(double)arg0;
- (void)setY2:(double)arg0;
- (long long)srcDuration;
- (long long)dstDuration;
- (void)setDstDuration:(long long)arg0;
- (long long)cycleSrcTimeUs;
- (void)setCycleSrcTimeUs:(long long)arg0;
- (long long)cycleDstTimeUs;
- (void)setCycleDstTimeUs:(long long)arg0;
- (double)x2;
- (double)y2;

@end
