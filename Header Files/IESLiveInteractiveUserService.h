//
//     Generated by private class-dump
//

@class NSHashTable, RACDisposable, NSArray, NSString, IESLiveLinkMicListResponse, IESLiveCountTimer, IESLiveInteractiveUserMonitor, NSMutableArray, IESLiveInteractiveUserServiceConfig, HTSLiveInteractiveAPIV2, NSNumber;
@protocol IESLiveInteractiveUserServiceSignalDelegate, IESLiveInteractiveUserServiceDataSource, IESLiveInteractUserModel;

@interface IESLiveInteractiveUserService : NSObject <IESLiveInteractiveExtendUserService, IESLiveInteractiveLinkServiceDelegate> {
    BOOL _isLoadingInteractiveList;
    BOOL _checkLinkerProtectState;
    id<IESLiveInteractUserModel> anchorInteractUserModel;
    id<IESLiveInteractUserModel> host;
    id<IESLiveInteractiveUserServiceDataSource> dataSource;
    id<IESLiveInteractUserModel> _me;
    NSMutableArray *_interactiveList;
    NSNumber *_fetchTimeStamp;
    IESLiveInteractiveUserServiceConfig *_config;
    id<IESLiveInteractiveUserServiceSignalDelegate> _signalDelegate;
    NSHashTable *_allDelegates;
    NSNumber *_fetchListTimeStamp;
    IESLiveLinkMicListResponse *_currentListData;
    long long _currentVersion;
    RACDisposable *_disposable;
    HTSLiveInteractiveAPIV2 *_interactAPI;
    IESLiveInteractiveUserMonitor *_monitor;
    IESLiveCountTimer *_checkLinkerTimer;
    NSArray *_rtcActivedList;
    double _checkLinkerInterval;
}

