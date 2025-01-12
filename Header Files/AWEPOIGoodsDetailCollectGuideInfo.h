//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface AWEPOIGoodsDetailCollectGuideInfo : NSObject {
    NSDictionary *_collectGuideInfo;
    double _showTime;
    long long _poiTriggerTimes;
    long long _guideType;
    NSString *_guideText;
    NSDictionary *_guideFrequencyMap;
    NSDictionary *_sortRuleGuide;
    long long _crossPoi;
    long long _xDay;
    long long _yTime;
    long long _stillShowBubble;
}

@property (retain, nonatomic) NSDictionary *collectGuideInfo;
@property (nonatomic) double showTime;
@property (nonatomic) long long poiTriggerTimes;
@property (nonatomic) long long guideType;
@property (copy, nonatomic) NSString *guideText;
@property (retain, nonatomic) NSDictionary *guideFrequencyMap;
@property (retain, nonatomic) NSDictionary *sortRuleGuide;
@property (nonatomic) long long crossPoi;
@property (nonatomic) long long xDay;
@property (nonatomic) long long yTime;
@property (nonatomic) long long stillShowBubble;

- (void)setGuideText:(id)arg0;
- (id)guideText;
- (double)showTime;
- (void)setShowTime:(double)arg0;
- (long long)guideType;
- (void)setGuideType:(long long)arg0;
- (id)collectGuideInfo;
- (void)setCollectGuideInfo:(id)arg0;
- (long long)poiTriggerTimes;
- (void)setPoiTriggerTimes:(long long)arg0;
- (id)guideFrequencyMap;
- (void)setGuideFrequencyMap:(id)arg0;
- (id)sortRuleGuide;
- (void)setSortRuleGuide:(id)arg0;
- (long long)crossPoi;
- (void)setCrossPoi:(long long)arg0;
- (long long)xDay;
- (void)setXDay:(long long)arg0;
- (long long)yTime;
- (void)setYTime:(long long)arg0;
- (long long)stillShowBubble;
- (void)setStillShowBubble:(long long)arg0;
- (id)initWithDataSource:(id)arg0;
- (void).cxx_destruct;

@end
