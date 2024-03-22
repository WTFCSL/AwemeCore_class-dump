//
//     Generated by private class-dump
//

@class NSString, IESLiveChatRoomSelfGuideManagerConfig, IESLiveInteractiveBizFakeUserModel;
@protocol IESLiveChatRoomSelfGuideManagerDelegate, IESLiveChatRoomSelfGuideManagerDataSource;

@interface IESLiveChatRoomSelfGuideManager : NSObject <IESLiveChatRoomSelfGuideProtocol> {
    BOOL _enable;
    BOOL _currentEnable;
    BOOL _isSelfGuideShowing;
    BOOL _hasShowed;
    id<IESLiveChatRoomSelfGuideManagerDataSource> _dataSource;
    id<IESLiveChatRoomSelfGuideManagerDelegate> _userDelegate;
    IESLiveChatRoomSelfGuideManagerConfig *_config;
    IESLiveInteractiveBizFakeUserModel *_preLinkUser;
}

@property (retain, nonatomic) IESLiveChatRoomSelfGuideManagerConfig *config;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL currentEnable;
@property (retain, nonatomic) IESLiveInteractiveBizFakeUserModel *preLinkUser;
@property (nonatomic) BOOL isSelfGuideShowing;
@property (nonatomic) BOOL hasShowed;
@property (weak, nonatomic) id<IESLiveChatRoomSelfGuideManagerDataSource> dataSource;
@property (weak, nonatomic) id<IESLiveChatRoomSelfGuideManagerDelegate> userDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (BOOL)hasShowed;
- (void)setHasShowed:(BOOL)arg0;
- (id)userDelegate;
- (void)setUserDelegate:(id)arg0;
- (BOOL)isPreLinkForTrack;
- (void)setupSelfGuide:(BOOL)arg0;
- (void)setCurrentEnable:(BOOL)arg0;
- (BOOL)currentEnable;
- (BOOL)isSelfGuideShowing;
- (void)setIsSelfGuideShowing:(BOOL)arg0;
- (id)preLinkUser;
- (void)trackPreLinkShow;
- (id)preprocessWithActiveList:(id)arg0;
- (void)setIsInWaitingList:(BOOL)arg0;
- (void)slotLayoutDidChange;
- (void)setPreLinkUser:(id)arg0;
- (BOOL)enable;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (void)setup;
- (id)initWithConfig:(id)arg0;
- (void)setEnable:(BOOL)arg0;

@end
