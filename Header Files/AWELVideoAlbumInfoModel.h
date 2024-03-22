//
//     Generated by private class-dump
//

@class AWEPaymentEntertainmentProductModel, NSString, NSArray, AWELongVideoInteractControlInfoModel, AWELVideoAdInfoModel, AWEURLModel, AWELVideoXiguaGuideModel, AWEPaymentChargeInfoModel, AWELVideoPaymentInfo, NSNumber;

@interface AWELVideoAlbumInfoModel : MTLModel <MTLJSONSerializing> {
    BOOL _isCollect;
    BOOL _isLocatedAlbum;
    BOOL _isSelected;
    BOOL _isDRM;
    BOOL _supportTotalAlbumPayment;
    NSString *_albumID;
    NSString *_title;
    NSString *_subTitle;
    long long _status;
    long long _episodeUpdateAt;
    long long _seqsCount;
    long long _seriesRank;
    NSString *_seriesTab;
    NSString *_seriesID;
    long long _label;
    NSString *_labelText;
    NSArray *_rewardList;
    NSArray *_categoryStrType;
    NSArray *_categoryStrTopic;
    NSString *_region;
    long long _releaseTime;
    AWEURLModel *_cover;
    NSArray *_coverList;
    NSArray *_largeCoverList;
    NSArray *_mediumCoverList;
    NSArray *_thumbCoverList;
    NSArray *_actorList;
    NSString *_intro;
    NSString *_updateCycle;
    long long _pattern;
    NSArray *_languageList;
    long long _duration;
    NSArray *_albumTypeList;
    long long _collectCount;
    NSNumber *_groupSource;
    NSString *_score;
    NSString *_awemeID;
    AWELVideoAdInfoModel *_adInfo;
    long long _playVVCount;
    AWELVideoPaymentInfo *_paymentInfo;
    AWELongVideoInteractControlInfoModel *_interactControlInfo;
    AWELVideoXiguaGuideModel *_xiguaGuide;
    AWEPaymentChargeInfoModel *_paymentChargeInfo;
    AWEPaymentEntertainmentProductModel *_paymentProductInfo;
    long long _albumTag;
    long long _totalChargeCount;
    long long _remainChargeCount;
}

