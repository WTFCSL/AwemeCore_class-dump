//
//     Generated by private class-dump
//

@class NSString;

@interface BDXBridgeGetGeckoInfoMethodParamModel : BDXBridgeModel {
    NSString *_accessKey;
    NSString *_channel;
}

@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *channel;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (id)channel;
- (void).cxx_destruct;
- (void)setChannel:(id)arg0;
- (id)accessKey;
- (void)setAccessKey:(id)arg0;

@end
