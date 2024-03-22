//
//     Generated by private class-dump
//

@class NSMutableDictionary;
@protocol BDNativeWebComponentLogicDelegate;

@interface BDNativeWebComponentLogic : NSObject {
    id<BDNativeWebComponentLogicDelegate> _delegate;
    NSMutableDictionary *_containerObjects;
    NSMutableDictionary *_nativeComponentDic;
}

@property (class, readonly, nonatomic) NSMutableDictionary *nativeComponentClassDic;

@property (retain, nonatomic) NSMutableDictionary *nativeComponentDic;
@property (weak, nonatomic) id<BDNativeWebComponentLogicDelegate> delegate;
@property (retain, nonatomic) NSMutableDictionary *containerObjects;

+ (id)nativeComponentClassDic;
+ (void)registerGloablNativeComponent:(id)arg0;

- (void)setNativeComponentDic:(id)arg0;
- (void)invokeInitialize:(id)arg0 completion:(id /* block */)arg1;
- (void)invokeupdate:(id)arg0 completion:(id /* block */)arg1;
- (void)invokeDestory:(id)arg0 completion:(id /* block */)arg1;
- (void)insertNativeTag:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)updateNativeTag:(id)arg0;
- (void)deleteNativeTag:(id)arg0;
- (id)nativeComponentDic;
- (id)containerObjects;
- (void)clearNativeComponent;
- (void)handleInvokeFunction:(id)arg0 completion:(id /* block */)arg1;
- (void)handleCallbackFunction:(id)arg0 completion:(id /* block */)arg1;
- (id)checkNativeInfos;
- (void)clearNativeComponentWithIFrameID:(id)arg0;
- (id)updateNativeTags:(id)arg0;
- (id)deleteNativeTags:(id)arg0;
- (void)dispatchAction:(id)arg0 callback:(id /* block */)arg1;
- (void)registerNativeComponent:(id)arg0;
- (void)setContainerObjects:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
