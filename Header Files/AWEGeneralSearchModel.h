//
//     Generated by private class-dump
//

@class AWEDynamicPatchModel, AWEGeneralSearchVideoDeepQAModel, NSDictionary, AWESearchNormalCardModel, NSMutableArray, AWESearchMovieTopicAladdinModel, AWERecommendWordQueryRecordModel, AWESearchAdModule, AWEGeneralHotSpotDiscussionModel, AWESearchMovieInfoModel, AWESearchVideoGameModel, AWESearchEffectsModel, AWESearchCarBrandModel, AWESearchFeedbackModel, AWEGeneralSearchLogControl, AWESearchMusicAladdinModel, AWEGeneralFilmTelevisionModuleModel, AWESearchPhotoTemplatesModel, AWEGeneralSearchSubCardInfo, AWESearchActivityModel, AWESearchMovieModel, AWESearchDeduplicationConfigModel, NSNumber, AWESearchAladdinStarsBarrageVideoModel, AWEGeneralFilmTelevisionCardModel, AWESearchUIInfoModel, AWECommentModel, AWESearchMerchandiseResultModel, AWESearchVSVideoCardModel, AWESearchEpidemicModel, AWESearchHotSpotAladdinModel, NSArray, AWESearchHotelModel, AWEWordSourceModel, AWESearchCarSeriesModel, AWESearchMixVideoModel, AWEIronManModel, AWEGeneralHotSpotRelatedUserModel, NSString, AWEGeneralSearchCardTagArrayModel, AWETrackerContext, AWEGeneralTopUserStatusModel, AWEGeneralFilmTelevisionTopicModel, AWESearchAdStarEndorsementModel, AWESearchBlankCardModel, AWEGeneralSearchVirtualCombinateCard, AWESearchEcommerceAladdinModel, AWEGeneralFilmTelevisionSeriesModel, AWESearchTeenAlbumCardModel;

