//
//     Generated by private class-dump
//

@class NSString;

@interface ACCPropSampleModel : NSObject {
    BOOL _isPin;
    BOOL _isFavorite;
    BOOL _hasRecord;
    NSString *_propId;
    NSString *_age;
    NSString *_gender;
    NSString *_type;
    NSString *_style;
    double _rankScore;
    double _trialPv;
    double _shootRatePv;
    double _publishRatePv;
    double _dateDiff;
    double _duration;
    double _startTime;
    double _lastRecordDuration;
}

@property (copy, nonatomic) NSString *propId;
@property (copy, nonatomic) NSString *age;
@property (copy, nonatomic) NSString *gender;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *style;
@property (nonatomic) double rankScore;
@property (nonatomic) double trialPv;
@property (nonatomic) double shootRatePv;
@property (nonatomic) double publishRatePv;
@property (nonatomic) double dateDiff;
@property (nonatomic) BOOL isPin;
@property (nonatomic) BOOL isFavorite;
@property (nonatomic) double duration;
@property (nonatomic) double startTime;
@property (nonatomic) BOOL hasRecord;
@property (nonatomic) double lastRecordDuration;

- (BOOL)isPin;
- (void)setIsPin:(BOOL)arg0;
- (void)setHasRecord:(BOOL)arg0;
- (id)propId;
- (void)setPropId:(id)arg0;
- (double)rankScore;
- (void)setRankScore:(double)arg0;
- (void)setDateDiff:(double)arg0;
- (void)setTrialPv:(double)arg0;
- (void)setShootRatePv:(double)arg0;
- (void)setPublishRatePv:(double)arg0;
- (void)setLastRecordDuration:(double)arg0;
- (double)dateDiff;
- (double)publishRatePv;
- (double)lastRecordDuration;
- (double)shootRatePv;
- (double)trialPv;
- (id)style;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (id)age;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)type;
- (id)gender;
- (double)duration;
- (void)setAge:(id)arg0;
- (BOOL)hasRecord;
- (void)setType:(id)arg0;
- (double)startTime;
- (BOOL)isFavorite;
- (void)setGender:(id)arg0;
- (void)setStyle:(id)arg0;
- (void)setDuration:(double)arg0;
- (void)setIsFavorite:(BOOL)arg0;

@end
