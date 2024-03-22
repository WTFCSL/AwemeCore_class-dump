//
//     Generated by private class-dump
//

@class NSString;
@protocol ECOMTIMInboxPullerGroupDelegate, ECOMTIMKVStorageProtocol, ECOMTIMPullerStatusChangeObserverDelegate, ECOMTIMMessageStoreProtocol;

@interface ECOMTIMSingleStrategyPuller : NSObject {
    BOOL _fullInitFinished;
    BOOL _cursorInited;
    BOOL _isVersionValid;
    int _inbox;
    long long _userID;
    id<ECOMTIMMessageStoreProtocol> _db;
    id<ECOMTIMKVStorageProtocol> _kvStorage;
    id<ECOMTIMInboxPullerGroupDelegate> _pullerGroupDelegate;
    long long _cursor;
    long long _cmdMessageIndex;
    long long _conversationVersion;
    NSString *_logMarkerForInit;
    unsigned long long _pullerInitStatus;
    NSString *_pullerInitStatusKey;
    NSString *_kvCursorKey;
    NSString *_kvCmdMessageIndexKey;
    NSString *_kvConversationVersionKey;
    id<ECOMTIMPullerStatusChangeObserverDelegate> _notifier;
    long long _hasFetchedConvCounts;
    NSString *_kvCursorInitedKey;
    NSString *_kvLocationCursorKey;
    double _pullStartTime;
    unsigned long long _retryCount;
    double _netInitPullALLTime;
    double _dbInitPullALLTime;
    long long _netInitPullALLCount;
    long long _hasFetchedMsgCounts;
}

@property (nonatomic) long long userID;
@property (nonatomic) int inbox;
@property (retain, nonatomic) id<ECOMTIMMessageStoreProtocol> db;
@property (retain, nonatomic) id<ECOMTIMKVStorageProtocol> kvStorage;
@property (retain, nonatomic) NSString *logMarkerForInit;
@property (nonatomic) BOOL fullInitFinished;
@property unsigned long long pullerInitStatus;
@property (copy, nonatomic) NSString *pullerInitStatusKey;
@property (copy, nonatomic) NSString *kvCursorKey;
@property (copy, nonatomic) NSString *kvCmdMessageIndexKey;
@property (copy, nonatomic) NSString *kvConversationVersionKey;
@property (nonatomic) BOOL cursorInited;
@property (readonly, nonatomic) BOOL hasInitSuccess;
@property (nonatomic) BOOL isVersionValid;
@property (retain, nonatomic) id<ECOMTIMPullerStatusChangeObserverDelegate> notifier;
@property long long hasFetchedConvCounts;
@property (copy, nonatomic) NSString *kvCursorInitedKey;
@property (copy, nonatomic) NSString *kvLocationCursorKey;
@property (nonatomic) double pullStartTime;
@property (nonatomic) unsigned long long retryCount;
@property (nonatomic) double netInitPullALLTime;
@property (nonatomic) double dbInitPullALLTime;
@property (nonatomic) long long netInitPullALLCount;
@property (nonatomic) long long hasFetchedMsgCounts;
@property (weak, nonatomic) id<ECOMTIMInboxPullerGroupDelegate> pullerGroupDelegate;
@property (nonatomic) long long cursor;
@property (nonatomic) long long cmdMessageIndex;
@property (nonatomic) long long conversationVersion;

+ (id)conversationVersionKeyForInbox:(int)arg0;
+ (id)cmdMessageIndexKeyForInbox:(int)arg0;
+ (BOOL)hasConversationVersion:(int)arg0;
+ (id)cursorKeyForInbox:(int)arg0;

- (id)kvStorage;
- (void)setKvStorage:(id)arg0;
- (double)pullStartTime;
- (void)setPullStartTime:(double)arg0;
- (void)startInit;
- (BOOL)hasInitSuccess;
- (id)initWithInbox:(int)arg0 userID:(long long)arg1;
- (void)setNeedsPullWithReason:(long long)arg0;
- (void)setPullerInitStatus:(unsigned long long)arg0;
- (unsigned long long)pullerInitStatus;
- (void)setLogMarkerForInit:(id)arg0;
- (double)netInitPullALLTime;
- (void)setNetInitPullALLTime:(double)arg0;
- (long long)netInitPullALLCount;
- (void)setNetInitPullALLCount:(long long)arg0;
- (long long)hasFetchedConvCounts;
- (long long)hasFetchedMsgCounts;
- (void)setHasFetchedMsgCounts:(long long)arg0;
- (void)setHasFetchedConvCounts:(long long)arg0;
- (double)dbInitPullALLTime;
- (void)setDbInitPullALLTime:(double)arg0;
- (void)finishInitWithError:(id)arg0;
- (id)logMarkerForInit;
- (long long)conversationVersion;
- (long long)cmdMessageIndex;
- (void)notifyNewMessageWithResponse:(id)arg0;
- (void)setPullerGroupDelegate:(id)arg0;
- (void)pollingPull:(BOOL)arg0;
- (void)setConversationVersion:(long long)arg0;
- (BOOL)cursorInited;
- (void)setCmdMessageIndex:(long long)arg0;
- (void)writeCursor;
- (void)writeConversationVersion;
- (id)pullerGroupDelegate;
- (void)setKvCursorKey:(id)arg0;
- (long long)readCursor;
- (void)updatePullerCursorWithResponse:(id)arg0 context:(id)arg1;
- (void)setIsVersionValid:(BOOL)arg0;
- (void)writeCmdMessageIndex;
- (id)kvLocationCursorKey;
- (void)fetchInitListWithNextCursor:(long long)arg0;
- (void)traceInitInfoWithLogID:(id)arg0;
- (void)setKvLocationCursorKey:(id)arg0;
- (void)setKvCursorInitedKey:(id)arg0;
- (void)setPullerInitStatusKey:(id)arg0;
- (void)setKvCmdMessageIndexKey:(id)arg0;
- (void)setKvConversationVersionKey:(id)arg0;
- (void)setupKeys;
- (void)setCursorInited:(BOOL)arg0;
- (id)kvCursorInitedKey;
- (id)pullerInitStatusKey;
- (BOOL)isConversationVersionValid;
- (BOOL)isCmdMessageIndexValid;
- (BOOL)isVersionValid;
- (long long)readCmdMessageIndex;
- (long long)readConversationVersion;
- (void)resetInitPuller;
- (id)kvCursorKey;
- (id)kvCmdMessageIndexKey;
- (id)kvConversationVersionKey;
- (unsigned long long)getInitStatus;
- (BOOL)fullInitFinished;
- (void)setFullInitFinished:(BOOL)arg0;
- (long long)userID;
- (long long)cursor;
- (void)setDb:(id)arg0;
- (id)db;
- (id)notifier;
- (void).cxx_destruct;
- (void)setRetryCount:(unsigned long long)arg0;
- (unsigned long long)retryCount;
- (void)setUserID:(long long)arg0;
- (void)setCursor:(long long)arg0;
- (void)kickoff;
- (void)setNotifier:(id)arg0;
- (int)inbox;
- (void)setInbox:(int)arg0;

@end