//
//     Generated by private class-dump
//

@class AWEUserModel, NSString, NSArray, AWEUserBrandInfoModel, NSNumber, AWEURLModel;

@interface AWESearchAdStarEndorsementModel : MTLModel <MTLJSONSerializing> {
    BOOL _isPreview;
    long long _adType;
    NSNumber *_adID;
    NSNumber *_creativeID;
    NSString *_type;
    NSString *_title;
    NSString *_label;
    NSString *_source;
    NSString *_logExtra;
    NSString *_webURL;
    NSString *_webTitle;
    NSString *_openURL;
    NSString *_ironManURL;
    AWEURLModel *_trackURLList;
    AWEURLModel *_clickTrackURLList;
    NSArray *_adImageURLList;
    NSArray *_challengeList;
    AWEUserBrandInfoModel *_brandInfoModel;
    NSString *_guideText;
    long long _nativeType;
    long long _countdown;
    NSArray *_iconList;
    NSString *_subText;
    AWEUserModel *_advertiserInfo;
    NSArray *_advancedInfos;
    NSString *_eAdInfo;
    long long _adStyleType;
}

@property (nonatomic) long long adType;
@property (retain, nonatomic) NSNumber *adID;
@property (retain, nonatomic) NSNumber *creativeID;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSString *webURL;
@property (copy, nonatomic) NSString *webTitle;
@property (copy, nonatomic) NSString *openURL;
@property (copy, nonatomic) NSString *ironManURL;
@property (retain, nonatomic) AWEURLModel *trackURLList;
@property (retain, nonatomic) AWEURLModel *clickTrackURLList;
@property (nonatomic) BOOL isPreview;
@property (copy, nonatomic) NSArray *adImageURLList;
@property (copy, nonatomic) NSArray *challengeList;
@property (retain, nonatomic) AWEUserBrandInfoModel *brandInfoModel;
@property (copy, nonatomic) NSString *guideText;
@property (nonatomic) long long nativeType;
@property (nonatomic) long long countdown;
@property (copy, nonatomic) NSArray *iconList;
@property (copy, nonatomic) NSString *subText;
@property (retain, nonatomic) AWEUserModel *advertiserInfo;
@property (copy, nonatomic) NSArray *advancedInfos;
@property (copy, nonatomic) NSString *eAdInfo;
@property (nonatomic) long long adStyleType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconListJSONTransformer;
+ (id)challengeListJSONTransformer;
+ (id)brandInfoModelJSONTransformer;
+ (id)trackURLListJSONTransformer;
+ (id)clickTrackURLListJSONTransformer;
+ (id)advertiserInfoJSONTransformer;
+ (id)adImageURLListJSONTransformer;
+ (id)advancedInfosJSONTransformer;
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
- (id)subText;
- (void)setGuideText:(id)arg0;
- (id)guideText;
- (id)webTitle;
- (id)ironManURL;
- (void)setTrackURLList:(id)arg0;
- (void)setClickTrackURLList:(id)arg0;
- (void)setIronManURL:(id)arg0;
- (void)setSubText:(id)arg0;
- (id)iconList;
- (void)setIconList:(id)arg0;
- (id)challengeList;
- (void)setChallengeList:(id)arg0;
- (long long)adStyleType;
- (void)setAdStyleType:(long long)arg0;
- (id)eAdInfo;
- (void)setEAdInfo:(id)arg0;
- (void)setNativeType:(long long)arg0;
- (id)advancedInfos;
- (id)advertiserInfo;
- (BOOL)hasLinkName;
- (id)adImageURLList;
- (void)setAdImageURLList:(id)arg0;
- (id)brandInfoModel;
- (void)setBrandInfoModel:(id)arg0;
- (void)setAdvertiserInfo:(id)arg0;
- (void)setAdvancedInfos:(id)arg0;
- (id)source;
- (void).cxx_destruct;
- (id)webURL;
- (void)setWebURL:(id)arg0;
- (id)type;
- (void)setLabel:(id)arg0;
- (id)title;
- (void)setType:(id)arg0;
- (BOOL)isPreview;
- (long long)adType;
- (void)setSource:(id)arg0;
- (id)label;
- (void)setTitle:(id)arg0;
- (long long)countdown;
- (void)setCountdown:(long long)arg0;
- (id)openURL;
- (double)cellHeight;
- (void)setAdType:(long long)arg0;
- (void)setIsPreview:(BOOL)arg0;
- (id)creativeID;
- (long long)nativeType;

@end
