//
//     Generated by private class-dump
//

@class BTDWeakProxy, NSArray, JsWorkerIOS, NSString, IESECHybridParamsVerifyHelperConfig;
@protocol IESECHybridParamsVerifyCallBackDelegate;

@interface IESECHybridParamsVerifyHelper : NSObject <MessageCallback, ErrorCallback, IESECParamsVerifyJSModuleDelegate> {
    id _fakeRoomContext;
    BTDWeakProxy *_liveContextProxy;
    JsWorkerIOS *_worker;
    id<IESECHybridParamsVerifyCallBackDelegate> _delegate;
    id /* block */ _successBlock;
    id /* block */ _errorBlock;
    NSArray *_customModules;
    NSString *_moduleName;
    IESECHybridParamsVerifyHelperConfig *_config;
}

@property (retain, nonatomic) JsWorkerIOS *worker;
@property (weak, nonatomic) id<IESECHybridParamsVerifyCallBackDelegate> delegate;
@property (copy, nonatomic) id /* block */ successBlock;
@property (copy, nonatomic) id /* block */ errorBlock;
@property (copy, nonatomic) NSArray *customModules;
@property (copy, nonatomic) NSString *moduleName;
@property (retain, nonatomic) IESECHybridParamsVerifyHelperConfig *config;
@property (retain, nonatomic) id fakeRoomContext;
@property (retain, nonatomic) BTDWeakProxy *liveContextProxy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)jsonStringVerifyFormat:(id)arg0;

- (void)setModuleName:(id)arg0;
- (void)stopProcess;
- (id)initWithCustomModules:(id)arg0 callBackDelegate:(id)arg1;
- (void)setLiveContextProxy:(id)arg0;
- (void)executeCustomScript:(id)arg0 withUrl:(id)arg1 withCallBack:(id /* block */)arg2;
- (void)buildWorker:(id)arg0 isSync:(BOOL)arg1 followGlobalSetting:(BOOL)arg2 withCallBack:(id /* block */)arg3;
- (void)executeScriptName:(id)arg0 paramsArray:(id)arg1;
- (void)buildWorker:(id)arg0 withCallBack:(id /* block */)arg1;
- (void)runFullVerify:(id)arg0 scriptMethodName:(id)arg1 params:(id)arg2 contextProvider:(id)arg3 result:(id /* block */)arg4;
- (id)liveContextProxy;
- (void)buildBaseWorker:(id)arg0 withCallBack:(id /* block */)arg1;
- (void)executeCustomScript:(id)arg0;
- (void)getOriginResource:(id)arg0 completion:(id /* block */)arg1;
- (id)customModules;
- (void)setupWorkerEnvironmentWithCallBack:(id /* block */)arg0;
- (void)createWorkerWithCustomModule:(id)arg0 callback:(id /* block */)arg1;
- (void)trackVerifyInitWithCategory:(id)arg0 metric:(id)arg1;
- (id)fakeRoomContext;
- (void)stopCurrentWorkerProcess;
- (id)initWithCustomModules:(id)arg0 callBackDelegate:(id)arg1 config:(id)arg2;
- (id)initWithCustomModules:(id)arg0 successBlock:(id /* block */)arg1 errorBlock:(id /* block */)arg2;
- (void)buildDegradeWorker:(id)arg0 withCallBack:(id /* block */)arg1;
- (void)buildAptTestcaseWorker:(id)arg0 withCallBack:(id /* block */)arg1;
- (void)executeVerifyWithMsg:(id)arg0;
- (void)setFakeRoomContext:(id)arg0;
- (void)setCustomModules:(id)arg0;
- (void)handleError:(id)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)delegate;
- (void)handleMessage:(id)arg0;
- (void)setDelegate:(id)arg0;
- (id)moduleName;
- (id)worker;
- (void)setWorker:(id)arg0;
- (id /* block */)errorBlock;
- (void)setErrorBlock:(id /* block */)arg0;
- (id /* block */)successBlock;
- (void)setSuccessBlock:(id /* block */)arg0;

@end
