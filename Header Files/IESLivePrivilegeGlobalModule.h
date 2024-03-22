//
//     Generated by private class-dump
//

@class IESLiveDressResourceManager, IESLiveAvatarServiceImpl, IESLiveEffectMixInfoHandler, IESLiveDressManager, IESLiveDressServiceWapper, NSString;

@interface IESLivePrivilegeGlobalModule : IESLiveModule <IESLivePrivilegeGlobalModule> {
    IESLiveDressManager *_dressManager;
    IESLiveDressResourceManager *_dressResourceManager;
    IESLiveDressServiceWapper *_dressServiceImpl;
    IESLiveEffectMixInfoHandler *_effectNodeHandler;
    IESLiveAvatarServiceImpl *_avatarServiceImpl;
}

@property (retain, nonatomic) IESLiveDressManager *dressManager;
@property (retain, nonatomic) IESLiveDressResourceManager *dressResourceManager;
@property (retain, nonatomic) IESLiveDressServiceWapper *dressServiceImpl;
@property (retain, nonatomic) IESLiveEffectMixInfoHandler *effectNodeHandler;
@property (retain, nonatomic) IESLiveAvatarServiceImpl *avatarServiceImpl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)avatarService;
- (id)JSBHandler;
- (id)effectService;
- (id)dressService;
- (id)dressResourceService;
- (BOOL)enableNewDressArch;
- (id)avatarServiceImpl;
- (id)effectNodeHandler;
- (id)dressServiceImpl;
- (id)dressManager;
- (id)dressResourceManager;
- (void)setDressManager:(id)arg0;
- (void)setDressResourceManager:(id)arg0;
- (void)setDressServiceImpl:(id)arg0;
- (void)setEffectNodeHandler:(id)arg0;
- (void)setAvatarServiceImpl:(id)arg0;
- (void).cxx_destruct;

@end
