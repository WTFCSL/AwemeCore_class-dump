//
//     Generated by private class-dump
//

@interface IESSoloKTVMidiAnimationModel : NSObject {
    BOOL _backToStart;
    int _frames;
    int _keepFrames;
    double _startTime;
}

@property (nonatomic) double startTime;
@property (nonatomic) int frames;
@property (nonatomic) int keepFrames;
@property (nonatomic) BOOL backToStart;

- (BOOL)backToStart;
- (void)setBackToStart:(BOOL)arg0;
- (int)frames;
- (void)setStartTime:(double)arg0;
- (double)startTime;
- (void)setFrames:(int)arg0;
- (int)keepFrames;
- (void)setKeepFrames:(int)arg0;

@end
