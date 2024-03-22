//
//     Generated by private class-dump
//

@class NSString, AWEHPXTabChannelManager;

@interface AWEHPXTabChannelTopTabTapPluginController : NSObject <AWEHPChannelPluginControllerProtocol> {
    AWEHPXTabChannelManager *_manager;
    double _lastClickTimestamp;
}

@property (nonatomic) double lastClickTimestamp;
@property (weak, nonatomic) AWEHPXTabChannelManager *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)lastClickTimestamp;
- (void)setLastClickTimestamp:(double)arg0;
- (BOOL)channelTopTabShouldRepeatedClickTab;
- (void).cxx_destruct;
- (void)setManager:(id)arg0;
- (id)manager;

@end
