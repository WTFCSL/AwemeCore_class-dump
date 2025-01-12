//
//     Generated by private class-dump
//

@class IESLiveGuideStore, NSMutableSet, NSString;
@protocol IESLiveCommonGuideActions, IESLiveURLSchemaHandler;

@interface IESLiveGuideFragment : IESLiveRoomComponent <IESLiveMessageInteractionModuleCommentAction> {
    BOOL _keyboardShow;
    IESLiveGuideStore *_store;
    NSMutableSet *_observerSet;
    id<IESLiveCommonGuideActions> _guideActionsCreator;
    id<IESLiveURLSchemaHandler> _schemaURLHandler;
}

@property (retain, nonatomic) IESLiveGuideStore *store;
@property (retain, nonatomic) NSMutableSet *observerSet;
@property (nonatomic) BOOL keyboardShow;
@property (retain, nonatomic) id<IESLiveCommonGuideActions> guideActionsCreator;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> schemaURLHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setKeyboardShow:(BOOL)arg0;
- (BOOL)keyboardShow;
- (void)setObserverSet:(id)arg0;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)showGuideView;
- (id)schemaURLHandler;
- (void)setSchemaURLHandler:(id)arg0;
- (BOOL)isChatGuideWithType:(unsigned long long)arg0;
- (id)guideActionsCreator;
- (void)setGuideActionsCreator:(id)arg0;
- (void).cxx_destruct;
- (id)observerSet;
- (id)store;
- (void)setStore:(id)arg0;
- (void)keyboardWillHide;
- (void)keyboardWillShow;

@end
