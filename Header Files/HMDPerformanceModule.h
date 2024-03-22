//
//     Generated by private class-dump
//

@class NSString;

@interface HMDPerformanceModule : HMDBaseModule <HMDModuleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)conditionArrayWithTableName:(id)arg0;
- (void)updateRemoteHermasConfig;
- (void)updateEncryptConfig;
- (void)updateDoubleUploadConfig;
- (void)updateDomainConfig;
- (void)syncConfigToHermasEngine;
- (void)updateModuleConfig:(id)arg0;
- (void)setupModuleConfig;
- (id)dataBaseTableMap;
- (id)init;

@end
