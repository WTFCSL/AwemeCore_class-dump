//
//     Generated by private class-dump
//

@class NSString;
@protocol AWEHPChannelControllerConfigProtocol;

@interface AWESearchFestivalActivityPluginController : NSObject <AWEHPChannelPluginControllerProtocol> {
    BOOL _shouldShowPopView;
    id<AWEHPChannelControllerConfigProtocol> _channelConfig;
    NSString *_feedToast;
    NSString *_iconUrl;
}

@property (weak, nonatomic) id<AWEHPChannelControllerConfigProtocol> channelConfig;
@property (nonatomic) BOOL shouldShowPopView;
@property (copy, nonatomic) NSString *feedToast;
@property (copy, nonatomic) NSString *iconUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)channelLandingTabWithParams:(id)arg0;
- (id)iconUrl;
- (void)setIconUrl:(id)arg0;
- (id)channelConfig;
- (void)setChannelConfig:(id)arg0;
- (BOOL)shouldShowPopView;
- (void)channelViewDidAppear;
- (void)channelViewDidDisappear;
- (void)setShouldShowPopView:(BOOL)arg0;
- (void)setFeedToast:(id)arg0;
- (void)showSearchPopView;
- (id)feedToast;
- (void).cxx_destruct;
- (id)initWithConfig:(id)arg0;

@end
