//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveFeedDrawerConfigModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSString *reqFrom;
@property (retain, nonatomic) NSString *url;
@property (retain, nonatomic) NSString *innerUrl;
@property (retain, nonatomic) NSString *title;
@property (nonatomic) BOOL enableMultiTab;
@property (nonatomic) BOOL enableReplaceRecommend;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;
+ (Class)classForParsingJSONDictionary:(id)arg0;

- (unsigned long long)evaluateForEnterFrom:(id)arg0 enterMethod:(id)arg1;

@end