@property (copy, nonatomic) NSString *albumID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) long long status;
@property (nonatomic) long long episodeUpdateAt;
@property (nonatomic) long long seqsCount;
@property (nonatomic) long long seriesRank;
@property (copy, nonatomic) NSString *seriesTab;
@property (copy, nonatomic) NSString *seriesID;
@property (nonatomic) long long label;
@property (copy, nonatomic) NSString *labelText;
@property (copy, nonatomic) NSArray *rewardList;
@property (copy, nonatomic) NSArray *categoryStrType;
@property (copy, nonatomic) NSArray *categoryStrTopic;
@property (copy, nonatomic) NSString *region;
@property (nonatomic) long long releaseTime;
@property (retain, nonatomic) AWEURLModel *cover;
@property (copy, nonatomic) NSArray *coverList;
@property (copy, nonatomic) NSArray *largeCoverList;
@property (copy, nonatomic) NSArray *mediumCoverList;
@property (copy, nonatomic) NSArray *thumbCoverList;
@property (copy, nonatomic) NSArray *actorList;
@property (copy, nonatomic) NSString *intro;
@property (copy, nonatomic) NSString *updateCycle;
@property (nonatomic) long long pattern;
@property (copy, nonatomic) NSArray *languageList;
@property (nonatomic) long long duration;
@property (copy, nonatomic) NSArray *albumTypeList;
@property (nonatomic) BOOL isCollect;
@property (nonatomic) long long collectCount;
@property (nonatomic) BOOL isLocatedAlbum;
@property (retain, nonatomic) NSNumber *groupSource;
@property (copy, nonatomic) NSString *score;
@property (copy, nonatomic) NSString *awemeID;
@property (retain, nonatomic) AWELVideoAdInfoModel *adInfo;
@property (nonatomic) long long playVVCount;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL isDRM;
@property (retain, nonatomic) AWELVideoPaymentInfo *paymentInfo;
@property (retain, nonatomic) AWELongVideoInteractControlInfoModel *interactControlInfo;
@property (retain, nonatomic) AWELVideoXiguaGuideModel *xiguaGuide;
@property (retain, nonatomic) AWEPaymentChargeInfoModel *paymentChargeInfo;
@property (retain, nonatomic) AWEPaymentEntertainmentProductModel *paymentProductInfo;
@property (nonatomic) long long albumTag;
@property (nonatomic) long long totalChargeCount;
@property (nonatomic) long long remainChargeCount;
@property (nonatomic) BOOL supportTotalAlbumPayment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverJSONTransformer;
+ (id)coverListJSONTransformer;
+ (id)largeCoverListJSONTransformer;
+ (id)mediumCoverListJSONTransformer;
+ (id)thumbCoverListJSONTransformer;
+ (id)paymentInfoJSONTransformer;
+ (id)interactControlInfoJSONTransformer;
+ (id)xiguaGuideJSONTransformer;
+ (id)actorListJSONTransformer;
+ (id)languageListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)cover;
- (void)setCover:(id)arg0;
- (void)setAwemeID:(id)arg0;
- (id)awemeID;
- (void)setAdInfo:(id)arg0;
- (id)adInfo;
- (void)setIntro:(id)arg0;
- (long long)collectCount;
- (void)setCollectCount:(long long)arg0;
- (void)setAlbumID:(id)arg0;
- (long long)seqsCount;
- (void)setSeqsCount:(long long)arg0;
- (id)coverList;
- (void)setCoverList:(id)arg0;
- (id)largeCoverList;
- (void)setLargeCoverList:(id)arg0;
- (id)mediumCoverList;
- (void)setMediumCoverList:(id)arg0;
- (id)thumbCoverList;
- (void)setThumbCoverList:(id)arg0;
- (id)paymentInfo;
- (void)setPaymentInfo:(id)arg0;
- (id)interactControlInfo;
- (void)setInteractControlInfo:(id)arg0;
- (id)xiguaGuide;
- (void)setXiguaGuide:(id)arg0;
- (id)paymentChargeInfo;
- (void)setPaymentChargeInfo:(id)arg0;
- (id)paymentProductInfo;
- (void)setPaymentProductInfo:(id)arg0;
- (id)albumTypeList;
- (long long)episodeUpdateAt;
- (void)setEpisodeUpdateAt:(long long)arg0;
- (long long)seriesRank;
- (void)setSeriesRank:(long long)arg0;
- (id)seriesTab;
- (void)setSeriesTab:(id)arg0;
- (id)seriesID;
- (void)setSeriesID:(id)arg0;
- (id)rewardList;
- (void)setRewardList:(id)arg0;
- (id)categoryStrType;
- (void)setCategoryStrType:(id)arg0;
- (id)categoryStrTopic;
- (void)setCategoryStrTopic:(id)arg0;
- (id)actorList;
- (void)setActorList:(id)arg0;
- (id)updateCycle;
- (void)setUpdateCycle:(id)arg0;
- (void)setLanguageList:(id)arg0;
- (void)setAlbumTypeList:(id)arg0;
- (BOOL)isCollect;
- (void)setIsCollect:(BOOL)arg0;
- (BOOL)isLocatedAlbum;
- (void)setIsLocatedAlbum:(BOOL)arg0;
- (long long)playVVCount;
- (void)setPlayVVCount:(long long)arg0;
- (BOOL)isDRM;
- (void)setIsDRM:(BOOL)arg0;
- (long long)albumTag;
- (void)setAlbumTag:(long long)arg0;
- (long long)totalChargeCount;
- (void)setTotalChargeCount:(long long)arg0;
- (long long)remainChargeCount;
- (void)setRemainChargeCount:(long long)arg0;
- (BOOL)supportTotalAlbumPayment;
- (void)setSupportTotalAlbumPayment:(BOOL)arg0;
- (id)region;
- (void)setRegion:(id)arg0;
- (void)setScore:(id)arg0;
- (id)score;
- (void)setIsSelected:(BOOL)arg0;
- (void)setLabelText:(id)arg0;
- (void).cxx_destruct;
- (long long)status;
- (long long)releaseTime;
- (void)setLabel:(long long)arg0;
- (id)labelText;
- (long long)duration;
- (id)title;
- (void)setReleaseTime:(long long)arg0;
- (void)setStatus:(long long)arg0;
- (void)setSubTitle:(id)arg0;
- (long long)label;
- (id)subTitle;
- (long long)pattern;
- (BOOL)isSelected;
- (void)setTitle:(id)arg0;
- (void)setDuration:(long long)arg0;
- (long long)albumType;
- (id)intro;
- (id)albumID;
- (id)groupSource;
- (void)setGroupSource:(id)arg0;
- (void)setPattern:(long long)arg0;
- (id)languageList;

@end