@interface AWEGeneralSearchModel : AWEConcernCardModel <IGListDiffable, AWESearchLynxCommonModelProtocol> {
    AWETrackerContext *_searchTrackerContext;
    BOOL _isStarAladdin;
    BOOL _hasMoreMerchandise;
    BOOL _isInNearby;
    BOOL _isFirstItem;
    BOOL _hasMoreLives;
    BOOL _isNeedByteSync;
    BOOL _searchHalfScreenEnabled;
    BOOL _needWaterFallLayout;
    BOOL _discussCardIsIndepent;
    BOOL _grayMode;
    BOOL _isShowedInCommerceScene;
    BOOL _isFirstShowInCommerceScene;
    BOOL _isFullScreenWidth;
    double _deepestCardShowPercent;
    unsigned long long _cardType;
    long long _docID;
    NSString *_fingerprint;
    NSString *_sendBack;
    long long _showTimes;
    NSString *_mainWord;
    long long _dynamicType;
    AWEDynamicPatchModel *_dynamicPatch;
    AWESearchDeduplicationConfigModel *_deduplicationConfig;
    NSMutableArray *_userArray;
    NSMutableArray *_liveArray;
    NSMutableArray *_challengeArray;
    NSMutableArray *_musicArray;
    NSMutableArray *_musicPlayListArray;
    NSMutableArray *_articleArray;
    NSMutableArray *_poiArray;
    NSMutableArray *_searchWordArray;
    NSMutableArray *_searchMerchandiseArray;
    NSMutableArray *_xiguaVideoArray;
    NSMutableArray *_mixVideoArray;
    NSMutableArray *_contentArray;
    AWESearchMovieInfoModel *_movieInfo;
    NSString *_liveTitle;
    AWESearchActivityModel *_activityInfoModel;
    AWESearchActivityModel *_activityLiveInfoModel;
    AWESearchCarBrandModel *_carBrandModel;
    AWESearchCarSeriesModel *_carSeriesModel;
    AWESearchEffectsModel *_effectsModel;
    AWESearchPhotoTemplatesModel *_photoTemplatesModel;
    NSNumber *_rank;
    AWESearchMerchandiseResultModel *_merchandiseResultModel;
    AWESearchHotSpotAladdinModel *_hotSpotAladdinModel;
    AWESearchEcommerceAladdinModel *_ecommerceAladdinModel;
    NSNumber *_hasMoreCards;
    AWEIronManModel *_ironManModel;
    AWESearchAdStarEndorsementModel *_adEndorseModel;
    AWESearchHotelModel *_hotelModel;
    AWESearchMixVideoModel *_mixVideoModel;
    AWESearchVideoGameModel *_gameVideoModel;
    AWESearchNormalCardModel *_normalCardModel;
    AWECommentModel *_commentInfo;
    AWESearchAdModule *_searchAdModule;
    AWERecommendWordQueryRecordModel *_wordsQueryRecord;
    AWEGeneralTopUserStatusModel *_topUserStatusModel;
    AWESearchMusicAladdinModel *_musicRankingModel;
    AWESearchEpidemicModel *_epidemicModel;
    AWEWordSourceModel *_recommWordsModel;
    NSArray *_filmTVModelArray;
    long long _filmTVType;
    NSString *_headerTitle;
    AWEGeneralFilmTelevisionCardModel *_filmTVCardModel;
    AWEGeneralFilmTelevisionTopicModel *_filmTVTopicModel;
    AWEGeneralFilmTelevisionModuleModel *_filmTVModuleModel;
    AWEGeneralFilmTelevisionSeriesModel *_filmTVSeriesModel;
    AWESearchMovieTopicAladdinModel *_topicAladdinModel;
    AWESearchMovieTopicAladdinModel *_movieTopicAladdinModel;
    AWESearchMovieTopicAladdinModel *_tvTopicAladdinModel;
    AWESearchTeenAlbumCardModel *_teenAlbumModel;
    NSString *_aladdinID;
    NSString *_aladdinSource;
    NSString *_alaSrc;
    NSString *_featureAccountTitle;
    AWESearchBlankCardModel *_blankCardModel;
    AWEGeneralSearchModel *_mainCardModel;
    long long _videoIndex;
    AWESearchFeedbackModel *_feedbackModel;
    AWESearchAladdinStarsBarrageVideoModel *_barrageVideoModel;
    AWESearchUIInfoModel *_UIInfoModel;
    NSDictionary *_UIInfo;
    NSArray *_subCardList;
    AWEGeneralSearchSubCardInfo *_subCardInfo;
    NSDictionary *_subCardCommonData;
    AWEGeneralSearchModel *_waterFallLayoutData;
    NSDictionary *_logData;
    AWEGeneralSearchLogControl *_logControl;
    NSArray *_firstCardLogDatas;
    AWESearchVSVideoCardModel *_vsCardInfo;
    AWEGeneralHotSpotDiscussionModel *_discussionModel;
    AWEGeneralHotSpotDiscussionModel *_indepentDiscussModel;
    AWEGeneralHotSpotRelatedUserModel *_relatedUserModel;
    NSString *_lastSsearchGroupId;
    NSString *_currentSearchGroupId;
    NSString *_hideWords;
    NSString *_hideWordsQueryID;
    NSArray *_hideRelatedWords;
    NSArray *_hideRelatedWordIDs;
    NSString *_maskType;
    NSString *_imprExtra;
    NSString *_recommendTitle;
    NSString *_commercePitayaReRankId;
    NSDictionary *_commercePitayaReRankItemParam;
    long long _docType;
    long long _providerDocId;
    double _firstShowTimeInCommerceScene;
    NSString *_adCardName;
    NSDictionary *_layoutInfo;
    AWEGeneralSearchCardTagArrayModel *_cardTagsData;
    NSDictionary *_cardPerfInfo;
    NSString *_cardPerfName;
    AWEGeneralSearchVideoDeepQAModel *_videoDeepQAModel;
}

