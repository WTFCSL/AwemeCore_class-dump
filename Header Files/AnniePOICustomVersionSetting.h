//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AnniePOICustomVersionSetting : MTLModel <MTLJSONSerializing> {
    BOOL _enableRequestVersion;
    NSArray *_channelWithBizcode;
}

@property (retain, nonatomic) NSArray *channelWithBizcode;
@property (nonatomic) BOOL enableRequestVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)channelWithBizcodeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)channelWithBizcode;
- (void)setChannelWithBizcode:(id)arg0;
- (BOOL)enableRequestVersion;
- (void)setEnableRequestVersion:(BOOL)arg0;
- (void).cxx_destruct;

@end
