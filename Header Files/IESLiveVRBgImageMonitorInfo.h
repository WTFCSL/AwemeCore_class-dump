//
//     Generated by private class-dump
//

@interface IESLiveVRBgImageMonitorInfo : NSObject {
    BOOL _complete;
    double _start;
    double _end;
    double _duration;
}

@property (nonatomic) double start;
@property (nonatomic) double end;
@property (nonatomic) double duration;
@property (nonatomic) BOOL complete;

- (void)setEnd:(double)arg0;
- (double)end;
- (void)setStart:(double)arg0;
- (BOOL)complete;
- (double)duration;
- (void)setComplete:(BOOL)arg0;
- (double)start;
- (void)setDuration:(double)arg0;

@end
