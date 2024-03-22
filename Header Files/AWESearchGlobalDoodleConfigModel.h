//
//     Generated by private class-dump
//

@class AWESearchFeelGoodEntranceIconModel, NSString, AWESearchGoodsFeedbackModel, AWESearchNoResultModel, NSArray, AWESearchFeelGoodModel, NSDictionary, AWESearchGSInfoModel, AWESearchGlobalCartModel, AWEEcomSearchInsertCouponConfigModel, AWESearchTagExtraStarUrlModel;

@interface AWESearchGlobalDoodleConfigModel : AWEBaseApiModel {
    BOOL _showFeedback;
    BOOL _isSearchSupermarket;
    NSString *_useNewShopTagIcon;
    NSDictionary *_userServiceLogInfo;
    NSString *_keyword;
    long long _resultFrom;
    long long _shownCount;
    AWESearchGoodsFeedbackModel *_feedbackConfig;
    AWESearchFeelGoodModel *_feelGoodModel;
    AWESearchNoResultModel *_noResultConfig;
    NSArray *_pushTimeFeedOutLynxModel;
    NSArray *_filterSections;
    long long _queryCorrectType;
    long long _loadmorePreloadThreshold;
    NSString *_feedbackTitle;
    NSString *_feedbackSubtitle;
    NSDictionary *_feedbackIntentInfo;
    AWESearchFeelGoodEntranceIconModel *_feedbackEntranceIcon;
    long long _feedbackShowTipsType;
    double _feedbackShowTipsDurationMS;
    double _feedbackShowTipsStartDelayMS;
    long long _feedbackEntranceType;
    NSString *_searchScheme;
    NSDictionary *_filterSearchText;
    NSString *_format;
    AWESearchGSInfoModel *_gsInfo;
    NSDictionary *_toastInfo;
    NSArray *_filterDeleteList;
    NSString *_pendantToast;
    AWESearchGlobalCartModel *_shoppingCart;
    NSString *_liveInnerSearchChangeChannel;
    NSString *_liveInnerSearchChangeEnterFrom;
    AWEEcomSearchInsertCouponConfigModel *_insertCouponConfig;
    NSDictionary *_pitayaData;
    long long _liveInfoBreathStyle;
    AWESearchTagExtraStarUrlModel *_liveIconUrl;
    long long _enterButtonStyle;
    NSString *_bottomTips;
    NSString *_ecomSameCntText;
    long long _ecomSameCnt;
}

@property (copy, nonatomic) NSString *useNewShopTagIcon;
@property (copy, nonatomic) NSDictionary *userServiceLogInfo;
@property (copy, nonatomic) NSString *keyword;
@property (nonatomic) long long resultFrom;
@property (nonatomic) long long shownCount;
@property (retain, nonatomic) AWESearchGoodsFeedbackModel *feedbackConfig;
@property (retain, nonatomic) AWESearchFeelGoodModel *feelGoodModel;
@property (retain, nonatomic) AWESearchNoResultModel *noResultConfig;
@property (retain, nonatomic) NSArray *pushTimeFeedOutLynxModel;
@property (copy, nonatomic) NSArray *filterSections;
@property (nonatomic) long long queryCorrectType;
@property (nonatomic) long long loadmorePreloadThreshold;
@property (nonatomic) BOOL showFeedback;
@property (copy, nonatomic) NSString *feedbackTitle;
@property (copy, nonatomic) NSString *feedbackSubtitle;
@property (copy, nonatomic) NSDictionary *feedbackIntentInfo;
@property (retain, nonatomic) AWESearchFeelGoodEntranceIconModel *feedbackEntranceIcon;
@property (nonatomic) long long feedbackShowTipsType;
@property (nonatomic) double feedbackShowTipsDurationMS;
@property (nonatomic) double feedbackShowTipsStartDelayMS;
@property (nonatomic) long long feedbackEntranceType;
@property (copy, nonatomic) NSString *searchScheme;
@property (copy, nonatomic) NSDictionary *filterSearchText;
@property (copy, nonatomic) NSString *format;
@property (retain, nonatomic) AWESearchGSInfoModel *gsInfo;
@property (copy, nonatomic) NSDictionary *toastInfo;
@property (retain, nonatomic) NSArray *filterDeleteList;
@property (copy, nonatomic) NSString *pendantToast;
@property (retain, nonatomic) AWESearchGlobalCartModel *shoppingCart;
@property (copy, nonatomic) NSString *liveInnerSearchChangeChannel;
@property (copy, nonatomic) NSString *liveInnerSearchChangeEnterFrom;
@property (retain, nonatomic) AWEEcomSearchInsertCouponConfigModel *insertCouponConfig;
@property (copy, nonatomic) NSDictionary *pitayaData;
@property (nonatomic) long long liveInfoBreathStyle;
@property (retain, nonatomic) AWESearchTagExtraStarUrlModel *liveIconUrl;
@property (nonatomic) long long enterButtonStyle;
@property (copy, nonatomic) NSString *bottomTips;
@property (copy, nonatomic) NSString *ecomSameCntText;
@property (nonatomic) long long ecomSameCnt;
@property (nonatomic) BOOL isSearchSupermarket;

