//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveUserModuleUserPreviewInterfaceAdapterImpl : IESLiveBaseAdapter <IESLiveUserModuleUserPreviewInterfaceAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)createConfig;
- (void)showUser:(id)arg0 secUserId:(id)arg1 withConfig:(id)arg2;
- (void)prefetchUserCardWithUserID:(id)arg0 secUserId:(id)arg1 source:(unsigned long long)arg2;
- (id)targetInstance;
- (void)showUser:(id)arg0 rightAnchorId:(id)arg1 secUserId:(id)arg2 withConfig:(id)arg3;

@end
