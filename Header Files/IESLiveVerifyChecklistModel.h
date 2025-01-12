//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface IESLiveVerifyChecklistModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long realnameVerify;
@property (nonatomic) BOOL isPhoneBinded;
@property (nonatomic) BOOL liveAgreement;
@property (nonatomic) BOOL liveAnswer;
@property (nonatomic) long long verifyRiskLevel;
@property (retain, nonatomic) NSString *ticket;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

@end
