//
//     Generated by private class-dump
//

@class NSString;

@interface IESMMAudioSamiConfig : IESMMAudioEffectConfig {
    BOOL _enableSNR;
    long long _type;
    NSString *_modelPath;
    NSString *_configJson;
    NSString *_denoiseLevel;
    NSString *_createConfigInfo;
    NSString *_snrThreshold;
    NSString *_snrFilePath;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *modelPath;
@property (copy, nonatomic) NSString *configJson;
@property (copy, nonatomic) NSString *denoiseLevel;
@property (copy, nonatomic) NSString *createConfigInfo;
@property (copy, nonatomic) NSString *snrThreshold;
@property (copy, nonatomic) NSString *snrFilePath;
@property (nonatomic) BOOL enableSNR;

- (void)setEnableSNR:(BOOL)arg0;
- (void)setSnrThreshold:(id)arg0;
- (BOOL)enableSNR;
- (id)toDicInfo;
- (void)setupDefaultValues;
- (id)configJson;
- (void)setConfigJson:(id)arg0;
- (id)denoiseLevel;
- (void)setDenoiseLevel:(id)arg0;
- (id)createConfigInfo;
- (void)setCreateConfigInfo:(id)arg0;
- (id)snrThreshold;
- (id)snrFilePath;
- (void)setSnrFilePath:(id)arg0;
- (void).cxx_destruct;
- (void)setModelPath:(id)arg0;
- (long long)type;
- (void)setType:(long long)arg0;
- (id)modelPath;

@end
