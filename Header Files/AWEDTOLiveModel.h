//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary;

@interface AWEDTOLiveModel : MTLModel <MTLJSONSerializing> {
    NSString *_liveType;
    NSString *_liveId;
    NSString *_liveTime;
    NSArray *_watermarkLocation;
    NSString *_highlightId;
    NSString *_promotionId;
    NSString *_recordStartTime;
    NSString *_recordEndTime;
    NSString *_anchorId;
    NSString *_nickname;
    NSString *_uid;
    NSString *_displayId;
    NSDictionary *_trackExtras;
    NSString *_title;
    NSString *_userName;
}

@property (copy, nonatomic) NSString *liveType;
@property (copy, nonatomic) NSString *liveId;
@property (copy, nonatomic) NSString *liveTime;
@property (copy, nonatomic) NSArray *watermarkLocation;
@property (copy, nonatomic) NSString *highlightId;
@property (copy, nonatomic) NSString *promotionId;
@property (copy, nonatomic) NSString *recordStartTime;
@property (copy, nonatomic) NSString *recordEndTime;
@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) NSString *displayId;
@property (copy, nonatomic) NSDictionary *trackExtras;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *userName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)liveId;
- (id)liveTime;
- (void)setLiveType:(id)arg0;
- (id)liveType;
- (void)setLiveId:(id)arg0;
- (void)setLiveTime:(id)arg0;
- (id)watermarkLocation;
- (void)setWatermarkLocation:(id)arg0;
- (id)highlightId;
- (void)setHighlightId:(id)arg0;
- (id)promotionId;
- (void)setPromotionId:(id)arg0;
- (id)recordStartTime;
- (void)setRecordStartTime:(id)arg0;
- (id)recordEndTime;
- (void)setRecordEndTime:(id)arg0;
- (id)anchorId;
- (void)setAnchorId:(id)arg0;
- (id)trackExtras;
- (void)setTrackExtras:(id)arg0;
- (id)displayId;
- (void)setUid:(id)arg0;
- (id)uid;
- (id)init;
- (id)nickname;
- (id)userName;
- (void).cxx_destruct;
- (void)setUserName:(id)arg0;
- (void)setNickname:(id)arg0;
- (id)title;
- (void)setDisplayId:(id)arg0;
- (void)setTitle:(id)arg0;

@end
