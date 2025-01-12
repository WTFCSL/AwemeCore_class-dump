//
//     Generated by private class-dump
//

@class IESECRecommendReasonModel, IESECFeedLiveRecommendModel, IESECGoodsDetailParameters, IESECGoodsCommentViewModel, NSDictionary, IESECVideoRecommendModel, IESECRelationFeedCommentInfo, NSMutableArray, IESECContext, NSString, IGListSectionController, IESECGoodsFeedRankingCardModel, NSArray, IESECFeedResourceCardModel, IESECHeadVideoModel, IESECRecommendCommonProductModel;

@interface IESECGoodsFeedCellBaseViewModel : NSObject <IGListDiffable, IESECGoodsFeedLargeCardViewModelProtocol> {
    NSArray *_tagModels;
    struct CGSize { double width; double height; } _newSize;
    BOOL _danmakuState;
    BOOL _hideShopButton;
    BOOL _isShowActivityImage;
    BOOL _isManualSlided;
    BOOL _shouldStartAutoSlide;
    BOOL _isFirstCard;
    BOOL _indemnificationOnRight;
    BOOL _hasShownCommentCount;
    BOOL _tagViewDisplayed;
    BOOL _shouldShowSameGoodEntrance;
    BOOL _showSkeleton;
    BOOL _hasLayoutImage;
    BOOL _showindexIndicator;
    long long _index;
    id _delegate;
    IGListSectionController *_sectionDelegate;
    long long _cardType;
    IESECGoodsDetailParameters *_parameters;
    IESECGoodsDetailParameters *_globalParameters;
    long long _carouselIndex;
    NSMutableArray *_sectionsInfo;
    long long _entryLocation;
    IESECFeedLiveRecommendModel *_liveModel;
    IESECVideoRecommendModel *_videoModel;
    IESECGoodsFeedRankingCardModel *_rankingModel;
    IESECFeedResourceCardModel *_resourceCardModel;
    IESECHeadVideoModel *_headVideo;
    IESECRecommendCommonProductModel *_productModel;
    NSString *_resourceBarData;
    NSString *_resourceBarDataRequestID;
    NSArray *_bulletTags;
    NSString *_bizTag;
    NSString *_sceneTag;
    NSString *_exposedMessage;
    NSString *_indemnificationMessage;
    NSString *_indemnificationMessageOnRight;
    double _messageDisplayAlpha;
    double _recommendTagViewAlpha;
    IESECRelationFeedCommentInfo *_commentInfo;
    NSDictionary *_storeTrackInfo;
    IESECGoodsCommentViewModel *_goodsCommentViewModel;
    NSString *_headerText;
    double _tagImageHeight;
    NSString *_discountContent;
    IESECRecommendReasonModel *_recReason;
    long long _searchSameGoodsShow;
    long long _searchSameGoodsShowPosition;
    long long _searchResourceCardStyle;
    long long _searchCardFrequency;
    long long _windowEntryPriority;
    IESECContext *_context;
    IESECContext *_globalContext;
    id /* block */ _bstBindAction;
    NSDictionary *_videoGuideSearchBCM;
    struct CGSize { double width; double height; } _cachedSize;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _containerInsets;
}

