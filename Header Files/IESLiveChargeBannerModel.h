//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSNumber, IESLiveFlexImage;

@interface IESLiveChargeBannerModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESLiveFlexImage *bgImg;
@property (retain, nonatomic) NSString *actionScheme;
@property (retain, nonatomic) NSNumber *source;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)bgImgJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

@end
