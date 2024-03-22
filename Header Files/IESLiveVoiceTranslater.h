//
//     Generated by private class-dump
//

@class NSString, SAMICore, NSMutableArray;

@interface IESLiveVoiceTranslater : NSObject {
    BOOL _disconnected;
    BOOL _translatePending;
    SAMICore *_handler;
    id /* block */ _fullPartTextResultCallBack;
    id /* block */ _failureCallBack;
    NSString *_fullyTranslatePartText;
    NSString *_translatingPartText;
    NSMutableArray *_needCleanHandles;
}

@property (retain, nonatomic) SAMICore *handler;
@property (nonatomic) BOOL translatePending;
@property (copy, nonatomic) id /* block */ fullPartTextResultCallBack;
@property (copy, nonatomic) id /* block */ failureCallBack;
@property (copy, nonatomic) NSString *fullyTranslatePartText;
@property (copy, nonatomic) NSString *translatingPartText;
@property (retain, nonatomic) NSMutableArray *needCleanHandles;
@property (nonatomic) BOOL disconnected;

- (void)cleanTranslateResult;
- (void)resumeTranslate;
- (void)startTranslateWithPartTextResultCallBack:(id /* block */)arg0 failureCallBack:(id /* block */)arg1;
- (void)pauseTranslate;
- (void)stopTranslate;
- (void)translatePCMAudioData:(id)arg0 withDataSize:(long long)arg1;
- (BOOL)translatePending;
- (void)_processTranslateResult:(id)arg0;
- (id)needCleanHandles;
- (void)setTranslatePending:(BOOL)arg0;
- (id /* block */)failureCallBack;
- (void)setFullPartTextResultCallBack:(id /* block */)arg0;
- (void)setFailureCallBack:(id /* block */)arg0;
- (void)setupSAMI;
- (void)setFullyTranslatePartText:(id)arg0;
- (void)setTranslatingPartText:(id)arg0;
- (id)fullyTranslatePartText;
- (id /* block */)fullPartTextResultCallBack;
- (id)translatingPartText;
- (void)startTranslateWithTextResultCallBack:(id /* block */)arg0 failureCallBack:(id /* block */)arg1;
- (void)setNeedCleanHandles:(id)arg0;
- (id)init;
- (void)setDisconnected:(BOOL)arg0;
- (void).cxx_destruct;
- (BOOL)disconnected;
- (void)setHandler:(id)arg0;
- (id)handler;

@end