//
//     Generated by private class-dump
//

@class NSString, TIMXSDKInstance;

@interface TIMXConvLastHintMsgBatchUpdateProcesser : NSObject <TIMXDBConversationORMBatchUpateMangerDelegate> {
    BOOL _shouldRealTimeInjectRule;
    id /* block */ _batchUpdateRuleBlock;
    id /* block */ _realTimeUpdateRuleBlock;
    NSString *_uid;
    TIMXSDKInstance *_r;
}

@property (copy, nonatomic) NSString *uid;
@property (copy, nonatomic) id /* block */ batchUpdateRuleBlock;
@property (copy, nonatomic) id /* block */ realTimeUpdateRuleBlock;
@property (nonatomic) BOOL shouldRealTimeInjectRule;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)clearVersionWithUid:(id)arg0;
+ (void)clearVersionWithRootObject:(id)arg0 uid:(id)arg1;
+ (id)__getVersionWithRootObject:(id)arg0 uid:(id)arg1;
+ (void)__setVersionWithRootObject:(id)arg0 version:(id)arg1 uid:(id)arg2;
+ (void)__updateLastHintMsgWithRootObject:(id)arg0 latestSubMessages:(id)arg1 conv:(id)arg2;
+ (void)realTimeUpdateLastHintMsgWithRootObject:(id)arg0 conv:(id)arg1 changedMsg:(id)arg2 reason:(long long)arg3 transaction:(id)arg4;
+ (id)__getVersionKeyWithUid:(id)arg0;
+ (void)realTimeUpdateLastHintMsgWithRootObject:(id)arg0 conv:(id)arg1 changedMsg:(id)arg2 reason:(long long)arg3;

- (BOOL)needBatchUpdateDB;
- (BOOL)hasBatchUpdateDone;
- (void)finishBatchUpdateAndSetNowVersion;
- (id)initWithUid:(id)arg0 shouldRealTimeInjectRule:(BOOL)arg1;
- (id /* block */)batchUpdateRuleBlock;
- (void)setBatchUpdateRuleBlock:(id /* block */)arg0;
- (id /* block */)realTimeUpdateRuleBlock;
- (void)setRealTimeUpdateRuleBlock:(id /* block */)arg0;
- (BOOL)shouldRealTimeInjectRule;
- (void)setShouldRealTimeInjectRule:(BOOL)arg0;
- (id)initWithRootObject:(id)arg0 uid:(id)arg1 shouldRealTimeInjectRule:(BOOL)arg2;
- (void)setUid:(id)arg0;
- (id)uid;
- (void).cxx_destruct;

@end