+ (id)feedbackConfigJSONTransformer;
+ (id)filterSectionsJSONTransformer;
+ (id)insertCouponConfigJSONTransformer;
+ (id)pushTimeFeedOutLynxModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (long long)resultFrom;
- (void)setResultFrom:(long long)arg0;
- (id)useNewShopTagIcon;
- (void)setUseNewShopTagIcon:(id)arg0;
- (id)userServiceLogInfo;
- (void)setUserServiceLogInfo:(id)arg0;
- (long long)shownCount;
- (void)setShownCount:(long long)arg0;
- (id)feedbackConfig;
- (void)setFeedbackConfig:(id)arg0;
- (id)feelGoodModel;
- (void)setFeelGoodModel:(id)arg0;
- (id)noResultConfig;
- (void)setNoResultConfig:(id)arg0;
- (id)pushTimeFeedOutLynxModel;
- (void)setPushTimeFeedOutLynxModel:(id)arg0;
- (id)filterSections;
- (void)setFilterSections:(id)arg0;
- (long long)queryCorrectType;
- (void)setQueryCorrectType:(long long)arg0;
- (long long)loadmorePreloadThreshold;
- (void)setLoadmorePreloadThreshold:(long long)arg0;
- (BOOL)showFeedback;
- (void)setShowFeedback:(BOOL)arg0;
- (id)feedbackTitle;
- (void)setFeedbackTitle:(id)arg0;
- (id)feedbackSubtitle;
- (void)setFeedbackSubtitle:(id)arg0;
- (id)feedbackIntentInfo;
- (void)setFeedbackIntentInfo:(id)arg0;
- (id)feedbackEntranceIcon;
- (void)setFeedbackEntranceIcon:(id)arg0;
- (long long)feedbackShowTipsType;
- (void)setFeedbackShowTipsType:(long long)arg0;
- (double)feedbackShowTipsDurationMS;
- (void)setFeedbackShowTipsDurationMS:(double)arg0;
- (double)feedbackShowTipsStartDelayMS;
- (void)setFeedbackShowTipsStartDelayMS:(double)arg0;
- (long long)feedbackEntranceType;
- (void)setFeedbackEntranceType:(long long)arg0;
- (id)searchScheme;
- (void)setSearchScheme:(id)arg0;
- (id)filterSearchText;
- (void)setFilterSearchText:(id)arg0;
- (id)gsInfo;
- (void)setGsInfo:(id)arg0;
- (id)toastInfo;
- (void)setToastInfo:(id)arg0;
- (id)filterDeleteList;
- (void)setFilterDeleteList:(id)arg0;
- (id)pendantToast;
- (void)setPendantToast:(id)arg0;
- (id)shoppingCart;
- (void)setShoppingCart:(id)arg0;
- (id)liveInnerSearchChangeChannel;
- (void)setLiveInnerSearchChangeChannel:(id)arg0;
- (id)liveInnerSearchChangeEnterFrom;
- (void)setLiveInnerSearchChangeEnterFrom:(id)arg0;
- (id)insertCouponConfig;
- (void)setInsertCouponConfig:(id)arg0;
- (id)pitayaData;
- (void)setPitayaData:(id)arg0;
- (long long)liveInfoBreathStyle;
- (void)setLiveInfoBreathStyle:(long long)arg0;
- (id)liveIconUrl;
- (void)setLiveIconUrl:(id)arg0;
- (long long)enterButtonStyle;
- (void)setEnterButtonStyle:(long long)arg0;
- (id)bottomTips;
- (void)setBottomTips:(id)arg0;
- (id)ecomSameCntText;
- (void)setEcomSameCntText:(id)arg0;
- (long long)ecomSameCnt;
- (void)setEcomSameCnt:(long long)arg0;
- (BOOL)isSearchSupermarket;
- (void)setIsSearchSupermarket:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setFormat:(id)arg0;
- (id)format;
- (void)setKeyword:(id)arg0;
- (id)keyword;

@end