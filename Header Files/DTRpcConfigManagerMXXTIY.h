//
//     Generated by private class-dump
//

@class DTRpcConfigMXXTIY, NSMutableDictionary;

@interface DTRpcConfigManagerMXXTIY : NSObject {
    DTRpcConfigMXXTIY *_globalConfig;
    NSMutableDictionary *_operationTypeConfigs;
}

@property (retain, nonatomic) DTRpcConfigMXXTIY *globalConfig;
@property (retain, nonatomic) NSMutableDictionary *operationTypeConfigs;

- (void)setGlobalConfig:(id)arg0;
- (id)globalConfig;
- (void)setOperationTypeConfigs:(id)arg0;
- (id)operationTypeConfigs;
- (id)configForScope:(int)arg0;
- (id)preferredConfig:(id)arg0;
- (void)setConfig:(id)arg0 forScope:(int)arg1;
- (id)init;
- (void).cxx_destruct;

@end
