//
//     Generated by private class-dump
//

@class NSString, NSArray, AWEURLModel;

@interface AWENearbyGuideBubbleModel : MTLModel <MTLJSONSerializing> {
    int _frequency;
    int _dayFrequency;
    int _bubbleAttribute;
    NSString *_bubbleText;
    NSString *_bubbleMessage;
    NSString *_diamondMessage;
    long long _bubbleType;
    NSArray *_lifeBubbleCondition;
    NSString *_exposureMessage;
    NSString *_bubbleTypeTextForTrack;
    NSString *_bubblePOIBackTypePrefix;
    NSString *_nearbyTabBubbleMoment;
    long long _startTime;
    long long _endTime;
    NSString *_festivalName;
    NSString *_extra;
    unsigned long long _style;
    AWEURLModel *_bubbleImgUrl;
    unsigned long long _bubbleImgType;
    AWEURLModel *_bubbleIconUrl;
    unsigned long long _dotStyle;
    NSString *_dotText;
    NSString *_guideDsl;
}

@property (copy, nonatomic) NSString *bubbleText;
@property (copy, nonatomic) NSString *bubbleMessage;
@property (copy, nonatomic) NSString *diamondMessage;
@property (nonatomic) long long bubbleType;
@property (copy, nonatomic) NSArray *lifeBubbleCondition;
@property (copy, nonatomic) NSString *exposureMessage;
@property (copy, nonatomic) NSString *bubbleTypeTextForTrack;
@property (copy, nonatomic) NSString *bubblePOIBackTypePrefix;
@property (copy, nonatomic) NSString *nearbyTabBubbleMoment;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (nonatomic) int frequency;
@property (nonatomic) int dayFrequency;
@property (copy, nonatomic) NSString *festivalName;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) int bubbleAttribute;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) AWEURLModel *bubbleImgUrl;
@property (nonatomic) unsigned long long bubbleImgType;
@property (copy, nonatomic) AWEURLModel *bubbleIconUrl;
@property (nonatomic) unsigned long long dotStyle;
@property (copy, nonatomic) NSString *dotText;
@property (copy, nonatomic) NSString *guideDsl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtra:(id)arg0;
- (id)bubbleMessage;
- (void)setBubbleMessage:(id)arg0;
- (id)diamondMessage;
- (void)setDiamondMessage:(id)arg0;
- (long long)bubbleType;
- (void)setBubbleType:(long long)arg0;
- (id)lifeBubbleCondition;
- (void)setLifeBubbleCondition:(id)arg0;
- (id)exposureMessage;
- (void)setExposureMessage:(id)arg0;
- (id)bubbleTypeTextForTrack;
- (void)setBubbleTypeTextForTrack:(id)arg0;
- (id)bubblePOIBackTypePrefix;
- (void)setBubblePOIBackTypePrefix:(id)arg0;
- (id)nearbyTabBubbleMoment;
- (void)setNearbyTabBubbleMoment:(id)arg0;
- (void)setDayFrequency:(int)arg0;
- (id)festivalName;
- (void)setFestivalName:(id)arg0;
- (int)bubbleAttribute;
- (void)setBubbleAttribute:(int)arg0;
- (id)bubbleImgUrl;
- (void)setBubbleImgUrl:(id)arg0;
- (unsigned long long)bubbleImgType;
- (void)setBubbleImgType:(unsigned long long)arg0;
- (id)bubbleIconUrl;
- (void)setBubbleIconUrl:(id)arg0;
- (unsigned long long)dotStyle;
- (void)setDotStyle:(unsigned long long)arg0;
- (id)dotText;
- (void)setDotText:(id)arg0;
- (id)guideDsl;
- (void)setGuideDsl:(id)arg0;
- (id)createGeneralGuideModel;
- (unsigned long long)style;
- (void)setStartTime:(long long)arg0;
- (void).cxx_destruct;
- (id)extra;
- (long long)endTime;
- (long long)startTime;
- (void)setFrequency:(int)arg0;
- (void)setEndTime:(long long)arg0;
- (void)setStyle:(unsigned long long)arg0;
- (int)frequency;
- (id)bubbleText;
- (void)setBubbleText:(id)arg0;
- (int)dayFrequency;

@end