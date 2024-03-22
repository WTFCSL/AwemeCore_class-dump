//
//     Generated by private class-dump
//

@class DitoPageContext, NSString, HalfContainerParams, DitoNestedScrollExtension;
@protocol HalfContainerManagerProtocol, DitoExtensionContainerProtocol;

@interface DitoHalfContainerExtension : NSObject <HalfContainerManagerDelegate, DitoHalfContainerProtocol, DitoExtensionProtocol> {
    BOOL _isFirstTimeUpdateFrame;
    BOOL _hasInitedContainer;
    DitoPageContext *_context;
    id<DitoExtensionContainerProtocol> _container;
    id<HalfContainerManagerProtocol> _hcManager;
    unsigned long long _halfContainerType;
    HalfContainerParams *_halfParams;
    DitoNestedScrollExtension *_nestedScrollExtension;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _cacheBodyFrame;
}

@property (nonatomic) BOOL isFirstTimeUpdateFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cacheBodyFrame;
@property (retain, nonatomic) id<HalfContainerManagerProtocol> hcManager;
@property (nonatomic) unsigned long long halfContainerType;
@property (retain, nonatomic) HalfContainerParams *halfParams;
@property (weak, nonatomic) DitoNestedScrollExtension *nestedScrollExtension;
@property (nonatomic) BOOL hasInitedContainer;
@property (weak, nonatomic) DitoPageContext *context;
@property (weak, nonatomic) id<DitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithRouterParamDict:(id)arg0;
- (double)halfContainerOffsetWithState:(long long)arg0;
- (void)didLoadPageModel:(id)arg0;
- (void)didHalfContainerOffsetChange:(id)arg0 offset:(double)arg1;
- (void)containerWillUpdateFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 containerType:(id)arg1;
- (void)containerDidUpdateFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 containerType:(id)arg1;
- (void)pageDidScroll:(id)arg0;
- (id /* block */)customCollapseAnimationBlock;
- (id /* block */)customHalfExpandAnimationBlock;
- (id /* block */)customDismissWithAnimationBlock;
- (BOOL)shouldIgnoreGesture:(id)arg0 state:(long long)arg1 diretion:(unsigned long long)arg2 containerOffset:(double)arg3;
- (void)didHandleHalfContainerGesture:(id)arg0 scrollView:(id)arg1 state:(long long)arg2 diretion:(unsigned long long)arg3 containerOffset:(double)arg4;
- (void)didHalfContainerTapMaskView:(id)arg0;
- (BOOL)halfContainerShouldShowTapView;
- (void)fullContainerBeginPull:(double)arg0;
- (void)fullContainerUnfoldWillChange:(double)arg0 isMaxUnfold:(BOOL)arg1 duration:(double)arg2;
- (void)fullContainerUnfoldDidChange:(double)arg0 isMaxUnfold:(BOOL)arg1;
- (BOOL)enableDitoDynamicSwitchContainer;
- (void)halfContainerDidMove:(id)arg0 offset:(double)arg1;
- (double)customExtraOffsetWhenCollapseAnchor;
- (void)initializeExtension;
- (BOOL)enableExperimentHalfContainer;
- (id)changeDitoHalfContainerToState:(long long)arg0 animated:(BOOL)arg1;
- (id)halfParams;
- (id)updateHalfContainerParams:(id)arg0;
- (id)setupLeftPanCloseWithTargetView:(id)arg0 shouldCloseByHorizontal:(BOOL)arg1;
- (void)setHalfParams:(id)arg0;
- (long long)halfContainerState;
- (BOOL)isDitoHalfContainerHigherThanOrEqualToTargetState:(long long)arg0;
- (id)halfContainerTapView;
- (double)contentHeightInHalfMode;
- (BOOL)isFirstTimeUpdateFrame;
- (void)setIsFirstTimeUpdateFrame:(BOOL)arg0;
- (double)ditoExtraOffsetWhenCollapseAnchor;
- (void)tryToInitializeHalfContainer;
- (void)cancelDecelaration;
- (id)hcManager;
- (unsigned long long)halfContainerType;
- (BOOL)enableNewFullContainer;
- (void)setHalfContainerType:(unsigned long long)arg0;
- (void)setHcManager:(id)arg0;
- (long long)convertDitoState:(long long)arg0;
- (double)halfContainerOffset;
- (long long)convertHalfContainerStatus:(long long)arg0;
- (id)fetchAllDelegateReceiver;
- (void)dismissDitoViewController;
- (BOOL)ditoEnableSwitchContainer;
- (BOOL)ditoEnableMoveFloatNode;
- (id)nestedScrollExtension;
- (BOOL)viscousDragging;
- (double)decelerationRemainContentToTop;
- (double)decelerationRemainContentToBottom;
- (void)setCacheBodyFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })cacheBodyFrame;
- (void)scrollToOffset:(double)arg0 animation:(BOOL)arg1 duration:(double)arg2 completion:(id /* block */)arg3;
- (BOOL)isNewFullContainer;
- (void)didHalfContainerStatusChange:(id)arg0 status:(long long)arg1;
- (void)didHalfContainerRatioChange:(id)arg0 ratio:(double)arg1;
- (void)updateContentOffsetInDecelerating:(double)arg0;
- (BOOL)ignoreVerticalPanHandle;
- (BOOL)isAlwaysHalfScreen;
- (id)initWithHalfContainerType:(unsigned long long)arg0;
- (id)initWithHalfContainerType:(unsigned long long)arg0 params:(id)arg1;
- (void)setNestedScrollExtension:(id)arg0;
- (BOOL)hasInitedContainer;
- (void)setHasInitedContainer:(BOOL)arg0;
- (id)container;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (void)setContainer:(id)arg0;
- (id)context;
- (void)viewDidLoad;

@end