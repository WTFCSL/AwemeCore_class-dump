//
//     Generated by private class-dump
//

@class NSString, NSArray, AWELifeShelfCardListItemCardDataFlashSale, AWEPageContext, AWELiveShelfPriceModel, NSDictionary, AWELifeShelfCardListItem, AWELifeShelfCardListItemBrandLabel, NSMutableAttributedString, NSMutableArray, YYWebImageOperation, NSNumber;

@interface AWELiveShelfCellViewModel : NSObject {
    BOOL _isCache;
    BOOL _isLocationEnabled;
    BOOL _shouldShowPoiInfo;
    BOOL _isTopItem;
    BOOL _isExplaining;
    BOOL _isPinkBackground;
    BOOL _hasValidTicket;
    BOOL _isSupportBuy;
    BOOL _showSalesLabel;
    BOOL _needUpdateTitle;
    BOOL _needConfigNativeData;
    AWEPageContext *_context;
    unsigned long long _cellType;
    unsigned long long _actionType;
    NSDictionary *_lynxTrackInfo;
    NSDictionary *_roomData4Lynx;
    NSString *_shelfId;
    NSDictionary *_lynxCommonData;
    NSNumber *_liveRoomType;
    NSNumber *_pageType;
    unsigned long long _status;
    unsigned long long _flashStatus;
    NSString *_title;
    NSMutableAttributedString *_attributedTitle;
    NSString *_tagUrl;
    id /* block */ _refreshTitleCallback;
    NSString *_salePoint;
    NSString *_actionBtnTitle;
    NSString *_pricePrefixText;
    NSString *_clickBuyToastText;
    double _serverTime;
    long long _productType;
    NSString *_salesStr;
    NSArray *_iconUrlList;
    NSString *_NumberStr;
    NSString *_imageTagUrlStr;
    NSString *_poiCity;
    long long _cityNumber;
    NSString *_poiDistance;
    NSString *_poiShopTitle;
    long long _shopCount;
    NSString *_deliveryTime;
    NSString *_deliveryText;
    NSString *_distanceInfoType;
    NSMutableArray *_ticketRightList;
    NSArray *_ticketList;
    NSArray *_rightList;
    AWELifeShelfCardListItemBrandLabel *_brandLabel;
    AWELifeShelfCardListItemCardDataFlashSale *_flashSale;
    AWELiveShelfPriceModel *_priceModel;
    double _stock;
    AWELifeShelfCardListItem *_originModel;
    NSString *_cardId;
    NSString *_serviceTagJsonStr;
    long long _tabId;
    NSDictionary *_gaiaXCardData;
    YYWebImageOperation *_tagRequestOperation;
    NSString *_iconUrlStr;
}

