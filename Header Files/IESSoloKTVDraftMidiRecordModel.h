//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface IESSoloKTVDraftMidiRecordModel : NSObject {
    NSMutableDictionary *_midis;
    double _fps;
    double _recordDelayTime;
}

@property (retain, nonatomic) NSMutableDictionary *midis;
@property (nonatomic) double fps;
@property (nonatomic) double recordDelayTime;

- (void)setRecordDelayTime:(double)arg0;
- (void)addScoreModel:(id)arg0;
- (double)recordDelayTime;
- (id)midis;
- (void)setMidis:(id)arg0;
- (id)getScoreModel:(double)arg0;
- (id)init;
- (void).cxx_destruct;
- (double)fps;
- (void)setFps:(double)arg0;

@end
