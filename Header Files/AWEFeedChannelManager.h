//
//     Generated by private class-dump
//

@class AWEHPEditPanelController, AWEHPMessageForwardManager;

@interface AWEFeedChannelManager : AWEHPChannelBaseManager {
    AWEHPMessageForwardManager *_messageForwardManager;
    AWEHPEditPanelController *_editPanelController;
}

@property (retain, nonatomic) AWEHPMessageForwardManager *messageForwardManager;
@property (retain, nonatomic) AWEHPEditPanelController *editPanelController;

+ (id)createHomepageChannel;
+ (id)sharedInstance;

- (void)tabBarWillUnSelectItemWithLeaveModel:(id)arg0;
- (void)tabBarWillSelectItemWithEnterModel:(id)arg0;
- (void)reloadChannelWithChannelModels:(id)arg0 currentChannelIDList:(id)arg1 reloadType:(id)arg2 selectedChannelID:(id)arg3;
- (void)didSetupChannel:(id)arg0;
- (void)p_sendMonitorWithChannel:(id)arg0 event:(id)arg1 metric:(id)arg2 category:(id)arg3 extra:(id)arg4;
- (BOOL)callCanLandingTabWithConfig:(id)arg0;
- (id)getFeedHomePageContextWithChannel:(id)arg0;
- (void)willSwitchSelectedChannelFromChannel:(id)arg0 toChannel:(id)arg1 config:(id)arg2;
- (void)didSwitchSelectedChannelFromChannel:(id)arg0 toChannel:(id)arg1 config:(id)arg2;
- (void)didUpdateCurrentChannels:(id)arg0;
- (id)messageForwardManager;
- (void)callEnterUsingRecursiveWithModel:(id)arg0;
- (void)callLeaveUsingRecursiveWithModel:(id)arg0;
- (void)callTopTabContainerDidAppear;
- (id)getTopTabEditPanelController;
- (id)getHPTrackController;
- (id)getEditPanelConfig;
- (id)editPanelController;
- (id)selectedTabIDWithChannel:(id)arg0;
- (BOOL)isEditPanelShowing;
- (id)getFactoryEnvConfig;
- (id)getDefaultChannelWithChannels:(id)arg0;
- (id)getTopBarStageWithChannel:(id)arg0;
- (void)callLandingEnterXTabNotRecursiveWithEnterModel:(id)arg0 leaveModel:(id)arg1;
- (id)p_getReorderedAllChannelListWithCurrentChannelList:(id)arg0;
- (void)setMessageForwardManager:(id)arg0;
- (void)setEditPanelController:(id)arg0;
- (void).cxx_destruct;

@end
