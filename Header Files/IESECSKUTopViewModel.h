//
//     Generated by private class-dump
//

@class IESECSKUDisplayConfig, IESECSKUInfo, NSDictionary, IESECSKUDetailContext, IESECSKUCouponViewModel, IESECSKUNewPriceModel, IESECURLModel, UIColor, NSString, IESECSKUPrice, NSAttributedString, IESECDiscountPrice, IESECSKUModel, NSArray, NSNumber;

@interface IESECSKUTopViewModel : NSObject <IESECSKUViewModelProtocol> {
    IESECDiscountPrice *_discountPrice;
    IESECSKUPrice *_price;
    IESECURLModel *_activityIcon;
    NSArray *_titles;
    NSArray *_images;
    NSArray *_bigImages;
    IESECSKUCouponViewModel *_couponViewModel;
    NSNumber *_priceType;
    IESECSKUModel *_skuModel;
    IESECSKUDetailContext *_detailContext;
    NSDictionary *_imagesMap;
}

@property (retain, nonatomic) IESECSKUModel *skuModel;
@property (retain, nonatomic) IESECSKUDetailContext *detailContext;
@property (retain, nonatomic) IESECDiscountPrice *discountPrice;
@property (retain, nonatomic) IESECSKUPrice *price;
@property (retain, nonatomic) IESECURLModel *activityIcon;
@property (copy, nonatomic) NSDictionary *imagesMap;
@property (readonly, copy, nonatomic) NSString *selectCover;
@property (readonly, copy, nonatomic) NSString *stockInfo;
@property (readonly, nonatomic) BOOL showStockInfo;
@property (readonly, copy, nonatomic) NSString *installmentInfo;
@property (readonly, nonatomic) BOOL hasInstallmentText;
@property (readonly, copy, nonatomic) NSAttributedString *installmentInfoAttr;
@property (readonly, copy, nonatomic) NSString *selectedSKUInfo;
@property (readonly, copy, nonatomic) NSString *depositPrice;
@property (readonly, nonatomic) BOOL isSeckill;
@property (readonly, nonatomic) BOOL isGroupBuy;
@property (readonly, nonatomic) BOOL isDepositPresale;
@property (readonly, nonatomic) IESECSKUInfo *curSKUInfo;
@property (readonly, copy, nonatomic) NSString *curSkuID;
@property (readonly, copy, nonatomic) NSArray *titles;
@property (readonly, copy, nonatomic) NSArray *images;
@property (readonly, copy, nonatomic) NSArray *bigImages;
@property (readonly, nonatomic) unsigned long long imageIndex;
@property (readonly, nonatomic) IESECSKUDisplayConfig *displayConfig;
@property (retain, nonatomic) IESECSKUCouponViewModel *couponViewModel;
@property (readonly, nonatomic) UIColor *atmosphereColor;
@property (readonly, nonatomic) IESECSKUNewPriceModel *minPriceModel;
@property (readonly, nonatomic) IESECSKUNewPriceModel *discountPriceModel;
@property (readonly, nonatomic) IESECSKUNewPriceModel *regularPriceModel;
@property (retain, nonatomic) NSNumber *priceType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)detailContext;
- (void)setDetailContext:(id)arg0;
- (BOOL)isGroupBuy;
- (void)setDiscountPrice:(id)arg0;
- (id)discountPrice;
- (id)depositPrice;
- (void)trackWithEventName:(id)arg0;
- (BOOL)isSeckill;
- (BOOL)isDepositPresale;
- (long long)stockNum;
- (id)minPriceModel;
- (id)discountPriceModel;
- (id)regularPriceModel;
- (BOOL)showStockInfo;
- (id)skuModel;
- (void)setSkuModel:(id)arg0;
- (void)skuModuleShow:(id)arg0 extra:(id)arg1 once:(BOOL)arg2;
- (void)skuModuleClick:(id)arg0 extra:(id)arg1;
- (id)initWithSKUModel:(id)arg0 detailContext:(id)arg1;
- (id)curSkuID;
- (id)couponViewModel;
- (void)setCouponViewModel:(id)arg0;
- (id)installmentInfo;
- (id)atmosphereColor;
- (void)previewDidmissAtIndex:(long long)arg0;
- (id)selectCover;
- (id)selectedSKUInfo;
- (id)curSKUInfo;
- (id)bigImages;
- (id)installmentInfoAttr;
- (long long)getShowPriceStyle;
- (BOOL)isSelectedAllSKUSel;
- (id)headerTag;
- (BOOL)isHeaderTagPositionTop;
- (long long)getDiscountStyle;
- (BOOL)hasInstallmentText;
- (id)stockInfo;
- (long long)getSelectedCount;
- (id)selectedSKUSecondOriginPriceString;
- (id)imagesMap;
- (id)groupBuyPriceTag;
- (void)setImagesMap:(id)arg0;
- (id)price;
- (id)images;
- (void).cxx_destruct;
- (void)setActivityIcon:(id)arg0;
- (id)activityIcon;
- (id)titles;
- (void)setPrice:(id)arg0;
- (id)displayConfig;
- (id)priceType;
- (void)setPriceType:(id)arg0;
- (unsigned long long)imageIndex;
- (id)activityText;

@end
