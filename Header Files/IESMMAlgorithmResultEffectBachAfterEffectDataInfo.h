//
//     Generated by private class-dump
//

@interface IESMMAlgorithmResultEffectBachAfterEffectDataInfo : NSObject {
    int _time;
    float _score;
    float _face_score;
    float _quality_score;
    float _sharepness_score;
    float _meaningless_score;
    float _portrait_score;
}

@property (nonatomic) int time;
@property (nonatomic) float score;
@property (nonatomic) float face_score;
@property (nonatomic) float quality_score;
@property (nonatomic) float sharepness_score;
@property (nonatomic) float meaningless_score;
@property (nonatomic) float portrait_score;

- (void)setFace_score:(float)arg0;
- (void)setQuality_score:(float)arg0;
- (void)setSharepness_score:(float)arg0;
- (void)setMeaningless_score:(float)arg0;
- (void)setPortrait_score:(float)arg0;
- (float)face_score;
- (float)quality_score;
- (float)sharepness_score;
- (float)meaningless_score;
- (float)portrait_score;
- (id)init;
- (void)setScore:(float)arg0;
- (float)score;
- (int)time;
- (void)setTime:(int)arg0;

@end
