//
//     Generated by private class-dump
//

@class AWEProfileFunctionEntryView, NSString, AWERLVirtualNode, UIButton;
@protocol AWEProfileRedDotNodeProtocol;

@interface AWEPersonalCenterFunctionEntryComponent : AWERLComponent <AWEPersonalCenterComponentProtocol, AWEProfileRedDotShowViewProtocol, AWEProfileFunctionEntryContainerDelegate> {
    BOOL _willEnterSubPage;
    AWERLVirtualNode *_node;
    UIButton *_containerButton;
    AWEProfileFunctionEntryView *_entryView;
    id<AWEProfileRedDotNodeProtocol> _redDotNode;
    long long _headerTabType;
}

@property (retain, nonatomic) AWERLVirtualNode *node;
@property (retain, nonatomic) UIButton *containerButton;
@property (retain, nonatomic) AWEProfileFunctionEntryView *entryView;
@property (weak, nonatomic) id<AWEProfileRedDotNodeProtocol> redDotNode;
@property (nonatomic) long long headerTabType;
@property (nonatomic) BOOL willEnterSubPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cardWillAppear;
- (void)cardDidAppear;
- (void)cardWillDisappear;
- (void)cardDidDisappear;
- (void)updateComponentData:(id)arg0;
- (id)virtualNodeWithChildren:(id)arg0;
- (id)entryModelForType:(unsigned long long)arg0;
- (void)didClicked;
- (void)refreshRedDotWithModel:(id)arg0;
- (id)trackExtraParams;
- (void)homepageDidLeave;
- (void)homepageDidEnter;
- (void)handleProfileRedDotFinishSetup:(id)arg0;
- (void)halfSidebarDismiss;
- (void)halfSidebarShown;
- (id)redDotNode;
- (void)setRedDotNode:(id)arg0;
- (void)dispatchLifeCycle:(SEL)arg0;
- (id)extendRedDotNode;
- (Class)entryViewClass;
- (id)redDotExtraParams;
- (BOOL)willEnterSubPage;
- (void)setWillEnterSubPage:(BOOL)arg0;
- (id)extendLifeCycleEntryView;
- (BOOL)isSelectedPersonalCenterTab;
- (long long)headerTabType;
- (void)bindRedDotNode;
- (void)setHeaderTabType:(long long)arg0;
- (id)trackHotExtraParams;
- (id)trackNoticeExtraParams;
- (id)initWithData:(id)arg0 context:(id)arg1;
- (id)node;
- (void)setupObservers;
- (double)titleHeight;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (void)trackEvent:(BOOL)arg0;
- (void)dealloc;
- (id)entryView;
- (void)setNode:(id)arg0;
- (void)setupUI;
- (id)containerContext;
- (void)setEntryView:(id)arg0;
- (id)containerButton;
- (void)setContainerButton:(id)arg0;
- (double)titleFontSize;
- (void)onInit;

@end