@property (nonatomic) BOOL searchCardShown;
@property (weak, nonatomic) AWEGeneralSearchVirtualCombinateCard *virtualCombinateCard;
@property (nonatomic) BOOL awe_newSearchDynamicCardShown;
@property (nonatomic) BOOL isDynamicModelPreprocess;
@property (nonatomic) BOOL isPreprocessForWaterfallLayout;
@property (nonatomic) BOOL awe_searchDynamicCardHasShown;
@property (nonatomic) BOOL hideRSCard;
@property (nonatomic) BOOL hideRecomCard;
@property (nonatomic) double containerWidth;
@property (nonatomic) double deepestCardShowPercent;
@property (nonatomic) unsigned long long cardType;
@property (nonatomic) long long docID;
@property (copy, nonatomic) NSString *fingerprint;
@property (copy, nonatomic) NSString *sendBack;
@property (nonatomic) long long showTimes;
@property (copy, nonatomic) NSString *mainWord;
@property (nonatomic) long long dynamicType;
@property (retain, nonatomic) AWEDynamicPatchModel *dynamicPatch;
@property (retain, nonatomic) AWESearchDeduplicationConfigModel *deduplicationConfig;
@property (retain, nonatomic) NSMutableArray *userArray;
@property (retain, nonatomic) NSMutableArray *liveArray;
@property (retain, nonatomic) NSMutableArray *challengeArray;
@property (retain, nonatomic) NSMutableArray *musicArray;
@property (retain, nonatomic) NSMutableArray *musicPlayListArray;
@property (retain, nonatomic) NSMutableArray *articleArray;
@property (retain, nonatomic) NSMutableArray *poiArray;
@property (retain, nonatomic) NSMutableArray *searchWordArray;
@property (retain, nonatomic) NSMutableArray *searchMerchandiseArray;
@property (retain, nonatomic) NSMutableArray *xiguaVideoArray;
@property (retain, nonatomic) NSMutableArray *mixVideoArray;
@property (retain, nonatomic) NSMutableArray *contentArray;
@property (nonatomic) BOOL isStarAladdin;
@property (readonly, nonatomic) AWESearchMovieModel *movieModel;
@property (retain, nonatomic) AWESearchMovieInfoModel *movieInfo;
@property (retain, nonatomic) NSString *liveTitle;
@property (retain, nonatomic) AWESearchActivityModel *activityInfoModel;
@property (retain, nonatomic) AWESearchActivityModel *activityLiveInfoModel;
@property (retain, nonatomic) AWESearchCarBrandModel *carBrandModel;
@property (retain, nonatomic) AWESearchCarSeriesModel *carSeriesModel;
@property (retain, nonatomic) AWESearchEffectsModel *effectsModel;
@property (retain, nonatomic) AWESearchPhotoTemplatesModel *photoTemplatesModel;
@property (retain, nonatomic) NSNumber *rank;
@property (retain, nonatomic) AWESearchMerchandiseResultModel *merchandiseResultModel;
@property (retain, nonatomic) AWESearchHotSpotAladdinModel *hotSpotAladdinModel;
@property (retain, nonatomic) AWESearchEcommerceAladdinModel *ecommerceAladdinModel;
@property (nonatomic) BOOL hasMoreMerchandise;
@property (retain, nonatomic) NSNumber *hasMoreCards;
@property (retain, nonatomic) AWEIronManModel *ironManModel;
@property (retain, nonatomic) AWESearchAdStarEndorsementModel *adEndorseModel;
@property (retain, nonatomic) AWESearchHotelModel *hotelModel;
@property (retain, nonatomic) AWESearchMixVideoModel *mixVideoModel;
@property (retain, nonatomic) AWESearchVideoGameModel *gameVideoModel;
@property (retain, nonatomic) AWESearchNormalCardModel *normalCardModel;
@property (retain, nonatomic) AWECommentModel *commentInfo;
@property (retain, nonatomic) AWESearchAdModule *searchAdModule;
@property (retain, nonatomic) AWERecommendWordQueryRecordModel *wordsQueryRecord;
@property (retain, nonatomic) AWEGeneralTopUserStatusModel *topUserStatusModel;
@property (retain, nonatomic) AWESearchMusicAladdinModel *musicRankingModel;
@property (retain, nonatomic) AWESearchEpidemicModel *epidemicModel;
@property (retain, nonatomic) AWEWordSourceModel *recommWordsModel;
@property (retain, nonatomic) NSArray *filmTVModelArray;
@property (nonatomic) long long filmTVType;
@property (copy, nonatomic) NSString *headerTitle;
@property (retain, nonatomic) AWEGeneralFilmTelevisionCardModel *filmTVCardModel;
@property (retain, nonatomic) AWEGeneralFilmTelevisionTopicModel *filmTVTopicModel;
@property (retain, nonatomic) AWEGeneralFilmTelevisionModuleModel *filmTVModuleModel;
@property (retain, nonatomic) AWEGeneralFilmTelevisionSeriesModel *filmTVSeriesModel;
@property (retain, nonatomic) AWESearchMovieTopicAladdinModel *topicAladdinModel;
@property (retain, nonatomic) AWESearchMovieTopicAladdinModel *movieTopicAladdinModel;
@property (retain, nonatomic) AWESearchMovieTopicAladdinModel *tvTopicAladdinModel;
@property (retain, nonatomic) AWESearchTeenAlbumCardModel *teenAlbumModel;
@property (retain, nonatomic) NSString *aladdinID;
@property (copy, nonatomic) NSString *aladdinSource;
@property (copy, nonatomic) NSString *alaSrc;
@property (copy, nonatomic) NSString *featureAccountTitle;
@property (nonatomic) BOOL isInNearby;
@property (nonatomic) BOOL isFirstItem;
@property (retain, nonatomic) AWESearchBlankCardModel *blankCardModel;
@property (retain, nonatomic) AWEGeneralSearchModel *mainCardModel;
@property (nonatomic) long long videoIndex;
@property (nonatomic) BOOL hasMoreLives;
@property (nonatomic) BOOL isNeedByteSync;
@property (retain, nonatomic) AWESearchFeedbackModel *feedbackModel;
@property (retain, nonatomic) AWESearchAladdinStarsBarrageVideoModel *barrageVideoModel;
@property (retain, nonatomic) AWESearchUIInfoModel *UIInfoModel;
@property (retain, nonatomic) NSDictionary *UIInfo;
@property (retain, nonatomic) NSArray *subCardList;
@property (retain, nonatomic) AWEGeneralSearchSubCardInfo *subCardInfo;
@property (retain, nonatomic) NSDictionary *subCardCommonData;
@property (nonatomic) BOOL searchHalfScreenEnabled;
@property (retain, nonatomic) AWEGeneralSearchModel *waterFallLayoutData;
@property (nonatomic) BOOL needWaterFallLayout;
@property (copy, nonatomic) NSDictionary *logData;
@property (retain, nonatomic) AWEGeneralSearchLogControl *logControl;
@property (copy, nonatomic) NSArray *firstCardLogDatas;
@property (retain, nonatomic) AWESearchVSVideoCardModel *vsCardInfo;
@property (retain, nonatomic) AWEGeneralHotSpotDiscussionModel *discussionModel;
@property (retain, nonatomic) AWEGeneralHotSpotDiscussionModel *indepentDiscussModel;
@property (nonatomic) BOOL discussCardIsIndepent;
@property (retain, nonatomic) AWEGeneralHotSpotRelatedUserModel *relatedUserModel;
@property (retain, nonatomic) NSString *lastSsearchGroupId;
@property (retain, nonatomic) NSString *currentSearchGroupId;
@property (copy, nonatomic) NSString *hideWords;
@property (copy, nonatomic) NSString *hideWordsQueryID;
@property (copy, nonatomic) NSArray *hideRelatedWords;
@property (copy, nonatomic) NSArray *hideRelatedWordIDs;
@property (copy, nonatomic) NSString *maskType;
@property (copy, nonatomic) NSString *imprExtra;
@property (copy, nonatomic) NSString *recommendTitle;
@property (nonatomic) BOOL grayMode;
@property (copy, nonatomic) NSString *commercePitayaReRankId;
@property (copy, nonatomic) NSDictionary *commercePitayaReRankItemParam;
@property (nonatomic) long long docType;
@property (nonatomic) long long providerDocId;
@property (nonatomic) BOOL isShowedInCommerceScene;
@property (nonatomic) BOOL isFirstShowInCommerceScene;
@property (nonatomic) double firstShowTimeInCommerceScene;
@property (copy, nonatomic) NSString *adCardName;
@property (copy, nonatomic) NSDictionary *layoutInfo;
@property (nonatomic) BOOL isFullScreenWidth;
@property (retain, nonatomic) AWEGeneralSearchCardTagArrayModel *cardTagsData;
@property (copy, nonatomic) NSDictionary *cardPerfInfo;
@property (copy, nonatomic) NSString *cardPerfName;
@property (retain, nonatomic) AWEGeneralSearchVideoDeepQAModel *videoDeepQAModel;
@property (retain, nonatomic) AWEDynamicPatchModel *commonDynamicPatchModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id /* block */)isEqualBlock;
+ (id)wordsQueryRecordJSONTransformer;
+ (id)correctModelTransformer;
+ (id)feedbackModelJSONTransformer;
+ (id)aladdinIDJSONTransformer;
+ (id)dynamicPatchJSONTransformer;
+ (id)articleArrayJSONTransformer;
+ (BOOL)shouldReuse;
+ (id)hotSpotAladdinModelJSONTransformer;
+ (id)ecommerceAladdinModelJSONTransformer;
+ (id)searchAdModuleJSONTransformer;
+ (id)userArrayJSONTransformer;
+ (id)challengeArrayJSONTransformer;
+ (id)liveArrayJSONTransformer;
+ (id)movieInfoJSONTransformer;
+ (id)musicArrayJSONTransformer;
+ (id)musicPlayListArrayJSONTransformer;
+ (id)searchWordArrayJSONTransformer;
+ (id)poiArrayJSONTransformer;
+ (id)ironManModelTransformer;
+ (id)searchMerchandiseArrayJSONTransformer;
+ (id)xiguaVideoArrayJSONTransformer;
+ (id)filmTVModelArrayJSONTransformer;
+ (id)movieModelJSONTransformer;
+ (id)activityInfoModelJSONTransformer;
+ (id)activityLiveInfoModelJSONTransformer;
+ (id)effectsModelTransformer;
+ (id)photoTemplatesModelTransformer;
+ (id)movieTopicAladdinModelJSONTransformer;
+ (id)tvTopicAladdinModelJSONTransformer;
+ (id)adEndorseModelJSONTransformer;
+ (id)mixVideoModelJSONTransformer;
+ (id)gameVideoModelJSONTransformer;
+ (id)normalCardModelJSONTransformer;
+ (id)carSeriesModelJSONTransformer;
+ (id)carBrandModelJSONTransformer;
+ (id)musicRankingModelJSONTransformer;
+ (id)recommWordsModelJSONTransformer;
+ (id)teenAlbumModelJSONTransformer;
+ (id)blankCardModelJSONTransformer;
+ (id)subCardListJSONTransformer;
+ (id)waterFallLayoutDataJSONTransformer;
+ (id)deduplicationConfigJSONTransformer;
+ (id)logControlJSONTransformer;
+ (id)barrageVideoModelJSONTransformer;
+ (id)UIInfoModelJSONTransformer;
+ (id)discussionModelJSONTransformer;
+ (id)indepentDiscussModelJSONTransformer;
+ (id)relatedUserModelJSONTransformer;
+ (id)cardTagsDataJSONTransformer;
+ (id)videoDeepQAModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)arg0;
- (BOOL)searchCardShown;
- (id)virtualCombinateCard;
- (void)setSearchCardShown:(BOOL)arg0;
- (void)setVirtualCombinateCard:(id)arg0;
- (BOOL)awe_newSearchDynamicCardShown;
- (BOOL)isDynamicModelPreprocess;
- (BOOL)isPreprocessForWaterfallLayout;
- (void)setAwe_newSearchDynamicCardShown:(BOOL)arg0;
- (void)setIsDynamicModelPreprocess:(BOOL)arg0;
- (void)setIsPreprocessForWaterfallLayout:(BOOL)arg0;
- (BOOL)dynamicModelNeedsPreprocess;
- (long long)videoIndex;
- (void)setVideoIndex:(long long)arg0;
- (id)aweme;
- (id)hideWords;
- (id)commentList;
- (void)setCommentInfo:(id)arg0;
- (void)setIsFirstItem:(BOOL)arg0;
- (BOOL)isFirstItem;
- (long long)dynamicType;
- (void)setDynamicType:(long long)arg0;
- (id)commercePitayaReRankId;
- (void)setCommercePitayaReRankId:(id)arg0;
- (id)commercePitayaReRankItemParam;
- (void)setCommercePitayaReRankItemParam:(id)arg0;
- (long long)providerDocId;
- (void)setProviderDocId:(long long)arg0;
- (BOOL)isShowedInCommerceScene;
- (void)setIsShowedInCommerceScene:(BOOL)arg0;
- (BOOL)isFirstShowInCommerceScene;
- (void)setIsFirstShowInCommerceScene:(BOOL)arg0;
- (double)firstShowTimeInCommerceScene;
- (void)setFirstShowTimeInCommerceScene:(double)arg0;
- (id)imprExtra;
- (void)setImprExtra:(id)arg0;
- (id)wordsQueryRecord;
- (void)setWordsQueryRecord:(id)arg0;
- (void)setHideWords:(id)arg0;
- (id)feedbackModel;
- (void)setFeedbackModel:(id)arg0;
- (id)bindLynxViewWrapper;
- (id)aladdinID;
- (id)dynamicPatch;
- (void)setDynamicPatch:(id)arg0;
- (id)aladdinSource;
- (void)setAladdinSource:(id)arg0;
- (long long)showTimes;
- (void)setShowTimes:(long long)arg0;
- (id)mixVideoArray;
- (void)setMixVideoArray:(id)arg0;
- (id)liveTitle;
- (void)setLiveTitle:(id)arg0;
- (id)awemeInVideoFeed;
- (id)searchAdModule;
- (id)userArray;
- (id)awemeModelForAdEndorse;
- (id)UIInfo;
- (id)mainWord;
- (void)setMainWord:(id)arg0;
- (id)recommendTitle;
- (void)setRecommendTitle:(id)arg0;
- (void)setSearchAdModule:(id)arg0;
- (id)articleArray;
- (void)setArticleArray:(id)arg0;
- (void)setAlaSrc:(id)arg0;
- (BOOL)isInNearby;
- (BOOL)isWaterfallLayoutVideo;
- (BOOL)isAdEndorseVideoStyle;
- (BOOL)isAdEndorseStarVideoStyle;
- (id)alaSrc;
- (id)mixVideoModel;
- (void)setMixVideoModel:(id)arg0;
- (id)cardTagsData;
- (id)videoDeepQAModel;
- (id)UIInfoModel;
- (BOOL)isAdEndorseStyle;
- (id)recommWordsModel;
- (void)setVideoDeepQAModel:(id)arg0;
- (void)setUserArray:(id)arg0;
- (double)deepestCardShowPercent;
- (BOOL)searchHalfScreenEnabled;
- (void)setSearchHalfScreenEnabled:(BOOL)arg0;
- (id)filmTVCardModel;
- (id)subCardInfo;
- (void)setUIInfo:(id)arg0;
- (id)challengeArray;
- (id)liveArray;
- (id)barrageVideoModel;
- (BOOL)awe_searchDynamicCardHasShown;
- (void)setAwe_searchDynamicCardHasShown:(BOOL)arg0;
- (long long)generalSearchAdCardTypeForWaterfall;
- (long long)generalSearchCardTypeForWaterfall;
- (BOOL)hideRSCard;
- (BOOL)hideRecomCard;
- (void)setHideRSCard:(BOOL)arg0;
- (void)setHideRecomCard:(BOOL)arg0;
- (void)clearLynxViewWrapper;
- (id)adEndorseModel;
- (id)movieTopicAladdinModel;
- (id)tvTopicAladdinModel;
- (void)setUIInfoModel:(id)arg0;
- (id)commonDynamicPatchModel;
- (void)setCommonDynamicPatchModel:(id)arg0;
- (id)searchTrackerContext;
- (void)setSearchTrackerContext:(id)arg0;
- (id)movieModel;
- (id)hotSpotAladdinModel;
- (long long)videoDeepQACradTypeWith:(id)arg0;
- (BOOL)isAdEndorseCardUser;
- (BOOL)isAdEndroseECommerceVideo;
- (BOOL)discussCardIsIndepent;
- (id)topicAladdinModel;
- (void)copyUIInfoModelFromSearchModel:(id)arg0;
- (void)setDeepestCardShowPercent:(double)arg0;
- (id)sendBack;
- (void)setSendBack:(id)arg0;
- (id)deduplicationConfig;
- (void)setDeduplicationConfig:(id)arg0;
- (void)setLiveArray:(id)arg0;
- (void)setChallengeArray:(id)arg0;
- (id)musicArray;
- (void)setMusicArray:(id)arg0;
- (id)musicPlayListArray;
- (void)setMusicPlayListArray:(id)arg0;
- (id)poiArray;
- (void)setPoiArray:(id)arg0;
- (id)searchWordArray;
- (void)setSearchWordArray:(id)arg0;
- (id)searchMerchandiseArray;
- (void)setSearchMerchandiseArray:(id)arg0;
- (id)xiguaVideoArray;
- (void)setXiguaVideoArray:(id)arg0;
- (id)contentArray;
- (void)setContentArray:(id)arg0;
- (BOOL)isStarAladdin;
- (void)setIsStarAladdin:(BOOL)arg0;
- (id)activityInfoModel;
- (void)setActivityInfoModel:(id)arg0;
- (id)activityLiveInfoModel;
- (void)setActivityLiveInfoModel:(id)arg0;
- (id)carBrandModel;
- (void)setCarBrandModel:(id)arg0;
- (id)carSeriesModel;
- (void)setCarSeriesModel:(id)arg0;
- (id)effectsModel;
- (void)setEffectsModel:(id)arg0;
- (id)photoTemplatesModel;
- (void)setPhotoTemplatesModel:(id)arg0;
- (id)merchandiseResultModel;
- (void)setMerchandiseResultModel:(id)arg0;
- (void)setHotSpotAladdinModel:(id)arg0;
- (id)ecommerceAladdinModel;
- (void)setEcommerceAladdinModel:(id)arg0;
- (BOOL)hasMoreMerchandise;
- (void)setHasMoreMerchandise:(BOOL)arg0;
- (id)hasMoreCards;
- (void)setHasMoreCards:(id)arg0;
- (id)ironManModel;
- (void)setIronManModel:(id)arg0;
- (void)setAdEndorseModel:(id)arg0;
- (id)hotelModel;
- (void)setHotelModel:(id)arg0;
- (id)gameVideoModel;
- (void)setGameVideoModel:(id)arg0;
- (id)normalCardModel;
- (void)setNormalCardModel:(id)arg0;
- (id)topUserStatusModel;
- (void)setTopUserStatusModel:(id)arg0;
- (id)musicRankingModel;
- (void)setMusicRankingModel:(id)arg0;
- (id)epidemicModel;
- (void)setEpidemicModel:(id)arg0;
- (void)setRecommWordsModel:(id)arg0;
- (id)filmTVModelArray;
- (void)setFilmTVModelArray:(id)arg0;
- (long long)filmTVType;
- (void)setFilmTVType:(long long)arg0;
- (void)setFilmTVCardModel:(id)arg0;
- (id)filmTVTopicModel;
- (void)setFilmTVTopicModel:(id)arg0;
- (id)filmTVModuleModel;
- (void)setFilmTVModuleModel:(id)arg0;
- (id)filmTVSeriesModel;
- (void)setFilmTVSeriesModel:(id)arg0;
- (void)setTopicAladdinModel:(id)arg0;
- (void)setMovieTopicAladdinModel:(id)arg0;
- (void)setTvTopicAladdinModel:(id)arg0;
- (id)teenAlbumModel;
- (void)setTeenAlbumModel:(id)arg0;
- (void)setAladdinID:(id)arg0;
- (id)featureAccountTitle;
- (void)setFeatureAccountTitle:(id)arg0;
- (void)setIsInNearby:(BOOL)arg0;
- (id)blankCardModel;
- (void)setBlankCardModel:(id)arg0;
- (id)mainCardModel;
- (void)setMainCardModel:(id)arg0;
- (BOOL)hasMoreLives;
- (void)setHasMoreLives:(BOOL)arg0;
- (BOOL)isNeedByteSync;
- (void)setIsNeedByteSync:(BOOL)arg0;
- (void)setBarrageVideoModel:(id)arg0;
- (id)subCardList;
- (void)setSubCardList:(id)arg0;
- (void)setSubCardInfo:(id)arg0;
- (id)subCardCommonData;
- (void)setSubCardCommonData:(id)arg0;
- (id)waterFallLayoutData;
- (void)setWaterFallLayoutData:(id)arg0;
- (BOOL)needWaterFallLayout;
- (void)setNeedWaterFallLayout:(BOOL)arg0;
- (id)logControl;
- (void)setLogControl:(id)arg0;
- (id)firstCardLogDatas;
- (void)setFirstCardLogDatas:(id)arg0;
- (id)vsCardInfo;
- (void)setVsCardInfo:(id)arg0;
- (id)discussionModel;
- (void)setDiscussionModel:(id)arg0;
- (id)indepentDiscussModel;
- (void)setIndepentDiscussModel:(id)arg0;
- (void)setDiscussCardIsIndepent:(BOOL)arg0;
- (id)relatedUserModel;
- (void)setRelatedUserModel:(id)arg0;
- (id)lastSsearchGroupId;
- (void)setLastSsearchGroupId:(id)arg0;
- (id)currentSearchGroupId;
- (void)setCurrentSearchGroupId:(id)arg0;
- (id)hideWordsQueryID;
- (void)setHideWordsQueryID:(id)arg0;
- (id)hideRelatedWords;
- (void)setHideRelatedWords:(id)arg0;
- (id)hideRelatedWordIDs;
- (void)setHideRelatedWordIDs:(id)arg0;
- (BOOL)grayMode;
- (void)setGrayMode:(BOOL)arg0;
- (id)adCardName;
- (void)setAdCardName:(id)arg0;
- (BOOL)isFullScreenWidth;
- (void)setIsFullScreenWidth:(BOOL)arg0;
- (void)setCardTagsData:(id)arg0;
- (id)cardPerfInfo;
- (void)setCardPerfInfo:(id)arg0;
- (id)cardPerfName;
- (void)setCardPerfName:(id)arg0;
- (long long)videoCountBeforeCard;
- (void)setVideoCountBeforeCard:(long long)arg0;
- (void)setRank:(id)arg0;
- (void)setFingerprint:(id)arg0;
- (id)init;
- (void)setHeaderTitle:(id)arg0;
- (id)rank;
- (id)headerTitle;
- (id)layoutInfo;
- (void).cxx_destruct;
- (id)fingerprint;
- (long long)type;
- (id)logData;
- (void)setLogData:(id)arg0;
- (void)setLayoutInfo:(id)arg0;
- (unsigned long long)cardType;
- (void)setCardType:(unsigned long long)arg0;
- (void)setDocType:(long long)arg0;
- (id)maskType;
- (void)setMaskType:(id)arg0;
- (id)movieInfo;
- (void)setMovieInfo:(id)arg0;
- (long long)docID;
- (void)setDocID:(long long)arg0;
- (long long)docType;
- (void)setContainerWidth:(double)arg0;
- (double)containerWidth;
- (id)commentInfo;

@end
