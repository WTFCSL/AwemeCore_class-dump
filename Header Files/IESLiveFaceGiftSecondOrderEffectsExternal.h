//
//     Generated by private class-dump
//

@class NSString, UIViewController;
@protocol IESLiveURLSchemaHandlerAdapter, IESHYControllerProtocol;

@interface IESLiveFaceGiftSecondOrderEffectsExternal : NSObject <IESLiveFaceGiftExternal, IESHYControllerDelegate> {
    id<IESLiveURLSchemaHandlerAdapter> _schemaURLHandler;
    UIViewController<IESHYControllerProtocol> *_hybridContainer;
}

@property (retain, nonatomic) id<IESLiveURLSchemaHandlerAdapter> schemaURLHandler;
@property (weak, nonatomic) UIViewController<IESHYControllerProtocol> *hybridContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDIContext:(id)arg0;
- (id)hybridContainer;
- (void)setHybridContainer:(id)arg0;
- (id)openHybridURL:(id)arg0 fromInside:(BOOL)arg1;
- (id)schemaURLHandler;
- (void)setSchemaURLHandler:(id)arg0;
- (void)iesHYControllerDidStartLoad:(id)arg0;
- (void)iesHYController:(id)arg0 didFinishLoadWithError:(id)arg1;
- (void)faceGiftExternalEventWithPosition:(unsigned long long)arg0 data:(id)arg1;
- (BOOL)blockExecuteInPosition:(unsigned long long)arg0;
- (id)faceGiftExternalID;
- (void)p_faceGiftGuideWithSticker:(id)arg0;
- (void)p_handleOpenCustomizeLynxViewFallBack;
- (void)giftStickerCloseWebviewIfNeeded;
- (void)p_openGiftStickerLyxnViewWithSchema:(id)arg0;
- (void)_fireHybridGlobalEventWithEventName:(id)arg0;
- (id)faceGiftExternalDescribe;
- (void).cxx_destruct;
- (void)dealloc;
- (void)p_init;

@end