//
//     Generated by private class-dump
//

@class NSString;

@interface AWEStarAtlasTCMCreateItemModel : MTLModel <MTLJSONSerializing> {
    long long _starAtlasType;
    NSString *_starAtlasOrderID;
    NSString *_brandName;
    NSString *_productName;
}

@property (nonatomic) long long starAtlasType;
@property (copy, nonatomic) NSString *starAtlasOrderID;
@property (copy, nonatomic) NSString *brandName;
@property (copy, nonatomic) NSString *productName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)starAtlasTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)starAtlasOrderID;
- (long long)starAtlasType;
- (void)setStarAtlasType:(long long)arg0;
- (void)setStarAtlasOrderID:(id)arg0;
- (id)productName;
- (void)setProductName:(id)arg0;
- (void).cxx_destruct;
- (id)brandName;
- (void)setBrandName:(id)arg0;

@end
