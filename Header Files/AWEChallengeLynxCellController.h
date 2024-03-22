//
//     Generated by private class-dump
//

@class AWEChallengeCardModel, NSString, UIView;
@protocol AWEModernFeedCellContext, BDXViewContainerProtocol;

@interface AWEChallengeLynxCellController : UIViewController <BDXContainerLifecycleProtocol, AWEModernFeedCellControllerProtocol> {
    BOOL _shown;
    UIView<BDXViewContainerProtocol> *_bdxView;
    AWEChallengeCardModel *_model;
    id<AWEModernFeedCellContext> _context;
    UIView *_containerView;
}

@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *bdxView;
@property (retain, nonatomic) AWEChallengeCardModel *model;
@property (retain, nonatomic) id<AWEModernFeedCellContext> context;
@property (retain, nonatomic) UIView *containerView;
@property (nonatomic) BOOL shown;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) Class cardClass;

+ (double)modernFeedCellPreferedHeightForModel:(id)arg0 width:(double)arg1;
+ (id)bdxViewWithModel:(id)arg0;

- (void)container:(id)arg0 didFinishLoadWithURL:(id)arg1;
- (void)container:(id)arg0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })arg1;
- (id)bdxView;
- (void)setBdxView:(id)arg0;
- (void)recycleLynxView;
- (void)postLynxCardDataToWeb;
- (void)sendShowEventIfNeeded;
- (void)notifyHide:(id)arg0;
- (void)notifyShow:(id)arg0;
- (void)notifyDisappear:(id)arg0;
- (void)notifyAppear:(id)arg0;
- (void)lynxViewDidMount;
- (BOOL)isMediaSourceCard;
- (void)setModel:(id)arg0;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)model;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (id)context;
- (void)dealloc;
- (void)viewDidLoad;
- (void)updateWithModel:(id)arg0;
- (BOOL)shown;
- (void)setShown:(BOOL)arg0;

@end