@property (retain, nonatomic) NSHashTable *allDelegates;
@property (retain, nonatomic) NSMutableArray *interactiveList;
@property (retain, nonatomic) NSNumber *fetchListTimeStamp;
@property (retain, nonatomic) IESLiveLinkMicListResponse *currentListData;
@property (nonatomic) long long currentVersion;
@property (retain, nonatomic) RACDisposable *disposable;
@property (nonatomic) BOOL isLoadingInteractiveList;
@property (retain, nonatomic) HTSLiveInteractiveAPIV2 *interactAPI;
@property (retain, nonatomic) IESLiveInteractiveUserMonitor *monitor;
@property (retain, nonatomic) IESLiveCountTimer *checkLinkerTimer;
@property (copy, nonatomic) NSArray *rtcActivedList;
@property (nonatomic) double checkLinkerInterval;
@property (nonatomic) BOOL checkLinkerProtectState;
@property (readonly, nonatomic) NSNumber *fetchTimeStamp;
@property (retain, nonatomic) IESLiveInteractiveUserServiceConfig *config;
@property (weak, nonatomic) id<IESLiveInteractiveUserServiceSignalDelegate> signalDelegate;
@property (readonly, nonatomic) NSMutableArray *waitingList;
@property (weak, nonatomic) id<IESLiveInteractiveUserServiceDataSource> dataSource;
@property (readonly, nonatomic) id<IESLiveInteractUserModel> anchorInteractUserModel;
@property (readonly, nonatomic) NSMutableArray *activedList;
@property (retain, nonatomic) id<IESLiveInteractUserModel> host;
@property (retain, nonatomic) id<IESLiveInteractUserModel> me;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)fetchTimeStamp;
- (void)setDisposable:(id)arg0;
- (id)disposable;
- (id)initWithConfig:(id)arg0 diContext:(id)arg1;
- (id)allDelegates;
- (void)setAllDelegates:(id)arg0;
- (void)onReceivedLinkedListChangeMessage:(id)arg0;
- (id)userByLinkmicId:(id)arg0;
- (id)userByUserId:(id)arg0;
- (id)userBySecUserId:(id)arg0;
- (id)activedList;
- (id)waitingList;
- (id)interactAPI;
- (void)setInteractAPI:(id)arg0;
- (id)interactiveList;
- (void)onReceivedLinkEnterMessage:(id)arg0;
- (void)onReceivedLinkWatingListChangeMessage:(id)arg0;
- (void)onReceivedLinkUpdateUserMessage:(id)arg0;
- (void)onReceivedActiveSignalMessage:(id)arg0;
- (void)onReceivedSwitchStreamMessage:(id)arg0;
- (void)checkRTCListIfNeeded:(id)arg0;
- (void)reloadInteractiveListAllWithSource:(unsigned long long)arg0;
- (BOOL)updateSpeakingUsers:(id)arg0;
- (BOOL)updateSelfSpeaking:(unsigned long long)arg0;
- (id)userByBackupLinkmicId:(id)arg0;
- (id)userByRole:(int)arg0;
- (id)anchorInteractUserModel;
- (void)userActiveChanged:(BOOL)arg0 linkmicId:(id)arg1;
- (void)removeInteractiveModelWithUid:(id)arg0;
- (void)addInteractiveModel:(id)arg0;
- (void)reloadInteractiveListAllWithSource:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (id)currentListData;
- (void)mergeModels:(id)arg0 byStatusCategory:(int)arg1 version:(long long)arg2;
- (void)setSignalDelegate:(id)arg0;
- (id)guestByUserID:(id)arg0;
- (void)reloadInteractiveListAllWithSource:(unsigned long long)arg0 listStatus:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (BOOL)checkLinkerProtectState;
- (id)rtcActivedList;
- (void)checkRTCSortedList:(id)arg0 requestSource:(id)arg1;
- (id)checkLinkerTimer;
- (void)setCheckLinkerTimer:(id)arg0;
- (void)setRtcActivedList:(id)arg0;
- (void)startCheckLinkerTimer;
- (void)setCheckLinkerProtectState:(BOOL)arg0;
- (void)setCheckLinkerInterval:(double)arg0;
- (double)checkLinkerInterval;
- (BOOL)isLoadingInteractiveList;
- (void)setIsLoadingInteractiveList:(BOOL)arg0;
- (void)setCurrentListData:(id)arg0;
- (id)alogDescFromInteractUserList:(id)arg0;
- (void)setFetchListTimeStamp:(id)arg0;
- (void)notifyListDataUpdate2Delegates;
- (void)notifyInteractiveListUpdate2Delegates;
- (void)notifyMultiRoomInteractiveListUpdate2Delegates;
- (void)notifyOtherRoomInteractiveSilenceUpdate2Delegates;
- (void)onMuteWithLinkMessgae:(id)arg0;
- (BOOL)isMuteByOthersWithFromUid:(id)arg0 toUid:(id)arg1;
- (void)notifyOnGuestMute:(BOOL)arg0;
- (void)ackMessage:(id)arg0;
- (BOOL)updateSomeoneSpeaking:(id)arg0 talking:(unsigned long long)arg1;
- (void)setInteractiveList:(id)arg0;
- (id)fetchListTimeStamp;
- (id)signalDelegate;
- (long long)addModel:(id)arg0 local:(BOOL)arg1;
- (long long)updateModelWithUserID:(id)arg0 newModel:(id)arg1 local:(BOOL)arg2;
- (BOOL)checkValidDataIfNeeded:(long long)arg0 source:(id)arg1 target:(id)arg2;
- (void)checkListSpecificChange:(id)arg0;
- (id)alogDescFromInteractUserSet:(id)arg0;
- (void)notifyLinkerRoleChange2Delegates:(id)arg0;
- (void)removeAll;
- (void)setMe:(id)arg0;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void)setHost:(id)arg0;
- (void)addDelegate:(id)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)monitor;
- (id)me;
- (id)config;
- (void)setMonitor:(id)arg0;
- (void)removeDelegate:(id)arg0;
- (long long)addModel:(id)arg0;
- (id)host;
- (long long)currentVersion;
- (void)dealloc;
- (void)setCurrentVersion:(long long)arg0;

@end