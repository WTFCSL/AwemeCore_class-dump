//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface IESMMFaceAttributeDetectResultData : IESMMAlgorithmResultData {
    double _age;
    double _boyProb;
    double _attractive;
    double _happyScore;
    double _realFaceProb;
    double _quality;
    double _arousal;
    double _valence;
    double _sadScore;
    double _angryScore;
    double _surpriseScore;
    double _maskProb;
    double _wearHatProb;
    double _mustacheProb;
    double _lipstickProb;
    double _wearGlassProb;
    double _wearSunglassProb;
    double _blurScore;
    double _illumination;
    long long _expressionType;
    NSMutableArray *_expProbs;
}

@property (nonatomic) double age;
@property (nonatomic) double boyProb;
@property (nonatomic) double attractive;
@property (nonatomic) double happyScore;
@property (nonatomic) double realFaceProb;
@property (nonatomic) double quality;
@property (nonatomic) double arousal;
@property (nonatomic) double valence;
@property (nonatomic) double sadScore;
@property (nonatomic) double angryScore;
@property (nonatomic) double surpriseScore;
@property (nonatomic) double maskProb;
@property (nonatomic) double wearHatProb;
@property (nonatomic) double mustacheProb;
@property (nonatomic) double lipstickProb;
@property (nonatomic) double wearGlassProb;
@property (nonatomic) double wearSunglassProb;
@property (nonatomic) double blurScore;
@property (nonatomic) double illumination;
@property (nonatomic) long long expressionType;
@property (retain, nonatomic) NSMutableArray *expProbs;

- (void)setBoyProb:(double)arg0;
- (void)setAttractive:(double)arg0;
- (void)setHappyScore:(double)arg0;
- (double)sadScore;
- (void)setSadScore:(double)arg0;
- (double)angryScore;
- (void)setAngryScore:(double)arg0;
- (double)surpriseScore;
- (void)setSurpriseScore:(double)arg0;
- (double)happyScore;
- (double)realFaceProb;
- (void)setRealFaceProb:(double)arg0;
- (double)boyProb;
- (double)attractive;
- (double)maskProb;
- (void)setMaskProb:(double)arg0;
- (double)wearHatProb;
- (void)setWearHatProb:(double)arg0;
- (double)mustacheProb;
- (void)setMustacheProb:(double)arg0;
- (double)lipstickProb;
- (void)setLipstickProb:(double)arg0;
- (double)wearGlassProb;
- (void)setWearGlassProb:(double)arg0;
- (double)wearSunglassProb;
- (void)setWearSunglassProb:(double)arg0;
- (double)illumination;
- (void)setIllumination:(double)arg0;
- (id)expProbs;
- (void)setExpProbs:(id)arg0;
- (void)setQuality:(double)arg0;
- (id)init;
- (double)quality;
- (void).cxx_destruct;
- (double)age;
- (void)setAge:(double)arg0;
- (long long)expressionType;
- (double)blurScore;
- (void)setBlurScore:(double)arg0;
- (double)valence;
- (void)setValence:(double)arg0;
- (void)setExpressionType:(long long)arg0;
- (double)arousal;
- (void)setArousal:(double)arg0;

@end
