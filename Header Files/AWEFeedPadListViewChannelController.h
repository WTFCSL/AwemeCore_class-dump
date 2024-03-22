//
//     Generated by private class-dump
//

@class DUXPopover, NSString, AWEPadListViewChannelInfo, UIViewController;
@protocol AWEFeedTabItemViewControllerProtocol, AWEHPActivityDispatchComponentProtocol, AWEHPChannelControllerConfigProtocol, AWEPadListViewChannelGuideManagerProtocol;

@interface AWEFeedPadListViewChannelController : NSObject <AWEFeedPadListViewChannelGuideManagerDelegate, AWEHPChannelControllerProtocol> {
    id<AWEHPChannelControllerConfigProtocol> _config;
    UIViewController<AWEFeedTabItemViewControllerProtocol> *_contentVC;
    AWEPadListViewChannelInfo *_channelInfo;
    id<AWEHPActivityDispatchComponentProtocol> _dispatchComponent;
    id<AWEPadListViewChannelGuideManagerProtocol> _guideManager;
    DUXPopover *_popOver;
}

@property (retain, nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol> *contentVC;
@property (retain, nonatomic) AWEPadListViewChannelInfo *channelInfo;
@property (retain, nonatomic) id<AWEHPActivityDispatchComponentProtocol> dispatchComponent;
@property (retain, nonatomic) id<AWEPadListViewChannelGuideManagerProtocol> guideManager;
@property (retain, nonatomic) DUXPopover *popOver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWEHPChannelControllerConfigProtocol> config;

+ (Class)aAWEPadModuleAdapterClass;

- (void)channelLandingTabWithParams:(id)arg0;
- (id)aAWEPadModuleAdapter;
- (id)getCustomTrackParamsWithTrackInfo:(id)arg0;
- (void)hideBadgeWithCompletion:(id /* block */)arg0;
- (id)contentVC;
- (void)channelDidLoad;
- (BOOL)channelIsAvailableWithError:(id *)arg0;
- (void)channelViewDidAppear;
- (void)channelViewDidDisappear;
- (BOOL)channelRefreshWithModel:(id)arg0 completion:(id /* block */)arg1;
- (id)getContentViewController;
- (void)setContentVC:(id)arg0;
- (id)guideManager;
- (void)setGuideManager:(id)arg0;
- (void)setChannelInfo:(id)arg0;
- (void)showBadge:(id)arg0 completion:(id /* block */)arg1;
- (void)showBubble:(id)arg0 clickCallBack:(id /* block */)arg1 completion:(id /* block */)arg2 dismissBlock:(id /* block */)arg3;
- (void)updateTopBarLottie:(id)arg0 completion:(id /* block */)arg1;
- (id)dispatchComponent;
- (void)setDispatchComponent:(id)arg0;
- (id)refreshMethod:(unsigned long long)arg0;
- (void)trackRefreshData:(unsigned long long)arg0;
- (void)setPopOver:(id)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)initWithConfig:(id)arg0;
- (id)channelInfo;
- (id)popOver;

@end