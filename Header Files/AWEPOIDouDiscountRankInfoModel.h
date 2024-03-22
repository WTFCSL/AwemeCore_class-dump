//
//     Generated by private class-dump
//

@class NSString, AWEURLModel;

@interface AWEPOIDouDiscountRankInfoModel : MTLModel <MTLJSONSerializing> {
    NSString *_rankCode;
    NSString *_rankName;
    AWEURLModel *_categoryIcon;
    NSString *_categoryName;
    long long _itemCount;
    long long _vvTotal;
}

@property (copy, nonatomic) NSString *rankCode;
@property (copy, nonatomic) NSString *rankName;
@property (retain, nonatomic) AWEURLModel *categoryIcon;
@property (copy, nonatomic) NSString *categoryName;
@property (nonatomic) long long itemCount;
@property (nonatomic) long long vvTotal;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)rankCode;
- (void)setRankCode:(id)arg0;
- (id)rankName;
- (void)setRankName:(id)arg0;
- (long long)vvTotal;
- (void)setVvTotal:(long long)arg0;
- (long long)itemCount;
- (void).cxx_destruct;
- (void)setItemCount:(long long)arg0;
- (id)categoryName;
- (void)setCategoryName:(id)arg0;
- (void)setCategoryIcon:(id)arg0;
- (id)categoryIcon;

@end