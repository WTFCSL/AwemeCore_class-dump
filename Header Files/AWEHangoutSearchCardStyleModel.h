//
//     Generated by private class-dump
//

@class NSString;

@interface AWEHangoutSearchCardStyleModel : MTLModel <MTLJSONSerializing> {
    NSString *_itemBgColor;
    NSString *_bgStartColor;
    NSString *_bgEndColor;
    NSString *_titleImageUrl;
}

@property (copy, nonatomic) NSString *itemBgColor;
@property (copy, nonatomic) NSString *bgStartColor;
@property (copy, nonatomic) NSString *bgEndColor;
@property (copy, nonatomic) NSString *titleImageUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)itemBgColor;
- (id)bgEndColor;
- (id)bgStartColor;
- (id)titleImageUrl;
- (void)setItemBgColor:(id)arg0;
- (void)setBgStartColor:(id)arg0;
- (void)setBgEndColor:(id)arg0;
- (void)setTitleImageUrl:(id)arg0;
- (void).cxx_destruct;

@end