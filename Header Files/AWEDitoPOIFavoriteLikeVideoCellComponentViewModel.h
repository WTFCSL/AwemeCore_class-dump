//
//     Generated by private class-dump
//

@class NSString, AWEPOIContentItemModel, AWEDitoPOIFavoriteLikeVideoCellComponentView, AWEDitoPOIFavoritePageContext, AWEAwemeModel;

@interface AWEDitoPOIFavoriteLikeVideoCellComponentViewModel : DitoComponentViewModel <AWEPOISyncFeedExtensionGetModelProtocol> {
    BOOL _shouldAddQuotation;
    AWEDitoPOIFavoriteLikeVideoCellComponentView *_cell;
    NSString *_poiId;
    NSString *_coverUrl;
    NSString *_poiName;
    NSString *_category;
    long long _price;
    NSString *_priceText;
    NSString *_bizAreaName;
    NSString *_distance;
    NSString *_spuName;
    NSString *_spuIconUrl;
    long long _spuPrice;
    NSString *_spuPriceText;
    NSString *_descriptionText;
    NSString *_likeTime;
    AWEAwemeModel *_aweme;
    AWEPOIContentItemModel *_poiInfo;
}

@property (weak, nonatomic) AWEDitoPOIFavoritePageContext *context;
@property (retain, nonatomic) AWEPOIContentItemModel *poiInfo;
@property (weak, nonatomic) AWEDitoPOIFavoriteLikeVideoCellComponentView *cell;
@property (copy, nonatomic) NSString *poiId;
@property (copy, nonatomic) NSString *coverUrl;
@property (copy, nonatomic) NSString *poiName;
@property (copy, nonatomic) NSString *category;
@property (nonatomic) long long price;
@property (copy, nonatomic) NSString *priceText;
@property (copy, nonatomic) NSString *bizAreaName;
@property (copy, nonatomic) NSString *distance;
@property (copy, nonatomic) NSString *spuName;
@property (copy, nonatomic) NSString *spuIconUrl;
@property (nonatomic) long long spuPrice;
@property (copy, nonatomic) NSString *spuPriceText;
@property (copy, nonatomic) NSString *descriptionText;
@property (nonatomic) BOOL shouldAddQuotation;
@property (copy, nonatomic) NSString *likeTime;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (readonly, nonatomic) long long lineCount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)poiInfo;
- (id)aweme;
- (void)setCoverUrl:(id)arg0;
- (void)setAweme:(id)arg0;
- (id)poiName;
- (id)coverUrl;
- (void)setPoiName:(id)arg0;
- (void)setPoiInfo:(id)arg0;
- (id)spuName;
- (void)setSpuName:(id)arg0;
- (id)getAwemeModel;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)arg0;
- (void)bindStateAndAction;
- (id)bizAreaName;
- (long long)spuPrice;
- (id)trackParamsForAutoTrackWithEventName:(id)arg0 params:(id)arg1;
- (void)openFeed;
- (void)setBizAreaName:(id)arg0;
- (id)syncFeedManager;
- (void)trackClickWithAreaString:(id)arg0;
- (void)setSpuPrice:(long long)arg0;
- (BOOL)checkValidityWithLineIndex:(long long)arg0;
- (BOOL)shouldAddQuotation;
- (id)spuPriceText;
- (id)likeTime;
- (void)openPOIDetail;
- (id)spuIconUrl;
- (void)setSpuIconUrl:(id)arg0;
- (void)setSpuPriceText:(id)arg0;
- (void)setShouldAddQuotation:(BOOL)arg0;
- (void)setLikeTime:(id)arg0;
- (long long)price;
- (id)distance;
- (void)setDistance:(id)arg0;
- (id)category;
- (void)setDescriptionText:(id)arg0;
- (void).cxx_destruct;
- (id)initWithNode:(id)arg0;
- (void)setCategory:(id)arg0;
- (long long)lineCount;
- (id)descriptionText;
- (id)cell;
- (void)setCell:(id)arg0;
- (void)setPrice:(long long)arg0;
- (id)poiId;
- (void)setPoiId:(id)arg0;
- (id)priceText;
- (void)setPriceText:(id)arg0;

@end
