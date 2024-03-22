//
//     Generated by private class-dump
//

@class NSNumber, NSString, AWEURLModel;

@interface AWEAdModel : AWEBaseApiModel {
    BOOL _isPreview;
    NSNumber *_adID;
    NSNumber *_creativeID;
    NSNumber *_groupID;
    NSNumber *_cptSeq;
    NSString *_logExtra;
    NSString *_openURL;
    NSString *_webURL;
    NSString *_webTitle;
    NSString *_buttonText;
    NSNumber *_effectivePlayTime;
    long long _videoTranspose;
    AWEURLModel *_trackURLList;
    AWEURLModel *_clickTrackURLList;
    AWEURLModel *_playTrackURLList;
    AWEURLModel *_playOverTrackURLList;
    AWEURLModel *_effectivePlayTrackURLList;
    long long _showMaskAfterPlayTimes;
    long long _showLearnMoreAfterSeconds;
}

@property (nonatomic) BOOL isPreview;
@property (retain, nonatomic) NSNumber *adID;
@property (retain, nonatomic) NSNumber *creativeID;
@property (retain, nonatomic) NSNumber *groupID;
@property (retain, nonatomic) NSNumber *cptSeq;
@property (retain, nonatomic) NSString *logExtra;
@property (retain, nonatomic) NSString *openURL;
@property (retain, nonatomic) NSString *webURL;
@property (retain, nonatomic) NSString *webTitle;
@property (retain, nonatomic) NSString *buttonText;
@property (retain, nonatomic) NSNumber *effectivePlayTime;
@property (nonatomic) long long videoTranspose;
@property (readonly, nonatomic) AWEURLModel *trackURLList;
@property (readonly, nonatomic) AWEURLModel *clickTrackURLList;
@property (readonly, nonatomic) AWEURLModel *playTrackURLList;
@property (readonly, nonatomic) AWEURLModel *playOverTrackURLList;
@property (readonly, nonatomic) AWEURLModel *effectivePlayTrackURLList;
@property (nonatomic) long long showMaskAfterPlayTimes;
@property (nonatomic) long long showLearnMoreAfterSeconds;

+ (id)trackURLListJSONTransformer;
+ (id)clickTrackURLListJSONTransformer;
+ (id)videoTransposeJSONTransformer;
+ (id)playTrackURLListJSONTransformer;
+ (id)playOverTrackURLListJSONTransformer;
+ (id)effectivePlayTrackURLListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (void)setWebTitle:(id)arg0;
- (void)setOpenURL:(id)arg0;
- (id)clickTrackURLList;
- (void)setCreativeID:(id)arg0;
- (id)adID;
- (void)setAdID:(id)arg0;
- (id)trackURLList;
- (id)playOverTrackURLList;
- (id)webTitle;
- (id)playTrackURLList;
- (id)effectivePlayTrackURLList;
- (void)setEffectivePlayTime:(id)arg0;
- (id)effectivePlayTime;
- (long long)videoTranspose;
- (void)setVideoTranspose:(long long)arg0;
- (long long)showLearnMoreAfterSeconds;
- (void)setShowLearnMoreAfterSeconds:(long long)arg0;
- (long long)showMaskAfterPlayTimes;
- (void)setShowMaskAfterPlayTimes:(long long)arg0;
- (id)cptSeq;
- (void)setCptSeq:(id)arg0;
- (void)setGroupID:(id)arg0;
- (id)groupID;
- (void).cxx_destruct;
- (id)webURL;
- (void)setWebURL:(id)arg0;
- (BOOL)isPreview;
- (id)buttonText;
- (void)setButtonText:(id)arg0;
- (id)openURL;
- (void)setIsPreview:(BOOL)arg0;
- (id)creativeID;

@end