//
//     Generated by private class-dump
//

@class NSArray;

@interface ACCBeatSequenceGenerator : NSObject {
    BOOL _musicBeatsOn;
    NSArray *_beatsArray;
    double _defaultTimeInterval;
    double _minTimeInterval;
    double _maxTimeInterval;
}

@property (nonatomic) double defaultTimeInterval;
@property (nonatomic) double minTimeInterval;
@property (nonatomic) double maxTimeInterval;
@property (nonatomic) BOOL musicBeatsOn;
@property (retain, nonatomic) NSArray *beatsArray;

- (id)beatsArray;
- (void)setBeatsArray:(id)arg0;
- (void)setMusicBeatsOn:(BOOL)arg0;
- (double)genertateBeatWithTime:(double)arg0;
- (BOOL)musicBeatsOn;
- (id)initWithTimeIntervalDefault:(double)arg0 min:(double)arg1 max:(double)arg2;
- (void)setDefaultTimeInterval:(double)arg0;
- (void)setMinTimeInterval:(double)arg0;
- (void).cxx_destruct;
- (double)minTimeInterval;
- (double)maxTimeInterval;
- (void)setMaxTimeInterval:(double)arg0;
- (double)defaultTimeInterval;

@end
