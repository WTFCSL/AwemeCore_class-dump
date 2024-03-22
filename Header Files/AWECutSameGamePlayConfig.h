//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWECutSameGamePlayConfig : MTLModel <MTLJSONSerializing, ACCCutSameGamePlayConfigProtocol> {
    BOOL _isReshape;
    NSString *_name;
    NSString *_algorithm;
    NSString *_icon;
    NSArray *_resourceTypes;
    unsigned long long _outputType;
    NSString *_config;
    NSString *_videoResourceID;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *algorithm;
@property (copy, nonatomic) NSString *icon;
@property (copy, nonatomic) NSArray *resourceTypes;
@property (nonatomic) unsigned long long outputType;
@property (copy, nonatomic) NSString *config;
@property (nonatomic) BOOL isReshape;
@property (copy, nonatomic) NSString *videoResourceID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)outputTypeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
+ (id)JSONTransformerForKey:(id)arg0;

- (void)setResourceTypes:(id)arg0;
- (BOOL)isReshape;
- (void)setIsReshape:(BOOL)arg0;
- (id)videoResourceID;
- (void)setVideoResourceID:(id)arg0;
- (id)algorithm;
- (id)icon;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (void)setName:(id)arg0;
- (void)setIcon:(id)arg0;
- (void)setAlgorithm:(id)arg0;
- (id)name;
- (void)setOutputType:(unsigned long long)arg0;
- (unsigned long long)outputType;
- (id)resourceTypes;

@end