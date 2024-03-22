//
//     Generated by private class-dump
//

@class NSString, NSMutableArray;
@protocol IESLiveURLSchemaHandler, IESLiveAudienceRoomAwareness, IESLiveFullScreenWebviewAction, IESLiveInternalRouter;

@interface IESLiveH5PopUpPanelFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber, IESLiveFullScreenWebviewRouter> {
    BOOL _isShowWebview;
    BOOL _enableCloseLeftScrollGesture;
    id<IESLiveURLSchemaHandler> _urlHandler;
    id<IESLiveInternalRouter> _internalRouter;
    NSMutableArray *_popupViewArray;
    id<IESLiveFullScreenWebviewAction> _fullScreenWebviewAction;
    id<IESLiveAudienceRoomAwareness> _audienceAwareness;
}

@property (retain, nonatomic) id<IESLiveURLSchemaHandler> urlHandler;
@property (retain, nonatomic) id<IESLiveInternalRouter> internalRouter;
@property (retain, nonatomic) NSMutableArray *popupViewArray;
@property (nonatomic) BOOL isShowWebview;
@property (retain, nonatomic) id<IESLiveFullScreenWebviewAction> fullScreenWebviewAction;
@property (retain, nonatomic) id<IESLiveAudienceRoomAwareness> audienceAwareness;
@property (nonatomic) BOOL enableCloseLeftScrollGesture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)internalRouter;
- (void)setInternalRouter:(id)arg0;
- (void)componentMount;
- (void)componentUnmount;
- (void)p_show;
- (BOOL)isShowFullScreenWebview;
- (id)audienceAwareness;
- (void)setAudienceAwareness:(id)arg0;
- (void)p_dealView:(id)arg0;
- (void)p_closeDuringDuration;
- (void)setPopupViewArray:(id)arg0;
- (void)setIsShowWebview:(BOOL)arg0;
- (void)setEnableCloseLeftScrollGesture:(BOOL)arg0;
- (void)removeWebview:(long long)arg0;
- (void)openPopUpPanelSchema:(id)arg0;
- (id)popupViewArray;
- (BOOL)isShowWebview;
- (id)fullScreenWebviewAction;
- (BOOL)enableCloseLeftScrollGesture;
- (void)p_removeObjectFromArray;
- (void)setFullScreenWebviewAction:(id)arg0;
- (id)urlHandler;
- (void).cxx_destruct;
- (void)dealloc;
- (void)messageReceived:(id)arg0;
- (void)setUrlHandler:(id)arg0;

@end