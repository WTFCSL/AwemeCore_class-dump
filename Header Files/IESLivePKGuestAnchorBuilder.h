//
//     Generated by private class-dump
//

@class IESLiveInterativeTimeOutManager, NSString, IESLivePKModel, HTSLiveInteractiveAPI;
@protocol IESLiveRoomServiceAdapter;

@interface IESLivePKGuestAnchorBuilder : NSObject <IESLivePKGuestAnchorBuilderService> {
    id<IESLiveRoomServiceAdapter> _room;
    HTSLiveInteractiveAPI *_interactiveAPI;
    IESLiveInterativeTimeOutManager *_timeOutManager;
    IESLivePKModel *_pkmodel;
}

@property (retain, nonatomic) HTSLiveInteractiveAPI *interactiveAPI;
@property (retain, nonatomic) IESLiveInterativeTimeOutManager *timeOutManager;
@property (retain, nonatomic) IESLivePKModel *pkmodel;
@property (retain, nonatomic) id<IESLiveRoomServiceAdapter> room;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showToast:(id)arg0;
- (void)didSetAttachingDIContext;
- (void)setPkmodel:(id)arg0;
- (id)pkmodel;
- (void)inviteUserWithSecID:(id)arg0 userID:(id)arg1 sourcePage:(id)arg2;
- (void)stopConnectionWithUserID:(id)arg0 secUserID:(id)arg1 requestSource:(id)arg2;
- (id)interactiveAPI;
- (void)setInteractiveAPI:(id)arg0;
- (void)muteGuest:(id)arg0;
- (void)unMuteGuest:(id)arg0;
- (void)acceptConnnection:(id)arg0;
- (BOOL)isInvitingUser:(id)arg0;
- (void)acceptConnnectionWithUserID:(id)arg0 secUserID:(id)arg1 linkType:(unsigned long long)arg2 type:(id)arg3 eventParameters:(id)arg4;
- (void)callOthersTogetherApply;
- (id)timeOutManager;
- (id)getMuteGusetNicknameByUserID:(id)arg0;
- (void)setTimeOutManager:(id)arg0;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:(id)arg0;
- (id)initWithRoom:(id)arg0;

@end
