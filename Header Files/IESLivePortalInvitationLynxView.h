//
//     Generated by private class-dump
//

@class IESLivePortalLogNode, NSString, IESLiveInvitePortalModel;

@interface IESLivePortalInvitationLynxView : IESLivePortalLynxView <IESLivePluginLayoutViewAdapter> {
    IESLiveInvitePortalModel *_inviteInfo;
    IESLivePortalLogNode *_logNode;
    IESLiveInvitePortalModel *_model;
}

@property (retain, nonatomic) IESLivePortalLogNode *logNode;
@property (retain, nonatomic) IESLiveInvitePortalModel *model;
@property (retain, nonatomic) IESLiveInvitePortalModel *inviteInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (void)startShowAnimation:(id /* block */)arg0;
- (void)setLogNode:(id)arg0;
- (id)logNode;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 withModel:(id)arg1 logNode:(id)arg2;
- (void)setInviteInfo:(id)arg0;
- (id)inviteInfo;
- (void)updateInviteInfo:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (void)didMoveToSuperview;
- (id)viewType;

@end