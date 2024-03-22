//
//     Generated by private class-dump
//

@class NSString, UIViewController;
@protocol IESECMallChannelViewControllerProtocol, IESECMallChannelConfigProtocol;

@interface AWEECMallHybirdChannelController : NSObject <AWEECMallContainerOptSceneProtocol, IESECMallChannelControllerProtocol> {
    BOOL _isFirstLaunchChannel;
    id<IESECMallChannelConfigProtocol> _config;
    UIViewController<IESECMallChannelViewControllerProtocol> *_contentVC;
}

@property (retain, nonatomic) UIViewController<IESECMallChannelViewControllerProtocol> *contentVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL isFirstLaunchChannel;
@property (retain, nonatomic) id<IESECMallChannelConfigProtocol> config;

- (void)channelEnterWithModel:(id)arg0;
- (void)channelLeaveWithModel:(id)arg0;
- (id)contentVC;
- (void)channelDidLoad;
- (void)channelDidUnload;
- (id)getContentViewController;
- (void)setContentVC:(id)arg0;
- (void)preCreateContainer;
- (unsigned long long)p_needPreCreateContainer;
- (void)channelContextDidChange:(id)arg0;
- (id)lynxTemplates;
- (void)trackPreloadTemplate:(BOOL)arg0;
- (void)preDownloadTemplates;
- (BOOL)isFirstLaunchChannel;
- (void)setIsFirstLaunchChannel:(BOOL)arg0;
- (void)configContainerRealOpenTime:(id)arg0;
- (void)clearWhileMemoryDanger;
- (void)mallShoppingTabDidFirstScreen;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)initWithConfig:(id)arg0;

@end