@property (nonatomic) long long index;
@property (weak, nonatomic) id delegate;
@property (weak, nonatomic) IGListSectionController *sectionDelegate;
@property (nonatomic) struct CGSize { double width; double height; } cachedSize;
@property (nonatomic) long long cardType;
@property (retain, nonatomic) IESECGoodsDetailParameters *parameters;
@property (retain, nonatomic) IESECGoodsDetailParameters *globalParameters;
@property (nonatomic) long long carouselIndex;
@property (retain, nonatomic) NSMutableArray *sectionsInfo;
@property (nonatomic) long long entryLocation;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } containerInsets;
@property (retain, nonatomic) IESECFeedLiveRecommendModel *liveModel;
@property (retain, nonatomic) IESECVideoRecommendModel *videoModel;
@property (retain, nonatomic) IESECGoodsFeedRankingCardModel *rankingModel;
@property (retain, nonatomic) IESECFeedResourceCardModel *resourceCardModel;
@property (retain, nonatomic) IESECHeadVideoModel *headVideo;
@property (retain, nonatomic) IESECRecommendCommonProductModel *productModel;
@property (copy, nonatomic) NSString *resourceBarData;
@property (copy, nonatomic) NSString *resourceBarDataRequestID;
@property (readonly, nonatomic) NSArray *tagModels;
@property (retain, nonatomic) NSArray *bulletTags;
@property (nonatomic) BOOL danmakuState;
@property (copy, nonatomic) NSString *bizTag;
@property (copy, nonatomic) NSString *sceneTag;
@property (nonatomic) BOOL hideShopButton;
@property (nonatomic) BOOL isShowActivityImage;
@property (nonatomic) BOOL isManualSlided;
@property (nonatomic) BOOL shouldStartAutoSlide;
@property (copy, nonatomic) NSString *exposedMessage;
@property (copy, nonatomic) NSString *indemnificationMessage;
@property (copy, nonatomic) NSString *indemnificationMessageOnRight;
@property (nonatomic) BOOL isFirstCard;
@property (nonatomic) double messageDisplayAlpha;
@property (nonatomic) double recommendTagViewAlpha;
@property (nonatomic) BOOL indemnificationOnRight;
@property (nonatomic) BOOL hasShownCommentCount;
@property (retain, nonatomic) IESECRelationFeedCommentInfo *commentInfo;
@property (copy, nonatomic) NSDictionary *storeTrackInfo;
@property (retain, nonatomic) IESECGoodsCommentViewModel *goodsCommentViewModel;
@property (nonatomic) BOOL tagViewDisplayed;
@property (copy, nonatomic) NSString *headerText;
@property (nonatomic) BOOL shouldShowSameGoodEntrance;
@property (nonatomic) double tagImageHeight;
@property (nonatomic) BOOL showSkeleton;
@property (copy, nonatomic) NSString *discountContent;
@property (retain, nonatomic) IESECRecommendReasonModel *recReason;
@property (nonatomic) BOOL hasLayoutImage;
@property (nonatomic) BOOL showindexIndicator;
@property (nonatomic) long long searchSameGoodsShow;
@property (nonatomic) long long searchSameGoodsShowPosition;
@property (nonatomic) long long searchResourceCardStyle;
@property (nonatomic) long long searchCardFrequency;
@property (nonatomic) long long windowEntryPriority;
@property (retain, nonatomic) IESECContext *context;
@property (weak, nonatomic) IESECContext *globalContext;
@property (copy, nonatomic) id /* block */ bstBindAction;
@property (copy, nonatomic) NSDictionary *videoGuideSearchBCM;
@property (nonatomic) struct CGSize { double width; double height; } newSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)arg0;
- (void)setSectionDelegate:(id)arg0;
- (id)videoModel;
- (void)setVideoModel:(id)arg0;
- (id)productModel;
- (id)sectionDelegate;
- (void)setBizTag:(id)arg0;
- (id)bizTag;
- (void)setCommentInfo:(id)arg0;
- (id)sceneTag;
- (void)setSceneTag:(id)arg0;
- (id)liveModel;
- (void)setLiveModel:(id)arg0;
- (BOOL)isFirstCard;
- (void)setIsFirstCard:(BOOL)arg0;
- (void)setGlobalContext:(id)arg0;
- (void)setProductModel:(id)arg0;
- (id)tagModels;
- (void)setSectionsInfo:(id)arg0;
- (BOOL)isManualSlided;
- (void)setIsManualSlided:(BOOL)arg0;
- (void)setHasShownCommentCount:(BOOL)arg0;
- (BOOL)indemnificationOnRight;
- (void)setIsShowActivityImage:(BOOL)arg0;
- (void)setHideShopButton:(BOOL)arg0;
- (id)discountContent;
- (void)setDiscountContent:(id)arg0;
- (id)recReason;
- (void)setRecReason:(id)arg0;
- (void)setEntryLocation:(long long)arg0;
- (id)exposedMessage;
- (BOOL)hasLayoutImage;
- (void)setHasLayoutImage:(BOOL)arg0;
- (void)setExposedMessage:(id)arg0;
- (BOOL)isShowActivityImage;
- (double)tagImageHeight;
- (void)setTagImageHeight:(double)arg0;
- (id)headVideo;
- (void)setHeadVideo:(id)arg0;
- (id)resourceCardModel;
- (void)setResourceCardModel:(id)arg0;
- (id)resourceBarData;
- (void)setResourceBarData:(id)arg0;
- (struct CGSize { double x0; double x1; })calculateCellSizeForContaineSize:(struct CGSize { double x0; double x1; })arg0;
- (id)commonSceneTag;
- (id)goodsCommentViewModel;
- (long long)searchSameGoodsShowPosition;
- (id)indemnificationMessage;
- (void)setCarouselIndex:(long long)arg0;
- (long long)carouselIndex;
- (void)setBstBindAction:(id /* block */)arg0;
- (id /* block */)bstBindAction;
- (BOOL)shouldShowSameGoodEntrance;
- (id)indemnificationMessageOnRight;
- (id)resourceBarDataRequestID;
- (struct CGSize { double x0; double x1; })newSize;
- (struct CGSize { double x0; double x1; })cellSizeForContaineSize:(struct CGSize { double x0; double x1; })arg0;
- (BOOL)showRecReason;
- (BOOL)isAvaliable;
- (id)videoGuideSearchBCM;
- (long long)entryLocation;
- (void)setContainerInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (id)rankingModel;
- (void)setRankingModel:(id)arg0;
- (void)setResourceBarDataRequestID:(id)arg0;
- (id)bulletTags;
- (void)setBulletTags:(id)arg0;
- (BOOL)danmakuState;
- (void)setDanmakuState:(BOOL)arg0;
- (BOOL)hideShopButton;
- (BOOL)shouldStartAutoSlide;
- (void)setShouldStartAutoSlide:(BOOL)arg0;
- (void)setIndemnificationMessage:(id)arg0;
- (void)setIndemnificationMessageOnRight:(id)arg0;
- (double)messageDisplayAlpha;
- (void)setMessageDisplayAlpha:(double)arg0;
- (double)recommendTagViewAlpha;
- (void)setRecommendTagViewAlpha:(double)arg0;
- (void)setIndemnificationOnRight:(BOOL)arg0;
- (BOOL)hasShownCommentCount;
- (id)storeTrackInfo;
- (void)setStoreTrackInfo:(id)arg0;
- (void)setGoodsCommentViewModel:(id)arg0;
- (BOOL)tagViewDisplayed;
- (void)setTagViewDisplayed:(BOOL)arg0;
- (void)setShouldShowSameGoodEntrance:(BOOL)arg0;
- (BOOL)showSkeleton;
- (void)setShowSkeleton:(BOOL)arg0;
- (BOOL)showindexIndicator;
- (void)setShowindexIndicator:(BOOL)arg0;
- (long long)searchSameGoodsShow;
- (void)setSearchSameGoodsShow:(long long)arg0;
- (void)setSearchSameGoodsShowPosition:(long long)arg0;
- (long long)searchResourceCardStyle;
- (void)setSearchResourceCardStyle:(long long)arg0;
- (long long)searchCardFrequency;
- (void)setSearchCardFrequency:(long long)arg0;
- (long long)windowEntryPriority;
- (void)setWindowEntryPriority:(long long)arg0;
- (void)setVideoGuideSearchBCM:(id)arg0;
- (void)setNewSize:(struct CGSize { double x0; double x1; })arg0;
- (id)sectionsInfo;
- (void)setIndex:(long long)arg0;
- (id)init;
- (id)headerText;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (struct CGSize { double x0; double x1; })cachedSize;
- (void)setCachedSize:(struct CGSize { double x0; double x1; })arg0;
- (id)delegate;
- (long long)index;
- (id)context;
- (void)setParameters:(id)arg0;
- (void)setDelegate:(id)arg0;
- (id)parameters;
- (void)setHeaderText:(id)arg0;
- (long long)cardType;
- (void)setCardType:(long long)arg0;
- (id)globalContext;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })containerInsets;
- (id)globalParameters;
- (void)setGlobalParameters:(id)arg0;
- (void)updateSize:(struct CGSize { double x0; double x1; })arg0;
- (id)commentInfo;

@end
