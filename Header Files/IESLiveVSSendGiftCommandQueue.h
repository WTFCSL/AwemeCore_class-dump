//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSDictionary, NSMutableArray, NSNumber;
@protocol IESLiveVSSendGiftCommandQueueDelegate, IESLiveVSSendGiftCommandExcutor;

@interface IESLiveVSSendGiftCommandQueue : NSObject {
    BOOL _isRunning;
    BOOL _endTag;
    BOOL _firstSuccessTag;
    BOOL _hasSendGift;
    id<IESLiveVSSendGiftCommandExcutor> _executor;
    id<IESLiveVSSendGiftCommandQueueDelegate> _delegate;
    NSDictionary *_extra;
    id /* block */ _didCreateReport;
    id /* block */ _didStart;
    id /* block */ _didEnd;
    NSMutableArray *_queue;
    long long _totalCount;
    NSString *_t_toUserID;
    NSNumber *_t_giftID;
    NSNumber *_t_giftCnt;
    NSMutableDictionary *_t_giftInfo;
    NSNumber *_t_money;
    unsigned long long _successTimes;
}

@property (retain, nonatomic) NSMutableArray *queue;
@property (nonatomic) BOOL isRunning;
@property (nonatomic) BOOL endTag;
@property (nonatomic) long long totalCount;
@property (nonatomic) BOOL firstSuccessTag;
@property (retain, nonatomic) NSString *t_toUserID;
@property (retain, nonatomic) NSNumber *t_giftID;
@property (retain, nonatomic) NSNumber *t_giftCnt;
@property (retain, nonatomic) NSMutableDictionary *t_giftInfo;
@property (retain, nonatomic) NSNumber *t_money;
@property (nonatomic) unsigned long long successTimes;
@property (nonatomic) BOOL hasSendGift;
@property (weak, nonatomic) id<IESLiveVSSendGiftCommandExcutor> executor;
@property (weak, nonatomic) id<IESLiveVSSendGiftCommandQueueDelegate> delegate;
@property (retain, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) id /* block */ didCreateReport;
@property (copy, nonatomic) id /* block */ didStart;
@property (copy, nonatomic) id /* block */ didEnd;

- (void)setExtra:(id)arg0;
- (BOOL)hasSendGift;
- (void)setHasSendGift:(BOOL)arg0;
- (void)forceEnd;
- (void)appendCommand:(id)arg0;
- (void)setDidCreateReport:(id /* block */)arg0;
- (void)setEndTag:(BOOL)arg0;
- (void)executeNextCommand;
- (void)handleFinishCommand:(id)arg0 error:(id)arg1 shouldEnd:(BOOL *)arg2;
- (id)t_money;
- (unsigned long long)successTimes;
- (id)t_toUserID;
- (id)t_giftID;
- (id)t_giftCnt;
- (id)t_giftInfo;
- (id /* block */)didCreateReport;
- (void)handleSuccessCommand:(id)arg0;
- (BOOL)firstSuccessTag;
- (void)setFirstSuccessTag:(BOOL)arg0;
- (void)setT_toUserID:(id)arg0;
- (void)setT_giftID:(id)arg0;
- (void)setT_giftCnt:(id)arg0;
- (void)setT_money:(id)arg0;
- (void)setSuccessTimes:(unsigned long long)arg0;
- (void)setT_giftInfo:(id)arg0;
- (void)commit;
- (void)end;
- (void)setIsRunning:(BOOL)arg0;
- (void)run;
- (BOOL)isRunning;
- (id)init;
- (void).cxx_destruct;
- (void)report;
- (id)executor;
- (id)extra;
- (void)willEnd;
- (id)delegate;
- (id /* block */)didEnd;
- (void)executeCommand:(id)arg0;
- (id)queue;
- (void)setDelegate:(id)arg0;
- (long long)totalCount;
- (void)setQueue:(id)arg0;
- (void)setDidEnd:(id /* block */)arg0;
- (id /* block */)didStart;
- (void)setTotalCount:(long long)arg0;
- (void)setDidStart:(id /* block */)arg0;
- (void)setExecutor:(id)arg0;
- (BOOL)endTag;

@end
