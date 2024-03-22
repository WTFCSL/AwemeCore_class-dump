//
//     Generated by private class-dump
//

@class NSNumber, HTSLivePatternModel, NSString;

@interface HTSLiveGiftPieceModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *giftID;
@property (retain, nonatomic) HTSLivePatternModel *namePattern;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)namePatternJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

@end
