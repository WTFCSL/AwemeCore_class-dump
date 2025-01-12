//
//     Generated by private class-dump
//

@class NSString;

@interface IESECShopStateDiffableModel : NSObject <IGListDiffable> {
    BOOL _isStore;
    BOOL _productShopEntry;
    BOOL _recommendRequesting;
    BOOL _isShowRecommend;
    long long _goodsCount;
    NSString *_bindShopName;
    long long _selectedGoodsType;
    NSString *_emptyText;
    NSString *_emptyDetailText;
    long long _shopProductCount;
    NSString *_shopURL;
}

@property (nonatomic) long long goodsCount;
@property (copy, nonatomic) NSString *bindShopName;
@property (nonatomic) long long selectedGoodsType;
@property (copy, nonatomic) NSString *emptyText;
@property (copy, nonatomic) NSString *emptyDetailText;
@property (nonatomic) BOOL isStore;
@property (nonatomic) BOOL productShopEntry;
@property (nonatomic) BOOL recommendRequesting;
@property (nonatomic) BOOL isShowRecommend;
@property (nonatomic) long long shopProductCount;
@property (copy, nonatomic) NSString *shopURL;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)arg0;
- (long long)goodsCount;
- (void)setGoodsCount:(long long)arg0;
- (id)bindShopName;
- (id)emptyText;
- (void)setEmptyText:(id)arg0;
- (void)setIsStore:(BOOL)arg0;
- (BOOL)recommendRequesting;
- (void)setRecommendRequesting:(BOOL)arg0;
- (void)setProductShopEntry:(BOOL)arg0;
- (void)setShopProductCount:(long long)arg0;
- (void)setShopURL:(id)arg0;
- (void)setBindShopName:(id)arg0;
- (BOOL)productShopEntry;
- (long long)shopProductCount;
- (id)shopURL;
- (long long)selectedGoodsType;
- (void)setSelectedGoodsType:(long long)arg0;
- (id)emptyDetailText;
- (void)setEmptyDetailText:(id)arg0;
- (BOOL)isShowRecommend;
- (void)setIsShowRecommend:(BOOL)arg0;
- (void).cxx_destruct;
- (BOOL)isStore;

@end
