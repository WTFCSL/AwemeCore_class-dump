//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveAuthorizationCertification : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL show;
@property (nonatomic) BOOL isVerified;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *detail;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

@end