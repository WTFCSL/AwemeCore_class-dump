//
//     Generated by private class-dump
//

@class NSString;

@interface BDSCLivePlayQualityInfo : NSObject <BDModelCustom> {
    NSString *_name;
    NSString *_sdkKey;
    long long _level;
    NSString *_resolution;
    NSString *_vCodec;
}

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *sdkKey;
@property (nonatomic) long long level;
@property (copy, nonatomic) NSString *resolution;
@property (copy, nonatomic) NSString *vCodec;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;

- (void)setVCodec:(id)arg0;
- (id)vCodec;
- (id)sdkKey;
- (void)setSdkKey:(id)arg0;
- (void)setLevel:(long long)arg0;
- (void)setResolution:(id)arg0;
- (id)resolution;
- (long long)level;
- (void).cxx_destruct;
- (void)setName:(id)arg0;
- (id)name;

@end