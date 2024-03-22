//
//     Generated by private class-dump
//

@protocol AWEXTabBaseChannelControllerProtocol;

@protocol AWEXTabChildViewControllerProtocol <NSObject>

@property (nonatomic, weak) id<AWEXTabBaseChannelControllerProtocol> channelController;

- (id)referString;
- (id)channelController;
- (void)setChannelController:(id)arg0;

@optional

- (void)updatePreviousPage:(id)arg0;
- (BOOL)isCommentPanelShowing;
- (BOOL)isAITextPanelShowing;
- (BOOL)isVideoDescriptionPanelShowing;
- (BOOL)isVideoRelatedPanelShowing;
- (id)xtabFeedTableViewController;
- (BOOL)checkLeftPanWidth:(double)arg0;
- (BOOL)isSkyLightViewShowing;
- (void)didTopTabBarShowChanged:(BOOL)arg0;
- (void)play;

@end