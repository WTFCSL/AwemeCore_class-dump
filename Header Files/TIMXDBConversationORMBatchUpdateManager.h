//
//     Generated by private class-dump
//

@class NSString, NSPointerArray, TIMXSDKInstance;

@interface TIMXDBConversationORMBatchUpdateManager : NSObject <IESIMSDKDBConversationORMBatchUpdateManager, TIMXInstanceScopeSingleton> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwRuleLock;
    BOOL _hasLastMsgBatchUpdateDone;
    BOOL _hasLastHintMsgBatchUpdateDone;
    TIMXSDKInstance *_r;
    NSString *_userID;
    NSPointerArray *_rules;
    NSPointerArray *_needBatchUpdateDBRules;
    NSPointerArray *_relyConvSettingInfoChangedRules;
    NSPointerArray *_relyConvParticipantsChangedRules;
    NSPointerArray *_relyConvInfoChangedRules;
    NSPointerArray *_relyConvUnreadCountChangedRules;
    NSPointerArray *_relyConvLastMsgChangedRules;
    NSPointerArray *_relyConvBoxTypeMaskChangedRules;
    NSPointerArray *_relyConvLocalExtDictChangedRules;
    NSPointerArray *_relyConvCoreInfoChangedRules;
    NSPointerArray *_relyConvLastHintMsgChangedRules;
    NSPointerArray *_relyConvBotsChangedRules;
}

@property (nonatomic) BOOL hasLastMsgBatchUpdateDone;
@property (nonatomic) BOOL hasLastHintMsgBatchUpdateDone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain) NSString *userID;
@property (retain, nonatomic) NSPointerArray *rules;
@property (retain, nonatomic) NSPointerArray *needBatchUpdateDBRules;
@property (retain, nonatomic) NSPointerArray *relyConvSettingInfoChangedRules;
@property (retain, nonatomic) NSPointerArray *relyConvParticipantsChangedRules;
@property (retain, nonatomic) NSPointerArray *relyConvInfoChangedRules;
@property (retain, nonatomic) NSPointerArray *relyConvUnreadCountChangedRules;
@property (retain, nonatomic) NSPointerArray *relyConvLastMsgChangedRules;
@property (retain, nonatomic) NSPointerArray *relyConvBoxTypeMaskChangedRules;
@property (retain, nonatomic) NSPointerArray *relyConvLocalExtDictChangedRules;
@property (retain, nonatomic) NSPointerArray *relyConvCoreInfoChangedRules;
@property (retain, nonatomic) NSPointerArray *relyConvLastHintMsgChangedRules;
@property (retain, nonatomic) NSPointerArray *relyConvBotsChangedRules;
@property (nonatomic) BOOL hasLastMsgBatchUpdateDone;
@property (nonatomic) BOOL hasLastHintMsgBatchUpdateDone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loginWithUid:(id)arg0;
- (BOOL)hasLastMsgBatchUpdateDone;
- (BOOL)hasLastHintMsgBatchUpdateDone;
- (void)updateConvWhenBoxTypeMaskChangedWithConv:(id)arg0;
- (void)setHasLastMsgBatchUpdateDone:(BOOL)arg0;
- (void)setHasLastHintMsgBatchUpdateDone:(BOOL)arg0;
- (void)updateConvWhenConvParticipantsChangedWithConv:(id)arg0;
- (void)updateConvWhenConvInfoChangedWithConv:(id)arg0;
- (void)updateConvWhenConvBotsChangedWithConv:(id)arg0;
- (void)updateConvWhenLocalExtDictChangedWithConv:(id)arg0;
- (void)updateConvWhenConvUnreadCountChangedWithConv:(id)arg0;
- (void)updateConvWhenConvLastHintMsgChangedWithConv:(id)arg0;
- (void)updateConvWhenConvLastMsgChangedWithConv:(id)arg0;
- (void)startDBConversationORMBatchUpdateTask;
- (void)__resetRules;
- (id)needBatchUpdateDBRules;
- (id)relyConvSettingInfoChangedRules;
- (id)relyConvParticipantsChangedRules;
- (id)relyConvInfoChangedRules;
- (id)relyConvUnreadCountChangedRules;
- (id)relyConvLastMsgChangedRules;
- (id)relyConvBoxTypeMaskChangedRules;
- (id)relyConvLocalExtDictChangedRules;
- (id)relyConvCoreInfoChangedRules;
- (id)relyConvLastHintMsgChangedRules;
- (id)relyConvBotsChangedRules;
- (void)rdLock;
- (void)setNeedBatchUpdateDBRules:(id)arg0;
- (void)setRelyConvSettingInfoChangedRules:(id)arg0;
- (void)setRelyConvParticipantsChangedRules:(id)arg0;
- (void)setRelyConvInfoChangedRules:(id)arg0;
- (void)setRelyConvUnreadCountChangedRules:(id)arg0;
- (void)setRelyConvLastMsgChangedRules:(id)arg0;
- (void)setRelyConvLocalExtDictChangedRules:(id)arg0;
- (void)setRelyConvCoreInfoChangedRules:(id)arg0;
- (void)setRelyConvLastHintMsgChangedRules:(id)arg0;
- (void)setRelyConvBoxTypeMaskChangedRules:(id)arg0;
- (void)setRelyConvBotsChangedRules:(id)arg0;
- (void)updateConvWhenConvSettingsInfoChangedWithConv:(id)arg0;
- (void)updateConvWhenConvCoreInfoChangedWithConv:(id)arg0;
- (id)userID;
- (void)unlock;
- (void).cxx_destruct;
- (void)setRules:(id)arg0;
- (void)setUserID:(id)arg0;
- (void)addRule:(id)arg0;
- (id)rules;
- (void)dealloc;
- (void)removeRule:(id)arg0;
- (id)initWithRootObject:(id)arg0;
- (void)wrlock;

@end