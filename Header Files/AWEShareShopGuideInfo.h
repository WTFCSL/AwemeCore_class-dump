//
//     Generated by private class-dump
//

@class NSString;

@interface AWEShareShopGuideInfo : MTLModel <MTLJSONSerializing> {
    BOOL _isShopGuide;
    NSString *_shopGuideId;
}

@property (nonatomic) BOOL isShopGuide;
@property (copy, nonatomic) NSString *shopGuideId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isShopGuide;
- (void)setIsShopGuide:(BOOL)arg0;
- (id)shopGuideId;
- (void)setShopGuideId:(id)arg0;
- (void).cxx_destruct;

@end
