//
//     Generated by private class-dump
//

@class NSString, IESLiveScreencastLinkerAudienceStore, HTSLiveScreencastLinkInfoLayout;
@protocol IESLiveCompoundSubscription;

@interface IESLiveScreencastLinkerAudienceFragment : IESLiveRoomComponent <IESLiveScreencastLinkerAudienceRouter> {
    IESLiveScreencastLinkerAudienceStore *_store;
    id<IESLiveCompoundSubscription> _disposable;
    HTSLiveScreencastLinkInfoLayout *_remoteAnchorInfoLayout;
}

@property (retain, nonatomic) IESLiveScreencastLinkerAudienceStore *store;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (retain, nonatomic) HTSLiveScreencastLinkInfoLayout *remoteAnchorInfoLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setDisposable:(id)arg0;
- (id)disposable;
- (void)setupBinds;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)remoteRoomDataReady:(id)arg0;
- (void)componentOrientationChanged:(long long)arg0;
- (id)linkedUsers;
- (BOOL)isMultiLinkerProcessing;
- (void)hideComponent;
- (void)showComponent;
- (void)onClearScreenMode:(id)arg0;
- (void)setRemoteAnchorInfoLayout:(id)arg0;
- (id)remoteAnchorInfoLayout;
- (void)setupObservers;
- (void).cxx_destruct;
- (id)store;
- (void)setStore:(id)arg0;
- (void)dealloc;

@end
