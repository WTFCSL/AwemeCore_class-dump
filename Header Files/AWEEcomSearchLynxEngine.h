//
//     Generated by private class-dump
//

@class AWEEcomSearchViewModel, NSString, NSDictionary, UIView, NSObject, AWEDynamicPatchModel;
@protocol BDXContainerLifeCycleProtocol, AWEEcomSearchLynxEngineDelegate, BDXViewContainerProtocol;

@interface AWEEcomSearchLynxEngine : NSObject <BDXContainerLifecycleProtocol, AWEEcomSearchLynxEngineProtocol> {
    UIView<BDXViewContainerProtocol> *_bdxView;
    NSObject<BDXContainerLifeCycleProtocol> *_bulletLifeCycleClient;
    id<AWEEcomSearchLynxEngineDelegate> _delegate;
    AWEEcomSearchViewModel *_searchViewModel;
    AWEDynamicPatchModel *_model;
    NSDictionary *_initialData;
    NSDictionary *_contentParams;
}

@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *bdxView;
@property (retain, nonatomic) NSObject<BDXContainerLifeCycleProtocol> *bulletLifeCycleClient;
@property (weak, nonatomic) id<AWEEcomSearchLynxEngineDelegate> delegate;
@property (retain, nonatomic) AWEEcomSearchViewModel *searchViewModel;
@property (retain, nonatomic) AWEDynamicPatchModel *model;
@property (copy, nonatomic) NSDictionary *initialData;
@property (copy, nonatomic) NSDictionary *contentParams;
@property (readonly, copy, nonatomic) NSString *containerID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)monitor:(id)arg0 params:(id)arg1 dynamicPatch:(id)arg2;
+ (id)lynxInitialDataWithModel:(id)arg0;
+ (id)globalPropsForModel:(id)arg0 searchScene:(id)arg1;
+ (BOOL)checkForceSetThemeToLynx:(id)arg0;
+ (id)lynxThemeTextWithUIInfo:(id)arg0;
+ (id)lynxThemeTextWithThemeStyle:(unsigned long long)arg0;

- (void)container:(id)arg0 didLoadFailedWithUrl:(id)arg1 error:(id)arg2;
- (void)container:(id)arg0 didRecieveError:(id)arg1;
- (void)registerXBridgeMethod:(id)arg0;
- (void)updateData:(id)arg0 processorName:(id)arg1;
- (void)sendEvent:(id)arg0 params:(id)arg1;
- (id)initialData;
- (void)setInitialData:(id)arg0;
- (id)bdxView;
- (void)setBdxView:(id)arg0;
- (id)searchViewModel;
- (void)setSearchViewModel:(id)arg0;
- (id)bdxViewWithModel:(id)arg0;
- (id)contentParams;
- (void)setContentParams:(id)arg0;
- (id)initWithModel:(id)arg0 withSearchViewModel:(id)arg1;
- (id)bdxContextWithModel:(id)arg0;
- (id)bdxViewWithContext:(id)arg0;
- (id)processedSchema;
- (void)setAdInfoWithLynxView:(id)arg0;
- (void)registerBridgeHandlerWithBlock:(id /* block */)arg0;
- (id)bulletLifeCycleClient;
- (void)setBulletLifeCycleClient:(id)arg0;
- (id)initWithModel:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)containerID;
- (id)model;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)updateWithModel:(id)arg0;

@end
