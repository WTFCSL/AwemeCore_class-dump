//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, AWEStorage, NSMutableArray, NSLock;

@interface IESSessionFeatures : NSObject {
    NSMutableDictionary *_sessionHistoryDic;
    NSMutableArray *_sessionHistoryList;
    NSMutableDictionary *_secToSessionDic;
    NSMutableDictionary *_aidToSessionqDic;
    long long _maxHistoryCount;
    long long _sessionRank;
    NSString *_currentSessionID;
    AWEStorage *_storage;
    NSLock *_historyLock;
}

@property (retain, nonatomic) NSMutableDictionary *sessionHistoryDic;
@property (retain, nonatomic) NSMutableArray *sessionHistoryList;
@property (retain, nonatomic) NSMutableDictionary *secToSessionDic;
@property (retain, nonatomic) NSMutableDictionary *aidToSessionqDic;
@property (nonatomic) long long maxHistoryCount;
@property (nonatomic) long long sessionRank;
@property (retain, nonatomic) NSString *currentSessionID;
@property (retain, nonatomic) AWEStorage *storage;
@property (retain, nonatomic) NSLock *historyLock;

- (void)trackEvent:(unsigned long long)arg0 withParams:(id)arg1;
- (id)historyLock;
- (long long)maxHistoryCount;
- (BOOL)fillFeatures:(id)arg0 withConfig:(id)arg1;
- (void)setMaxHistoryCount:(long long)arg0;
- (void)setHistoryLock:(id)arg0;
- (void)loadHistory;
- (long long)getLastSeqPlayInfoIndex:(BOOL)arg0;
- (void)saveHistory;
- (void)trackPlayWithRequestID:(id)arg0 AID:(id)arg1 sessionID:(id)arg2;
- (void)trackPlayTime:(id)arg0 withAID:(id)arg1;
- (long long)sessionRank;
- (void)setSessionRank:(long long)arg0;
- (void)setSessionHistoryList:(id)arg0;
- (void)setSessionHistoryDic:(id)arg0;
- (void)setSecToSessionDic:(id)arg0;
- (void)setAidToSessionqDic:(id)arg0;
- (id)sessionHistoryList;
- (id)sessionHistoryDic;
- (id)aidToSessionqDic;
- (id)secToSessionDic;
- (void)removeFirstSessionInHistoryList;
- (id)getOrCreateHistoryWithSessionID:(id)arg0;
- (id)getSessionInfoByAID:(id)arg0;
- (BOOL)isNewSequence:(id)arg0;
- (void)setStorage:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)storage;
- (id)currentSessionID;
- (void)setCurrentSessionID:(id)arg0;

@end
