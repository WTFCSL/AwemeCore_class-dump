//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface IESLiveAnchorInteractiveGameXplayInfo : IESLiveDynamicMTLModel <MTLJSONSerializing> {
    NSString *_mobileH5Url;
}

@property (copy, nonatomic) NSString *xpalyGameId;
@property (copy, nonatomic) NSString *channel;
@property (nonatomic) long long orientation;
@property (nonatomic) long long pcWidthRatio;
@property (nonatomic) long long pcHeightRatio;
@property (copy, nonatomic) NSString *h5Url;
@property (copy, nonatomic) NSString *mobileH5Url;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)mobileH5Url;
- (void)setMobileH5Url:(id)arg0;
- (void).cxx_destruct;

@end
