//
//     Generated by private class-dump
//

@class IESLiveGameOpenPlatformAudienceStore, IESLiveGameOpenPlatformAudienceAppManager, NSString;

@interface IESLiveGameOpenPlatformAudienceFragment : IESLiveRoomComponent <IESLiveGameOpenPlatformAudienceRouter, IESLiveOpenPlatformDebugRouter> {
    IESLiveGameOpenPlatformAudienceStore *_store;
    IESLiveGameOpenPlatformAudienceAppManager *_appManager;
}

@property (retain, nonatomic) IESLiveGameOpenPlatformAudienceStore *store;
@property (retain, nonatomic) IESLiveGameOpenPlatformAudienceAppManager *appManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)arg0;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)didReceivedFinishMessage;
- (void)componentOrientationTransitionBegin:(long long)arg0;
- (void)debugLoadWithSchema:(id)arg0;
- (void)setAppManager:(id)arg0;
- (void)loadWithAppID:(id)arg0 schema:(id)arg1 source:(id)arg2 name:(id)arg3;
- (void).cxx_destruct;
- (id)store;
- (void)setStore:(id)arg0;
- (id)appManager;

@end