@property (nonatomic) BOOL isCache;
@property (nonatomic) unsigned long long actionType;
@property (nonatomic) BOOL isLocationEnabled;
@property (copy, nonatomic) NSDictionary *lynxTrackInfo;
@property (copy, nonatomic) NSDictionary *roomData4Lynx;
@property (copy, nonatomic) NSString *shelfId;
@property (copy, nonatomic) NSDictionary *lynxCommonData;
@property (nonatomic) BOOL shouldShowPoiInfo;
@property (nonatomic) BOOL isExplaining;
@property (nonatomic) BOOL isPinkBackground;
@property (nonatomic) unsigned long long status;
@property (nonatomic) unsigned long long flashStatus;
@property (nonatomic) BOOL hasValidTicket;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableAttributedString *attributedTitle;
@property (copy, nonatomic) NSString *tagUrl;
@property (retain, nonatomic) YYWebImageOperation *tagRequestOperation;
@property (copy, nonatomic) NSString *salePoint;
@property (copy, nonatomic) NSString *actionBtnTitle;
@property (copy, nonatomic) NSString *pricePrefixText;
@property (nonatomic) BOOL isSupportBuy;
@property (copy, nonatomic) NSString *clickBuyToastText;
@property (nonatomic) BOOL showSalesLabel;
@property (copy, nonatomic) NSString *salesStr;
@property (nonatomic) double serverTime;
@property (nonatomic) long long productType;
@property (copy, nonatomic) NSString *iconUrlStr;
@property (copy, nonatomic) NSArray *iconUrlList;
@property (copy, nonatomic) NSString *NumberStr;
@property (copy, nonatomic) NSString *imageTagUrlStr;
@property (copy, nonatomic) NSString *poiCity;
@property (nonatomic) long long cityNumber;
@property (copy, nonatomic) NSString *poiDistance;
@property (copy, nonatomic) NSString *poiShopTitle;
@property (nonatomic) long long shopCount;
@property (copy, nonatomic) NSString *deliveryTime;
@property (copy, nonatomic) NSString *deliveryText;
@property (copy, nonatomic) NSString *distanceInfoType;
@property (copy, nonatomic) NSArray *ticketList;
@property (copy, nonatomic) NSArray *rightList;
@property (retain, nonatomic) NSMutableArray *ticketRightList;
@property (retain, nonatomic) AWELifeShelfCardListItemBrandLabel *brandLabel;
@property (retain, nonatomic) AWELifeShelfCardListItemCardDataFlashSale *flashSale;
@property (retain, nonatomic) AWELiveShelfPriceModel *priceModel;
@property (nonatomic) double stock;
@property (retain, nonatomic) NSNumber *pageType;
@property (nonatomic) long long tabId;
@property (nonatomic) BOOL needUpdateTitle;
@property (nonatomic) BOOL needConfigNativeData;
@property (retain, nonatomic) AWEPageContext *context;
@property (nonatomic) unsigned long long cellType;
@property (nonatomic) BOOL isTopItem;
@property (retain, nonatomic) NSNumber *liveRoomType;
@property (copy, nonatomic) id /* block */ refreshTitleCallback;
@property (weak, nonatomic) AWELifeShelfCardListItem *originModel;
@property (copy, nonatomic) NSString *cardId;
@property (copy, nonatomic) NSString *serviceTagJsonStr;
@property (readonly, nonatomic) NSDictionary *lynxCardData;
@property (copy, nonatomic) NSDictionary *gaiaXCardData;

+ (unsigned long long)flashStatusWithItem:(id)arg0 serverTime:(double)arg1;
+ (unsigned long long)itemStatusWithItem:(id)arg0 flashStautus:(unsigned long long)arg1 serverTime:(double)arg2;
+ (unsigned long long)soldStateWithItem:(id)arg0 serverTime:(double)arg1;
+ (double)crossStripeCellImageSize;
+ (double)commonCellHeight;
+ (double)estimatedCellHeight;

