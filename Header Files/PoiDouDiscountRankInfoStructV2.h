//
//     Generated by private class-dump
//

@class NSString, UrlStructV2;

@interface PoiDouDiscountRankInfoStructV2 : GPBMessage

@property (copy, nonatomic) NSString *rankCode;
@property (nonatomic) BOOL hasRankCode;
@property (copy, nonatomic) NSString *rankName;
@property (nonatomic) BOOL hasRankName;
@property (retain, nonatomic) UrlStructV2 *categoryIcon;
@property (nonatomic) BOOL hasCategoryIcon;
@property (copy, nonatomic) NSString *categoryName;
@property (nonatomic) BOOL hasCategoryName;
@property (nonatomic) int itemCount;
@property (nonatomic) BOOL hasItemCount;
@property (nonatomic) long long vvTotal;
@property (nonatomic) BOOL hasVvTotal;

+ (id)descriptor;

@end
