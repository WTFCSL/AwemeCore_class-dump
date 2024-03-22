//
//     Generated by private class-dump
//

@interface IESSoloKTVMidiScoreModel : NSObject {
    BOOL _hasSong;
    float _score;
    long long _level;
    double _start;
    double _duration;
}

@property (nonatomic) BOOL hasSong;
@property (nonatomic) float score;
@property (nonatomic) long long level;
@property (nonatomic) double start;
@property (nonatomic) double duration;

- (void)updateScore:(float)arg0;
- (void)cleanUserRecord;
- (void)setHasSong:(BOOL)arg0;
- (long long)scoreToLevel:(float)arg0;
- (void)setLevel:(long long)arg0;
- (void)setStart:(double)arg0;
- (void)setScore:(float)arg0;
- (long long)level;
- (float)score;
- (double)duration;
- (double)start;
- (void)setDuration:(double)arg0;
- (BOOL)hasSong;
- (id)initWithStart:(double)arg0 duration:(double)arg1;

@end
