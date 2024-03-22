//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface IESLiveVerifyCertificationModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isVerified;
@property (nonatomic) BOOL reviewing;
@property (nonatomic) int certificationStep;
@property (copy, nonatomic) NSString *certID;
@property (copy, nonatomic) NSString *realName;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

@end
