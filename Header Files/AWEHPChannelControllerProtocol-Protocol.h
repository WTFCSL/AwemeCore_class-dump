//
//     Generated by private class-dump
//

@protocol AWEHPChannelControllerConfigProtocol;

@protocol AWEHPChannelControllerProtocol <AWEHPChannelLifeCycle>

@property (weak, nonatomic) id<AWEHPChannelControllerConfigProtocol> config;

- (id)getContentViewController;
- (void)setConfig:(id)arg0;
- (id)config;
- (id)initWithConfig:(id)arg0;

@optional

- (BOOL)canShowFeedPendantWithChannelIDs:(id)arg0;
- (id)getPrePluginControllers;
- (id)getPostPluginControllers;

@end
