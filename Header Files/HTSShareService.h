//
//     Generated by private class-dump
//

@class NSDictionary, NSMutableDictionary, NSString;

@interface HTSShareService : HTSService <HTSService> {
    NSDictionary *_shareActions;
}

@property (retain, nonatomic) NSDictionary *shareActions;
@property (readonly, nonatomic) NSMutableDictionary *mutableShareActions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (BOOL)isPlatformAvailable:(long long)arg0;
- (BOOL)isPlatformInstalled:(long long)arg0;
- (BOOL)openAppWithPlatform:(long long)arg0;
- (void)shareWithModel:(id)arg0 toPlatform:(long long)arg1 completion:(id /* block */)arg2;
- (void)openAppWithPlatform:(long long)arg0 delay:(double)arg1 completion:(id /* block */)arg2;
- (void)registerAction:(id)arg0 forPlatform:(long long)arg1;
- (void)registerAction:(id)arg0 forPlatforms:(id)arg1;
- (id)actionForPlatform:(long long)arg0;
- (id)shareActions;
- (id)mutableShareActions;
- (void)setShareActions:(id)arg0;
- (void).cxx_destruct;
- (BOOL)handleOpenURL:(id)arg0;

@end
