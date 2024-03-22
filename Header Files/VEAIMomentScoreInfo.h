//
//     Generated by private class-dump
//

@interface VEAIMomentScoreInfo : NSObject <WCTColumnCoding, NSCoding> {
    float _score;
    float _faceScore;
    float _qualityScore;
    float _sharpnessScore;
    float _meaninglessScore;
    float _portraitScore;
    double _timeStamp;
}

@property (nonatomic) float score;
@property (nonatomic) float faceScore;
@property (nonatomic) float qualityScore;
@property (nonatomic) float sharpnessScore;
@property (nonatomic) double timeStamp;
@property (nonatomic) float meaninglessScore;
@property (nonatomic) float portraitScore;

+ (int)columnTypeForWCDB;
+ (id)unarchiveWithWCTValue:(id)arg0;

- (id)archivedWCTValue;
- (float)sharpnessScore;
- (void)setSharpnessScore:(float)arg0;
- (void)setPortraitScore:(float)arg0;
- (id)acc_scoreInfoDict;
- (float)meaninglessScore;
- (void)setMeaninglessScore:(float)arg0;
- (void)setScore:(float)arg0;
- (float)score;
- (double)timeStamp;
- (id)initWithCoder:(id)arg0;
- (float)qualityScore;
- (id)description;
- (void)encodeWithCoder:(id)arg0;
- (void)setTimeStamp:(double)arg0;
- (float)faceScore;
- (void)setFaceScore:(float)arg0;
- (float)portraitScore;
- (void)setQualityScore:(float)arg0;

@end