//
//     Generated by private class-dump
//

@class NSString;

@interface IESECListKitDemoPrice : MTLModel <MTLJSONSerializing> {
    long long _minPrice;
    long long _maxPrice;
    long long _marketPrice;
    NSString *_typeText;
    long long _type;
}

@property (nonatomic) long long minPrice;
@property (nonatomic) long long maxPrice;
@property (nonatomic) long long marketPrice;
@property (copy, nonatomic) NSString *typeText;
@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)typeText;
- (void)setTypeText:(id)arg0;
- (long long)minPrice;
- (void)setMinPrice:(long long)arg0;
- (long long)maxPrice;
- (void)setMaxPrice:(long long)arg0;
- (long long)marketPrice;
- (void)setMarketPrice:(long long)arg0;
- (void).cxx_destruct;
- (long long)type;
- (void)setType:(long long)arg0;

@end