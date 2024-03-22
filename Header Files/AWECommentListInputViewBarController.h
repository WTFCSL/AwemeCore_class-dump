//
//     Generated by private class-dump
//

@class UIViewController, NSString, AWEAwemeModel, UIView, AWECommentListInputViewBarContext;
@protocol AFDVideoPrivacyButtonControllerProtocol, AWECommentInputViewControllerProtocol, AWEPlayInteractionViewControllerProtocol, AWEAwemePlayInteractionUpdateDelegate, AWEAwemePlayInteractionPanelDelegate;

@interface AWECommentListInputViewBarController : NSObject <AWEUserMessage, AWECommentInputViewControllerDelegate, AWEAwemeDetailBottomBarController> {
    UIView *_containerView;
    AWECommentListInputViewBarContext *_context;
    UIView *_quickCommentContainerView;
    id<AFDVideoPrivacyButtonControllerProtocol> _privacyCtrl;
    UIViewController<AWECommentInputViewControllerProtocol> *_commentInputViewController;
}

@property (retain, nonatomic) UIView *containerView;
@property (readonly, nonatomic) AWEAwemeModel *awemeModel;
@property (readonly, nonatomic) id<AWEPlayInteractionViewControllerProtocol, AWEAwemePlayInteractionUpdateDelegate> interactionController;
@property (readonly, nonatomic) id<AWEAwemePlayInteractionPanelDelegate> interactionPanelController;
@property (retain, nonatomic) AWECommentListInputViewBarContext *context;
@property (retain, nonatomic) UIView *quickCommentContainerView;
@property (retain, nonatomic) id<AFDVideoPrivacyButtonControllerProtocol> privacyCtrl;
@property (retain, nonatomic) UIViewController<AWECommentInputViewControllerProtocol> *commentInputViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWECommentFastEmojiBarDOUYINHTSAdapterProtocolClass;

- (id)awemeModel;
- (id)referString;
- (void)didFinishBindPhone;
- (void)updateBottomBarWithAweme:(id)arg0 updateTiming:(long long)arg1;
- (void)commentInputViewShrinkButtonClicked:(id)arg0;
- (BOOL)commentInputGrowingTextViewShouldBeginEditing:(id)arg0;
- (void)commentInputViewFastEmojiBarDidClickedWithImage:(id)arg0 emoticonModel:(id)arg1 index:(long long)arg2;
- (id)commentInputViewFastEmojiAnimationParentView;
- (void)commentInputViewController:(id)arg0 textViewDidBeginEditing:(id)arg1;
- (id)quickCommentContainerView;
- (id)privacyCtrl;
- (void)setPrivacyCtrl:(id)arg0;
- (void)commentInputViewControllerSendCommentFinished:(id)arg0 model:(id)arg1 error:(id)arg2;
- (id)aAWECommentFastEmojiBarDOUYINHTSAdapterProtocol;
- (void)setQuickCommentContainerView:(id)arg0;
- (id)commentInputViewController;
- (void)commentInputViewControllerCreateRepostFinished:(id)arg0 success:(BOOL)arg1 extraLog:(id)arg2;
- (void)setCommentInputViewController:(id)arg0;
- (BOOL)canShowBottomBarForAweme:(id)arg0;
- (void)bottomBarAddedToContainer:(id)arg0;
- (void)cellWillDisplay:(id)arg0 forRowAtIndexPath:(id)arg1 tableView:(id)arg2;
- (void)cellDidEndDisplay:(id)arg0;
- (void)updateLogExtraDict:(id)arg0;
- (void)addNotificationRegister;
- (void)willChangeVideo;
- (void)addInteractionControllerContextObserver;
- (id)interactionPanelController;
- (unsigned long long)inputViewType;
- (id)textViewBgColor;
- (id)init;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)setContainerView:(id)arg0;
- (id)interactionController;
- (id)containerView;
- (id)context;
- (void)dealloc;
- (Class)contextClass;
- (id)bottomBarView;

@end