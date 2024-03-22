//
//     Generated by private class-dump
//

@class UIViewController, NSString, UIView, HTSLivePopupContainer;
@protocol IESLiveHierarchyContainerView;

@interface HTSLive4LayerContainerView : UIView <HTSLiveViewHierarchyProvider> {
    BOOL _isRemovingFakePreview;
    UIViewController *_rootViewController;
    UIView *_mediaContainer;
    HTSLivePopupContainer *_popupContainer;
    UIView<IESLiveHierarchyContainerView> *_floatContainer;
    UIView<IESLiveHierarchyContainerView> *_operationContainer;
    UIView<IESLiveHierarchyContainerView> *_animationContainer;
    UIView<IESLiveHierarchyContainerView> *_multiTabContainer;
    UIView<IESLiveHierarchyContainerView> *_contentContainer;
    UIView<IESLiveHierarchyContainerView> *_danmakuContainer;
    UIView<IESLiveHierarchyContainerView> *_diggAnimationContainer;
    UIView<IESLiveHierarchyContainerView> *_mediaDecorationContainer;
    UIView<IESLiveHierarchyContainerView> *_keyboardContainer;
    UIView<IESLiveHierarchyContainerView> *_clearScreenContainer;
    UIView<IESLiveHierarchyContainerView> *_landscapePreviewContainer;
    UIView *_fakePreview;
    UIView *_fakePreviewSuperView;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _screenEdgeInsets;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _screenInsets;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _containerInsets;
}

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } screenInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } containerInsets;
@property (retain, nonatomic) UIView *fakePreview;
@property (retain, nonatomic) UIView *fakePreviewSuperView;
@property (nonatomic) BOOL isRemovingFakePreview;
@property (weak, nonatomic) UIViewController *rootViewController;
@property (weak, nonatomic) UIView *mediaContainer;
@property (readonly, weak, nonatomic) UIView *containerView;
@property (weak, nonatomic) HTSLivePopupContainer *popupContainer;
@property (weak, nonatomic) UIView<IESLiveHierarchyContainerView> *floatContainer;
@property (weak, nonatomic) UIView<IESLiveHierarchyContainerView> *operationContainer;
@property (weak, nonatomic) UIView<IESLiveHierarchyContainerView> *animationContainer;
@property (weak, nonatomic) UIView<IESLiveHierarchyContainerView> *multiTabContainer;
@property (weak, nonatomic) UIView<IESLiveHierarchyContainerView> *contentContainer;
@property (weak, nonatomic) UIView<IESLiveHierarchyContainerView> *danmakuContainer;
@property (weak, nonatomic) UIView<IESLiveHierarchyContainerView> *diggAnimationContainer;
@property (weak, nonatomic) UIView<IESLiveHierarchyContainerView> *mediaDecorationContainer;
@property (weak, nonatomic) UIView<IESLiveHierarchyContainerView> *keyboardContainer;
@property (weak, nonatomic) UIView<IESLiveHierarchyContainerView> *clearScreenContainer;
@property (weak, nonatomic) UIView<IESLiveHierarchyContainerView> *landscapePreviewContainer;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } screenEdgeInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)setScreenInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })screenInsets;
- (id)operationContainer;
- (id)popupContainer;
- (void)setOperationContainer:(id)arg0;
- (void)setPopupContainer:(id)arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })containerEdgeInsets;
- (id)floatContainer;
- (id)multiTabContainer;
- (id)diggAnimationContainer;
- (id)mediaDecorationContainer;
- (id)danmakuContainer;
- (id)clearScreenContainer;
- (id)landscapePreviewContainer;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })popupContainerEdgeInsets;
- (void)addPreviewFakeView:(id)arg0 superView:(id)arg1;
- (void)removePreviewFakeView;
- (BOOL)touchAtEmptyPlace:(id)arg0;
- (void)refreshLayout:(long long)arg0;
- (void)openMediaContainerSecureContent:(BOOL)arg0;
- (void)setFloatContainer:(id)arg0;
- (void)setMultiTabContainer:(id)arg0;
- (void)setContainerInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (BOOL)shouldUseSideStyle;
- (BOOL)isVSLandscapeToLandscapeEnable;
- (id)initWithContainerInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void)setLandscapePreviewContainer:(id)arg0;
- (id)initWithInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0 containerInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg1;
- (void)setIsRemovingFakePreview:(BOOL)arg0;
- (void)landscapeSceneRefreshIfNeed;
- (void)setFakePreviewSuperView:(id)arg0;
- (void)setFakePreview:(id)arg0;
- (id)fakePreview;
- (BOOL)isRemovingFakePreview;
- (id)fakePreviewSuperView;
- (void)setDanmakuContainer:(id)arg0;
- (void)setDiggAnimationContainer:(id)arg0;
- (void)setMediaDecorationContainer:(id)arg0;
- (void)setKeyboardContainer:(id)arg0;
- (void)setClearScreenContainer:(id)arg0;
- (void)setRootViewController:(id)arg0;
- (id)rootViewController;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)containerView;
- (void)prepareForReuse;
- (id)contentContainer;
- (id)animationContainer;
- (void)setAnimationContainer:(id)arg0;
- (id)mediaContainer;
- (void)setMediaContainer:(id)arg0;
- (id)initWithInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })containerInsets;
- (void)setContentContainer:(id)arg0;
- (id)keyboardContainer;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })screenEdgeInsets;
- (void)setScreenEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;

@end
