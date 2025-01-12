//
//     Generated by private class-dump
//

@class NSString;

@interface HMDHighPriorityModule : HMDBaseModule <HMDModuleProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateRemoteHermasConfig;
- (void)updateEncryptConfig;
- (void)updateDoubleUploadConfig;
- (void)updateDomainConfig;
- (void)syncConfigToHermasEngine;
- (void)updateModuleConfig:(id)arg0;
- (void)setupModuleConfig;
- (id)init;

@end
