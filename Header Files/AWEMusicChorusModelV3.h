//
//     Generated by private class-dump
//

@interface AWEMusicChorusModelV3 : AWEBaseDataModel {
    long long _startMs;
    long long _durationMs;
    double _startProb;
    double _endProb;
    double _chorusProb;
}

@property (nonatomic) long long startMs;
@property (nonatomic) long long durationMs;
@property (nonatomic) double startProb;
@property (nonatomic) double endProb;
@property (nonatomic) double chorusProb;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setStartMs:(long long)arg0;
- (double)startProb;
- (void)setStartProb:(double)arg0;
- (double)endProb;
- (void)setEndProb:(double)arg0;
- (double)chorusProb;
- (void)setChorusProb:(double)arg0;
- (long long)durationMs;
- (void)setDurationMs:(long long)arg0;
- (long long)startMs;

@end
