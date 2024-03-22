//
//     Generated by private class-dump
//

@class NSString, TTKNaviCategoryTabPromotion, NSDictionary;

@interface TTKNaviCategoryTabModel : MTLModel <MTLJSONSerializing> {
    NSString *_tabKey;
    NSString *_tabName;
    NSString *_highTab;
    long long _iosVersion;
    TTKNaviCategoryTabPromotion *_promotion;
}

@property (readonly, copy, nonatomic) NSString *tabKey;
@property (readonly, copy, nonatomic) NSString *tabName;
@property (readonly, copy, nonatomic) NSString *highTab;
@property (readonly, nonatomic) long long iosVersion;
@property (readonly, nonatomic) TTKNaviCategoryTabPromotion *promotion;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)promotionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)promotion;
- (id)highTab;
- (long long)iosVersion;
- (void).cxx_destruct;
- (id)tabKey;
- (id)tabName;

@end
