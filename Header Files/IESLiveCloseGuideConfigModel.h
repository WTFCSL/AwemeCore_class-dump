//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface IESLiveCloseGuideConfigModel : IESLiveDynamicMTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *imgUrl;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *describe;
@property (copy, nonatomic) NSString *actionTitle;
@property (retain, nonatomic) NSArray *sources;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)containsEnterFrom:(id)arg0 enterMethod:(id)arg1;
- (BOOL)isValidConfig;

@end