- (long long)tabId;
- (BOOL)isCache;
- (void)setIsCache:(BOOL)arg0;
- (id)originModel;
- (void)setOriginModel:(id)arg0;
- (void)setServerTime:(double)arg0;
- (id)liveRoomType;
- (void)setLiveRoomType:(id)arg0;
- (id)rightList;
- (void)setRightList:(id)arg0;
- (void)setBrandLabel:(id)arg0;
- (id)brandLabel;
- (void)setTabId:(long long)arg0;
- (long long)shopCount;
- (void)setShopCount:(long long)arg0;
- (id)deliveryText;
- (void)setDeliveryText:(id)arg0;
- (void)setActionBtnTitle:(id)arg0;
- (id)actionBtnTitle;
- (id)poiDistance;
- (void)setPoiDistance:(id)arg0;
- (id)distanceInfoType;
- (void)setDistanceInfoType:(id)arg0;
- (id)iconUrlList;
- (void)setIconUrlList:(id)arg0;
- (BOOL)isSupportBuy;
- (void)setIsSupportBuy:(BOOL)arg0;
- (id)lynxCommonData;
- (id)tagUrl;
- (void)setTagUrl:(id)arg0;
- (id)pricePrefixText;
- (void)setPricePrefixText:(id)arg0;
- (void)setLynxCommonData:(id)arg0;
- (void)setPoiCity:(id)arg0;
- (id)poiCity;
- (id)gaiaXCardData;
- (void)setGaiaXCardData:(id)arg0;
- (id)roomData4Lynx;
- (id)lynxTrackInfo;
- (id)shelfId;
- (void)setLynxTrackInfo:(id)arg0;
- (void)setShelfId:(id)arg0;
- (void)setRoomData4Lynx:(id)arg0;
- (void)setIsLocationEnabled:(BOOL)arg0;
- (void)setShouldShowPoiInfo:(BOOL)arg0;
- (void)setIsTopItem:(BOOL)arg0;
- (id)flashSale;
- (void)setFlashSale:(id)arg0;
- (id)_formatPriceStrWithPrice:(long long)arg0;
- (void)setFlashStatus:(unsigned long long)arg0;
- (unsigned long long)flashStatus;
- (BOOL)_hasTicketWithItem:(id)arg0;
- (void)setHasValidTicket:(BOOL)arg0;
- (id)salePoint;
- (void)setSalePoint:(id)arg0;
- (void)setClickBuyToastText:(id)arg0;
- (void)setSalesStr:(id)arg0;
- (void)setNumberStr:(id)arg0;
- (void)setImageTagUrlStr:(id)arg0;
- (void)setIsExplaining:(BOOL)arg0;
- (BOOL)isExplaining;
- (void)setIsPinkBackground:(BOOL)arg0;
- (void)setCityNumber:(long long)arg0;
- (void)setPoiShopTitle:(id)arg0;
- (void)setTicketList:(id)arg0;
- (void)setNeedUpdateTitle:(BOOL)arg0;
- (void)setNeedConfigNativeData:(BOOL)arg0;
- (void)configNativeModelData;
- (BOOL)needConfigNativeData;
- (BOOL)hasValidTicket;
- (id)_createPriceModelWithItem:(id)arg0 hasTicket:(BOOL)arg1 flashStautus:(unsigned long long)arg2;
- (void)setPriceModel:(id)arg0;
- (BOOL)needUpdateTitle;
- (void)dealWithAttributedTitle;
- (void)dealWithInfoDisplay;
- (id)tagRequestOperation;
- (BOOL)showSalesLabel;
- (BOOL)showCouponContainerForSingleStore;
- (double)getWithoutImageContentWidth;
- (double)getSalesAreaWidth;
- (void)setShowSalesLabel:(BOOL)arg0;
- (id /* block */)refreshTitleCallback;
- (void)setTagRequestOperation:(id)arg0;
- (id)salesStr;
- (BOOL)shouldShowPoiInfo;
- (void)dealWithTicketRightListWithContentRemainWidth:(double)arg0 needDealSalesLabel:(BOOL)arg1 salesAreaWidth:(double)arg2;
- (BOOL)showSeckill;
- (id)ticketRightList;
- (void)setTicketRightList:(id)arg0;
- (id)ticketList;
- (double)dealWithTicketRightListWithitem:(id)arg0 itemViewWidth:(double)arg1 needDealSalesLabel:(BOOL)arg2 salesAreaWidth:(double)arg3 contentRemainWidth:(double)arg4;
- (BOOL)isTopItem;
- (BOOL)isLocationEnabled;
- (double)DSLCellHeight;
- (void)configWithShelfModel:(id)arg0 cardModel:(id)arg1 isTopItem:(BOOL)arg2 showPoiInfo:(BOOL)arg3 pageType:(long long)arg4 tabId:(long long)arg5 actionType:(unsigned long long)arg6;
- (void)setServiceTagJsonStr:(id)arg0;
- (void)cleanExplainingStyle;
- (id)lynxCardData;
- (void)updateExplainAtmosphereFromMessage:(id)arg0;
- (id)cellClassIdStr;
- (double)getTitleRealHeight;
- (BOOL)showSalePoint;
- (long long)numberOfLinesOfTitle;
- (BOOL)showDeliveryLabel;
- (BOOL)isPinkBackground;
- (void)setRefreshTitleCallback:(id /* block */)arg0;
- (id)clickBuyToastText;
- (id)NumberStr;
- (id)imageTagUrlStr;
- (long long)cityNumber;
- (id)poiShopTitle;
- (id)priceModel;
- (id)serviceTagJsonStr;
- (id)iconUrlStr;
- (void)setIconUrlStr:(id)arg0;
- (id)pageType;
- (void)setActionType:(unsigned long long)arg0;
- (long long)productType;
- (unsigned long long)actionType;
- (void)setProductType:(long long)arg0;
- (double)serverTime;
- (void).cxx_destruct;
- (unsigned long long)status;
- (void)setContext:(id)arg0;
- (id)attributedTitle;
- (void)setAttributedTitle:(id)arg0;
- (id)title;
- (void)setCellType:(unsigned long long)arg0;
- (void)setStatus:(unsigned long long)arg0;
- (id)context;
- (void)setPageType:(id)arg0;
- (unsigned long long)cellType;
- (void)setTitle:(id)arg0;
- (id)cardId;
- (double)cellHeight;
- (void)setDeliveryTime:(id)arg0;
- (id)deliveryTime;
- (void)setCardId:(id)arg0;
- (double)stock;
- (void)setStock:(double)arg0;

@end
