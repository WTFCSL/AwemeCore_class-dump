//
//     Generated by private class-dump
//

@class NSString, UIViewController;
@protocol AWEHPChannelControllerConfigProtocol, AWEFeedTabItemViewControllerProtocol;

@interface AWEFeedHotSpotChannelController : NSObject <AWEHPChannelControllerProtocol> {
    id<AWEHPChannelControllerConfigProtocol> _config;
    UIViewController<AWEFeedTabItemViewControllerProtocol> *_contentVC;
}

@property (retain, nonatomic) UIViewController<AWEFeedTabItemViewControllerProtocol> *contentVC;
@property (weak, nonatomic) id<AWEHPChannelControllerConfigProtocol> config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)channelLandingTabWithParams:(id)arg0;
- (void)channelEnterWithModel:(id)arg0;
- (id)contentVC;
- (id)topBarAbility;
- (void)channelTopTabContainerDidAppear;
- (void)topTabScrollDidReachStableEnd;
- (void)channelDidLoad;
- (id)getContentViewController;
- (void)setContentVC:(id)arg0;
- (void)tryTriggerBubble;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)initWithConfig:(id)arg0;

@end
