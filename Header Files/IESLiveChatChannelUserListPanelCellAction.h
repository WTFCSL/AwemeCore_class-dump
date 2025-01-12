//
//     Generated by private class-dump
//

@class NSArray;
@protocol IESLiveChatChannelUserListPanelCellActionResponder, IESLiveChatChannelUserListPanelCellDataProvider;

@interface IESLiveChatChannelUserListPanelCellAction : NSObject {
    BOOL _enableInvite;
    NSArray *_memberActionModels;
    long long _actionButtonType;
    id /* block */ _infoSettingActin;
    id /* block */ _inviteActin;
    id<IESLiveChatChannelUserListPanelCellActionResponder> _responder;
    id<IESLiveChatChannelUserListPanelCellDataProvider> _dataProvider;
}

@property (weak, nonatomic) id<IESLiveChatChannelUserListPanelCellDataProvider> dataProvider;
@property (copy, nonatomic) NSArray *memberActionModels;
@property (nonatomic) long long actionButtonType;
@property (copy, nonatomic) id /* block */ infoSettingActin;
@property (nonatomic) BOOL enableInvite;
@property (copy, nonatomic) id /* block */ inviteActin;
@property (weak, nonatomic) id<IESLiveChatChannelUserListPanelCellActionResponder> responder;

- (BOOL)enableInvite;
- (id /* block */)infoSettingActin;
- (id /* block */)inviteActin;
- (id)memberActionModels;
- (id)actionModelsForDefault:(id)arg0;
- (id)actionModelsForDefaultSelf:(id)arg0;
- (id)actionModelsForDefaultOpratable:(id)arg0;
- (id)actionModelsForWaitingSelf:(id)arg0;
- (id)actionModelsForWaitingOperatable:(id)arg0 isInvite:(BOOL)arg1;
- (id)actionModelsForInvitedSelf:(id)arg0;
- (id)actionModelsForLinkedSelf:(id)arg0;
- (id)actionModelsForLinkedOthers:(id)arg0;
- (id)actionModelsForLinkedOthersOperatable:(id)arg0;
- (void)setMemberActionModels:(id)arg0;
- (void)bindActionsWithUser:(id)arg0 style:(unsigned long long)arg1;
- (void)setInfoSettingActin:(id /* block */)arg0;
- (void)setEnableInvite:(BOOL)arg0;
- (void)setInviteActin:(id /* block */)arg0;
- (id)dataProvider;
- (id)responder;
- (void)setDataProvider:(id)arg0;
- (void)setResponder:(id)arg0;
- (void).cxx_destruct;
- (long long)actionButtonType;
- (void)setActionButtonType:(long long)arg0;

@end
