//
//     Generated by private class-dump
//

@class NSString, AWELifeShelfCardListItemCardData, NSDictionary, AWELifeShelfCardListItemMiniCardExtra, NSNumber, AWELiveShelfCellViewModel;

@interface AWELifeShelfCardListItem : MTLModel <MTLJSONSerializing> {
    BOOL _isUIShowing;
    BOOL _hasUpdateData;
    BOOL _isCopyed;
    BOOL _isImagePreload;
    NSNumber *_transformType;
    NSString *_cardId;
    NSString *_cardUrl;
    NSString *_componentId;
    NSString *_lynxUrl;
    NSString *_webUrl;
    NSString *_placeOrderUrl;
    AWELifeShelfCardListItemMiniCardExtra *_miniCardExtra;
    NSNumber *_componentSubType;
    NSNumber *_componentType;
    NSNumber *_createTime;
    NSNumber *_isAggCard;
    NSNumber *_isSelected;
    NSNumber *_isShowing;
    unsigned long long _liveCardType;
    NSNumber *_source;
    AWELifeShelfCardListItemCardData *_cardData;
    NSString *_cliExtra;
    NSDictionary *_extraLog;
    AWELiveShelfCellViewModel *_localLifeViewModel;
    NSString *_originIndex;
    NSNumber *_currentOrder;
    AWELifeShelfCardListItem *_itemCopyFrom;
    NSString *_serviceTagJson;
    long long _cardDynamicType;
    NSDictionary *_originData;
    NSNumber *_isTextBlock;
    long long _groupCount;
    long long _groupOrder;
    NSDictionary *_lynxLogParams;
    NSNumber *_enterType;
    NSNumber *_authType;
    NSDictionary *_lynxSessionParams;
    NSDictionary *_shelfSessionParams;
}

@property (copy, nonatomic) NSNumber *transformType;
@property (copy, nonatomic) NSString *cardId;
@property (copy, nonatomic) NSString *cardUrl;
@property (copy, nonatomic) NSString *componentId;
@property (copy, nonatomic) NSString *lynxUrl;
@property (copy, nonatomic) NSString *webUrl;
@property (copy, nonatomic) NSString *placeOrderUrl;
@property (retain, nonatomic) AWELifeShelfCardListItemMiniCardExtra *miniCardExtra;
@property (copy, nonatomic) NSNumber *componentSubType;
@property (copy, nonatomic) NSNumber *componentType;
@property (copy, nonatomic) NSNumber *createTime;
@property (copy, nonatomic) NSNumber *isAggCard;
@property (copy, nonatomic) NSNumber *isSelected;
@property (copy, nonatomic) NSNumber *isShowing;
@property (nonatomic) unsigned long long liveCardType;
@property (copy, nonatomic) NSNumber *source;
@property (retain, nonatomic) AWELifeShelfCardListItemCardData *cardData;
@property (copy, nonatomic) NSString *cliExtra;
@property (copy, nonatomic) NSDictionary *extraLog;
@property (retain, nonatomic) AWELiveShelfCellViewModel *localLifeViewModel;
@property (copy, nonatomic) NSString *originIndex;
@property (copy, nonatomic) NSNumber *currentOrder;
@property (nonatomic) BOOL isUIShowing;
@property (nonatomic) BOOL hasUpdateData;
@property (nonatomic) BOOL isCopyed;
@property (weak, nonatomic) AWELifeShelfCardListItem *itemCopyFrom;
@property (nonatomic) BOOL isImagePreload;
@property (copy, nonatomic) NSString *serviceTagJson;
@property (nonatomic) long long cardDynamicType;
@property (copy, nonatomic) NSDictionary *originData;
@property (retain, nonatomic) NSNumber *isTextBlock;
@property (nonatomic) long long groupCount;
@property (nonatomic) long long groupOrder;
@property (copy, nonatomic) NSDictionary *lynxLogParams;
@property (copy, nonatomic) NSNumber *enterType;
@property (copy, nonatomic) NSNumber *authType;
@property (copy, nonatomic) NSDictionary *lynxSessionParams;
@property (copy, nonatomic) NSDictionary *shelfSessionParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clearHasShowedItemsWithShelfKey:(id)arg0;
+ (id)cardDataJSONTransformer;
+ (id)saveOriginDataIncardList:(id)arg0;
+ (id)hasShowedItemsWithShelfKey:(id)arg0;
+ (id)shelfShowItemMap;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setIsShowing:(id)arg0;
- (id)componentId;
- (void)setComponentId:(id)arg0;
- (id)lynxUrl;
- (BOOL)isImagePreload;
- (id)extraLog;
- (void)setWebUrl:(id)arg0;
- (void)setExtraLog:(id)arg0;
- (void)setIsImagePreload:(BOOL)arg0;
- (void)setLynxUrl:(id)arg0;
- (id)webUrl;
- (void)setGroupOrder:(long long)arg0;
- (long long)groupOrder;
- (void)setHasUpdateData:(BOOL)arg0;
- (BOOL)hasUpdateData;
- (id)cardUrl;
- (void)setCardUrl:(id)arg0;
- (id)originData;
- (unsigned long long)liveCardType;
- (void)setOriginData:(id)arg0;
- (id)lynxSessionParams;
- (id)shelfSessionParams;
- (id)placeOrderUrl;
- (void)setLiveCardType:(unsigned long long)arg0;
- (void)setPlaceOrderUrl:(id)arg0;
- (id)lynxLogParams;
- (void)setLynxLogParams:(id)arg0;
- (void)setLynxSessionParams:(id)arg0;
- (id)cliExtra;
- (id)originIndex;
- (void)setServiceTagJson:(id)arg0;
- (BOOL)isCopyed;
- (id)itemCopyFrom;
- (id)serviceTagJson;
- (id)isTextBlock;
- (id)localLifeViewModel;
- (void)setLocalLifeViewModel:(id)arg0;
- (void)setIsCopyed:(BOOL)arg0;
- (void)setItemCopyFrom:(id)arg0;
- (long long)cardDynamicType;
- (void)setHasShowed:(BOOL)arg0 withShelfKey:(id)arg1;
- (void)setIsTextBlock:(id)arg0;
- (void)setShelfSessionParams:(id)arg0;
- (void)setOriginIndex:(id)arg0;
- (id)currentOrder;
- (id)miniCardExtra;
- (void)setCurrentOrder:(id)arg0;
- (BOOL)hasShowedWithShelfKey:(id)arg0;
- (void)setMiniCardExtra:(id)arg0;
- (id)isAggCard;
- (void)setIsAggCard:(id)arg0;
- (void)setCliExtra:(id)arg0;
- (BOOL)isUIShowing;
- (void)setIsUIShowing:(BOOL)arg0;
- (void)setCardDynamicType:(long long)arg0;
- (id)source;
- (void)setIsSelected:(id)arg0;
- (void).cxx_destruct;
- (id)authType;
- (void)setCreateTime:(id)arg0;
- (id)isShowing;
- (void)setComponentSubType:(id)arg0;
- (long long)groupCount;
- (id)createTime;
- (id)componentType;
- (void)setSource:(id)arg0;
- (void)setComponentType:(id)arg0;
- (void)setGroupCount:(long long)arg0;
- (void)setAuthType:(id)arg0;
- (id)componentSubType;
- (id)isSelected;
- (id)cardId;
- (id)cardData;
- (void)setCardData:(id)arg0;
- (void)setCardId:(id)arg0;
- (id)enterType;
- (void)setEnterType:(id)arg0;
- (id)transformType;
- (void)setTransformType:(id)arg0;

@end