//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPublishProductDetectResponseModel : MTLModel <MTLJSONSerializing> {
    BOOL _allowShopping;
    BOOL _allowStarAtlas;
    long long _statusCode;
    NSString *_statusMsg;
    unsigned long long _showType;
    long long _itemType;
    NSString *_itemInfo;
    long long _remainCount;
    NSString *_title;
    NSString *_subtitle;
    NSString *_guideText;
    NSString *_countOverText;
    NSString *_networkErrMsg;
    NSString *_privateNotAllowText;
    NSString *_shoppingNotAllowText;
    NSString *_starAtlasNotAllowText;
    NSString *_notAllowText;
}

@property (nonatomic) long long statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (nonatomic) unsigned long long showType;
@property (nonatomic) long long itemType;
@property (copy, nonatomic) NSString *itemInfo;
@property (nonatomic) long long remainCount;
@property (nonatomic) BOOL allowShopping;
@property (nonatomic) BOOL allowStarAtlas;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *guideText;
@property (copy, nonatomic) NSString *countOverText;
@property (copy, nonatomic) NSString *networkErrMsg;
@property (copy, nonatomic) NSString *privateNotAllowText;
@property (copy, nonatomic) NSString *shoppingNotAllowText;
@property (copy, nonatomic) NSString *starAtlasNotAllowText;
@property (copy, nonatomic) NSString *notAllowText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)statusMsg;
- (void)setGuideText:(id)arg0;
- (id)guideText;
- (void)setStatusMsg:(id)arg0;
- (void)setItemInfo:(id)arg0;
- (void)setRemainCount:(long long)arg0;
- (long long)remainCount;
- (id)countOverText;
- (id)privateNotAllowText;
- (BOOL)allowShopping;
- (id)shoppingNotAllowText;
- (BOOL)allowStarAtlas;
- (id)starAtlasNotAllowText;
- (id)networkErrMsg;
- (void)setAllowShopping:(BOOL)arg0;
- (void)setAllowStarAtlas:(BOOL)arg0;
- (void)setCountOverText:(id)arg0;
- (void)setNetworkErrMsg:(id)arg0;
- (void)setPrivateNotAllowText:(id)arg0;
- (void)setShoppingNotAllowText:(id)arg0;
- (void)setStarAtlasNotAllowText:(id)arg0;
- (id)notAllowText;
- (void)setNotAllowText:(id)arg0;
- (long long)statusCode;
- (void)setStatusCode:(long long)arg0;
- (long long)itemType;
- (void)setItemType:(long long)arg0;
- (void).cxx_destruct;
- (id)itemInfo;
- (id)title;
- (id)subtitle;
- (void)setSubtitle:(id)arg0;
- (void)setTitle:(id)arg0;
- (unsigned long long)showType;
- (void)setShowType:(unsigned long long)arg0;

@end
