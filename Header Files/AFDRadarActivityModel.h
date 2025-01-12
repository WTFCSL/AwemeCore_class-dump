//
//     Generated by private class-dump
//

@class NSString, NSArray, AFDRadarFollowButtonModel, AFDRadarActivityBannerModel, AWEIMMessageShowAnimationModel;

@interface AFDRadarActivityModel : AWEBaseApiModel {
    BOOL _hasEmojiIntro;
    BOOL _hasAvtivity;
    NSString *_activityName;
    NSString *_activityID;
    NSString *_activityInfo;
    NSArray *_emojiURL;
    AFDRadarActivityBannerModel *_bannerInfo;
    AFDRadarFollowButtonModel *_buttonInfo;
    AWEIMMessageShowAnimationModel *_animateModel;
    NSString *_groupDescriptionString;
}

@property (copy, nonatomic) NSString *activityName;
@property (copy, nonatomic) NSString *activityID;
@property (copy, nonatomic) NSString *activityInfo;
@property (copy, nonatomic) NSArray *emojiURL;
@property (nonatomic) BOOL hasEmojiIntro;
@property (retain, nonatomic) AFDRadarActivityBannerModel *bannerInfo;
@property (retain, nonatomic) AFDRadarFollowButtonModel *buttonInfo;
@property (nonatomic) BOOL hasAvtivity;
@property (retain, nonatomic) AWEIMMessageShowAnimationModel *animateModel;
@property (copy, nonatomic) NSString *groupDescriptionString;

+ (id)buttonInfoJSONTransformer;
+ (id)bannerInfoJSONTransformer;
+ (id)animateModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setActivityInfo:(id)arg0;
- (id)buttonInfo;
- (void)setButtonInfo:(id)arg0;
- (void)setBannerInfo:(id)arg0;
- (id)bannerInfo;
- (BOOL)hasAvtivity;
- (id)emojiURL;
- (id)groupDescriptionString;
- (id)animateModel;
- (void)setAnimateModel:(id)arg0;
- (BOOL)hasEmojiIntro;
- (void)setEmojiURL:(id)arg0;
- (void)setHasEmojiIntro:(BOOL)arg0;
- (void)setHasAvtivity:(BOOL)arg0;
- (void)setGroupDescriptionString:(id)arg0;
- (void).cxx_destruct;
- (id)activityID;
- (id)activityName;
- (void)setActivityID:(id)arg0;
- (void)setActivityName:(id)arg0;
- (id)activityInfo;

@end
