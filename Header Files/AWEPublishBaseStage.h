//
//     Generated by private class-dump
//

@class NSString, NSError;
@protocol AWEPublishTaskContextProtocol, AWEPublishStageDelegate;

@interface AWEPublishBaseStage : AWEPublishRunnableStage <AWEInternalPublishStageProtocol, AWEPublishStageProtocol> {
    BOOL _cloesClientWatermark;
    BOOL _enableResumePublish;
    long long _type;
    NSError *_error;
    id<AWEPublishStageDelegate> _delegate;
    unsigned long long _entryType;
    long long _stageIndex;
    id<AWEPublishTaskContextProtocol> _task;
}

@property (weak, nonatomic) id<AWEPublishTaskContextProtocol> task;
@property (weak, nonatomic) id<AWEPublishStageDelegate> delegate;
@property (nonatomic) unsigned long long entryType;
@property (nonatomic) BOOL cloesClientWatermark;
@property (nonatomic) long long stageIndex;
@property (nonatomic) BOOL enableResumePublish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long status;
@property (nonatomic) long long type;

+ (id)mapError:(long long)arg0;
+ (void)acc_hook;
+ (void)_aweLazyRegisterLoad_ACCHook;

- (void)bindToTask:(id)arg0;
- (void)setCloesClientWatermark:(BOOL)arg0;
- (BOOL)pendingForError:(id)arg0;
- (BOOL)cloesClientWatermark;
- (BOOL)enableResumePublish;
- (void)setEnableResumePublish:(BOOL)arg0;
- (id)acc_init;
- (void)acc_run;
- (void)acc_bindToTask:(id)arg0;
- (void)acc_onListenTaskCancel:(id)arg0;
- (void)run;
- (id)init;
- (unsigned long long)entryType;
- (void).cxx_destruct;
- (long long)type;
- (void)setType:(long long)arg0;
- (id)delegate;
- (void)setTask:(id)arg0;
- (void)setError:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (id)task;
- (id)error;
- (void)setEntryType:(unsigned long long)arg0;
- (BOOL)isCancelledError:(id)arg0;
- (long long)stageIndex;
- (void)setStageIndex:(long long)arg0;

@end