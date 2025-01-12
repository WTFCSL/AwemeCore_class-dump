//
//     Generated by private class-dump
//

@class IESECBridgeExcutor, BTDWeakProxy;
@protocol IESECParamsVerifyJSModuleDelegate;

@interface IESECParamsVerifyJSModule : IESECBaseJSModule {
    IESECBridgeExcutor *_excutor;
    id<IESECParamsVerifyJSModuleDelegate> _delegate;
    BTDWeakProxy *_liveContextProxy;
}

@property (retain, nonatomic) IESECBridgeExcutor *excutor;
@property (weak, nonatomic) id<IESECParamsVerifyJSModuleDelegate> delegate;
@property (retain, nonatomic) BTDWeakProxy *liveContextProxy;

+ (id)methodLookup;
+ (id)getExcutorWithContext:(id)arg0;
+ (id)name;

- (id)getStorage:(id)arg0;
- (id)initWithParam:(id)arg0;
- (void)call:(id)arg0 params:(id)arg1 callback:(id /* block */)arg2;
- (id)excutor;
- (id)p_getResultWrapperWithCode:(unsigned long long)arg0 result:(id)arg1 error:(id)arg2;
- (void)setExcutor:(id)arg0;
- (void)fetch:(id)arg0 params:(id)arg1 method:(id)arg2 callback:(id /* block */)arg3 data:(id)arg4 headers:(id)arg5;
- (void)openSchema:(id)arg0;
- (void)setLiveContextProxy:(id)arg0;
- (id)liveContextProxy;
- (void)setStorage:(id)arg0 value:(id)arg1;
- (BOOL)customHandle:(id)arg0 params:(id)arg1 callback:(id /* block */)arg2;
- (void)terminate;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
