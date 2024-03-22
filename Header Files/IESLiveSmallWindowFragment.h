//
//     Generated by private class-dump
//

@class RACDisposable, UIViewController, NSString;
@protocol IESLiveSmallWindowService, IESLiveFeedDrawerProvider;

@interface IESLiveSmallWindowFragment : IESLiveRoomComponent <IESLiveNavigationDelegateProtocol, IESLiveFeedDrawerProviderActions, IESLiveAudienceAudioMultiLinkMicActions, IESLiveSmallWindowActions, IESLivePaidStreamAction> {
    BOOL _outManage;
    BOOL _disableSmallWindow;
    id<IESLiveFeedDrawerProvider> _feedDrawerProvider;
    RACDisposable *_methodDisposable;
    id<IESLiveSmallWindowService> _smallWindowService;
    UIViewController *_audienceVC;
    id /* block */ _muteStateAction;
    id _lastNaviDelegate;
}

@property (retain, nonatomic) id<IESLiveFeedDrawerProvider> feedDrawerProvider;
@property (retain, nonatomic) RACDisposable *methodDisposable;
@property (retain, nonatomic) id<IESLiveSmallWindowService> smallWindowService;
@property (weak, nonatomic) UIViewController *audienceVC;
@property (nonatomic) BOOL outManage;
@property (copy, nonatomic) id /* block */ muteStateAction;
@property (weak, nonatomic) id lastNaviDelegate;
@property (nonatomic, getter=isDisableSmallWindow) BOOL disableSmallWindow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)componentDidDisappear;
- (id)audienceVC;
- (void)setAudienceVC:(id)arg0;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)paidStreamTrialDidStart:(long long)arg0;
- (void)paidStreamTrialDidFinish:(long long)arg0 reason:(unsigned long long)arg1;
- (void)paidStreamTrialDidPromised:(long long)arg0;
- (void)backToRoom;
- (id)smallWindowService;
- (void)setSmallWindowService:(id)arg0;
- (id)feedDrawerProvider;
- (void)setFeedDrawerProvider:(id)arg0;
- (void)didShowFeedDrawer:(id)arg0;
- (void)willHideFeedDrawer;
- (void)setDisableSmallWindow:(BOOL)arg0;
- (void)didStartMultiAudioLinkMic;
- (void)didCloseMultiAudioLinkMic;
- (void)setMuteStateAction:(id /* block */)arg0;
- (BOOL)p_enableStoreVC;
- (id)methodDisposable;
- (void)setMethodDisposable:(id)arg0;
- (BOOL)outManage;
- (BOOL)vcIsLive:(id)arg0;
- (void)didEnterSupportSmallWindowVC:(BOOL)arg0 from:(id)arg1;
- (void)willLeaveSupportSmallWindowVC:(BOOL)arg0;
- (void)willEnterSupportSmallWindowVC:(BOOL)arg0;
- (void)didLeaveSupportSmallWindowVC:(BOOL)arg0;
- (void)backToFeedDrawer;
- (void)trackWithEvent:(id)arg0 extraParam:(id)arg1 eventContext:(id)arg2;
- (void)smallWindowDidTap;
- (void)smallWindowDidClear;
- (void)smallWindowTrackWithEvent:(id)arg0 extraParam:(id)arg1 fromPage:(id)arg2;
- (void)setOutManage:(BOOL)arg0;
- (id /* block */)muteStateAction;
- (id)lastNaviDelegate;
- (void)setLastNaviDelegate:(id)arg0;
- (BOOL)isDisableSmallWindow;
- (void).cxx_destruct;
- (void)navigationController:(id)arg0 didShowViewController:(id)arg1 animated:(BOOL)arg2;
- (void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2;
- (void)dealloc;

@end