//
//     Generated by private class-dump
//

@class NSString;

@interface IESECTabKitAdvancedAdapterImpl : NSObject <IESECTabKitAdvancedAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)updatePreProcessRspIfNeeded:(id)arg0 updateGlobalProps:(id)arg1 updateRouterParams:(id)arg2;
+ (BOOL)supportAnnieXContainer;
+ (id)preProcessAnnieXCardModel:(id)arg0 bid:(id)arg1;
+ (id)createAnnieCardWithConfiguration:(id)arg0 puzzleContext:(id)arg1 lifeCycleDelegate:(id)arg2 bid:(id)arg3 preProcessRsp:(id)arg4 enableWebCache:(BOOL)arg5 closeAction:(id /* block */)arg6;

@end
