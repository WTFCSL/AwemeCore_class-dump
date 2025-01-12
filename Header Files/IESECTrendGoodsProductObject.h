//
//     Generated by private class-dump
//

@class IESECTrendGoodsProductPriceModel, NSString, IESECFeedPromotionWrapperModel, NSNumber;
@protocol IESECRelationGoodsCardViewModelDelegate;

@interface IESECTrendGoodsProductObject : NSObject <IESECRelationCoverComponentProtocol, IESECRelationTitleComponentProtocol, IESECRelationPriceComponentProtocol, IESECRelationSalesComponentProtocol, IESECRelationRecommendComponentProtocol, IESECRelationTagsComponentProtocol, IESECRelationGoodsSourceComponentProtocol, IESECRelationDepositComponentProtocol> {
    BOOL shouldShowArrivalTag;
    BOOL showDeposit;
    BOOL _newStyle;
    BOOL _showPriceSuffix;
    NSString *arrivalTime;
    NSNumber *goodsDeposit;
    double tagHeight;
    long long titleLines;
    id<IESECRelationGoodsCardViewModelDelegate> _delegate;
    NSNumber *_priceWidth;
    NSNumber *_depositWidth;
    NSString *_bizTag;
    NSString *_sceneTag;
    long long _maximumNumberOfTags;
    long long _maximumNumberOfDiscountTags;
    IESECFeedPromotionWrapperModel *_model;
    IESECTrendGoodsProductPriceModel *_priceModel;
}

@property (retain, nonatomic) IESECFeedPromotionWrapperModel *model;
@property (retain, nonatomic) IESECTrendGoodsProductPriceModel *priceModel;
@property (weak, nonatomic) id<IESECRelationGoodsCardViewModelDelegate> delegate;
@property (retain, nonatomic) NSNumber *priceWidth;
@property (retain, nonatomic) NSNumber *depositWidth;
@property (nonatomic) BOOL newStyle;
@property (nonatomic) BOOL showPriceSuffix;
@property (copy, nonatomic) NSString *bizTag;
@property (copy, nonatomic) NSString *sceneTag;
@property (nonatomic) long long maximumNumberOfTags;
@property (nonatomic) long long maximumNumberOfDiscountTags;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)goodsTitle;
- (void)setBizTag:(id)arg0;
- (id)bizTag;
- (id)sceneTag;
- (void)setSceneTag:(id)arg0;
- (BOOL)newStyle;
- (void)setNewStyle:(BOOL)arg0;
- (double)tagHeight;
- (long long)titleLines;
- (void)setPriceModel:(id)arg0;
- (id)priceModel;
- (BOOL)isSecKill;
- (BOOL)hideSales;
- (BOOL)showRecommendInfoArea;
- (id)priceWidth;
- (BOOL)showDeposit;
- (id)depositWidth;
- (BOOL)showGoodsTagArea;
- (BOOL)showGoodsJumpArea;
- (id)goodsPriceModel;
- (id)goodsJumpText;
- (id)discountTagArray;
- (id)serviceTagArray;
- (BOOL)showGoodsStatusArea;
- (id)goodsStatusInfo;
- (id)goodsImageArray;
- (BOOL)showVerticalImage;
- (id)verticalGoodsImageArray;
- (BOOL)shouldShowArrivalTag;
- (id)goodsTitleTagArray;
- (id)goodsPricePrefix;
- (id)goodsPriceSuffix;
- (id)goodsSalesCount;
- (id)recommendRitTag;
- (id)previledgeTagArray;
- (long long)maximumNumberOfTags;
- (long long)maximumNumberOfDiscountTags;
- (void)clickGoodsSource;
- (id)goodsJumpIcon;
- (id)goodsJumpUrl;
- (BOOL)showIconBorder;
- (BOOL)isSolidLine;
- (void)setShowDeposit:(BOOL)arg0;
- (id)goodsDepositPrefix;
- (id)goodsDeposit;
- (void)setGoodsDeposit:(id)arg0;
- (void)setPriceWidth:(id)arg0;
- (void)setDepositWidth:(id)arg0;
- (BOOL)showPriceSuffix;
- (void)setShowPriceSuffix:(BOOL)arg0;
- (void)setMaximumNumberOfTags:(long long)arg0;
- (void)setMaximumNumberOfDiscountTags:(long long)arg0;
- (id)initWithModel:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)arrivalTime;

@end
