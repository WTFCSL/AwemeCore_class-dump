//
//     Generated by private class-dump
//

@interface IESSoloKTVMidiAniScoreChangeModel : IESSoloKTVMidiAnimationModel {
    BOOL _scoreEnable;
    double _scoreStart;
    double _scoreEnd;
    double _scoreStep;
}

@property (nonatomic) BOOL scoreEnable;
@property (nonatomic) double scoreStart;
@property (nonatomic) double scoreEnd;
@property (nonatomic) double scoreStep;

- (void)setScoreEnable:(BOOL)arg0;
- (BOOL)scoreEnable;
- (double)scoreStart;
- (void)setScoreStart:(double)arg0;
- (double)scoreEnd;
- (void)setScoreEnd:(double)arg0;
- (double)scoreStep;
- (void)setScoreStep:(double)arg0;
- (id)init;

@end