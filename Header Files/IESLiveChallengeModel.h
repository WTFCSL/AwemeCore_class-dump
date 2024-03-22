//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface IESLiveChallengeModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *challengeID;
@property (copy, nonatomic) NSString *challengeName;
@property (nonatomic) BOOL isCommerce;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parseChallengeModelFromJson:(id)arg0;
+ (id)JSONKeyPathsByPropertyKey;

@end
