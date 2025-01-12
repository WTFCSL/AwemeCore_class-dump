//
//     Generated by private class-dump
//

@class NSString, NSArray, AWEJumpToMallImplicitActionModel, NSNumber;

@interface AWEJumpToMallConfigModel : MTLModel <MTLJSONSerializing, NSCopying> {
    BOOL _isAction;
    BOOL _supportTab;
    BOOL _supportLeftSlide;
    BOOL _requireNoOrder;
    BOOL _hasOrdered;
    BOOL _shouldWaitCommentClose;
    BOOL _supportPage;
    BOOL _supportLeftSlideEnterStyle;
    BOOL _needReq;
    NSString *_key;
    long long _interestLevel;
    NSString *_sameBlockName;
    NSString *_tabId;
    NSString *_trafficFrom;
    NSString *_isStronglyRecommend;
    long long _second;
    NSArray *_implicitionAction;
    AWEJumpToMallImplicitActionModel *_currentiImplicitionAction;
    NSNumber *_imagePlayNum;
    NSString *_pitayaProductId;
    NSArray *_pitayaSameGoods;
    NSString *_pitayaSameGoodsStr;
}

@property (copy, nonatomic) NSString *key;
@property (nonatomic) BOOL isAction;
@property (nonatomic) long long interestLevel;
@property (copy, nonatomic) NSString *sameBlockName;
@property (copy, nonatomic) NSString *tabId;
@property (copy, nonatomic) NSString *trafficFrom;
@property (copy, nonatomic) NSString *isStronglyRecommend;
@property (nonatomic) BOOL supportTab;
@property (nonatomic) BOOL supportLeftSlide;
@property (nonatomic) BOOL requireNoOrder;
@property (nonatomic) long long second;
@property (nonatomic) BOOL hasOrdered;
@property (nonatomic) BOOL shouldWaitCommentClose;
@property (copy, nonatomic) NSArray *implicitionAction;
@property (copy, nonatomic) AWEJumpToMallImplicitActionModel *currentiImplicitionAction;
@property (nonatomic) BOOL supportPage;
@property (copy, nonatomic) NSNumber *imagePlayNum;
@property (nonatomic) BOOL supportLeftSlideEnterStyle;
@property (nonatomic) BOOL needReq;
@property (copy, nonatomic) NSString *pitayaProductId;
@property (copy, nonatomic) NSArray *pitayaSameGoods;
@property (copy, nonatomic) NSString *pitayaSameGoodsStr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)implicitionActionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)tabId;
- (void)setTabId:(id)arg0;
- (id)imagePlayNum;
- (void)setHasOrdered:(BOOL)arg0;
- (id)implicitionAction;
- (void)setCurrentiImplicitionAction:(id)arg0;
- (void)setPitayaProductId:(id)arg0;
- (void)setPitayaSameGoods:(id)arg0;
- (void)setPitayaSameGoodsStr:(id)arg0;
- (long long)interestLevel;
- (BOOL)supportTab;
- (id)currentiImplicitionAction;
- (BOOL)requireNoOrder;
- (BOOL)hasOrdered;
- (BOOL)needReq;
- (id)pitayaProductId;
- (BOOL)supportLeftSlideEnterStyle;
- (BOOL)supportLeftSlide;
- (id)sameBlockName;
- (id)pitayaSameGoods;
- (id)pitayaSameGoodsStr;
- (id)isStronglyRecommend;
- (id)trafficFrom;
- (BOOL)supportPage;
- (void)setIsAction:(BOOL)arg0;
- (void)setInterestLevel:(long long)arg0;
- (void)setSameBlockName:(id)arg0;
- (void)setTrafficFrom:(id)arg0;
- (void)setIsStronglyRecommend:(id)arg0;
- (void)setSupportTab:(BOOL)arg0;
- (void)setSupportLeftSlide:(BOOL)arg0;
- (void)setRequireNoOrder:(BOOL)arg0;
- (void)setImplicitionAction:(id)arg0;
- (BOOL)shouldWaitCommentClose;
- (void)setShouldWaitCommentClose:(BOOL)arg0;
- (void)setImagePlayNum:(id)arg0;
- (void)setSupportPage:(BOOL)arg0;
- (void)setSupportLeftSlideEnterStyle:(BOOL)arg0;
- (void)setNeedReq:(BOOL)arg0;
- (id)key;
- (id)init;
- (void)setSecond:(long long)arg0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (void)setKey:(id)arg0;
- (long long)second;
- (BOOL)isAction;

@end
