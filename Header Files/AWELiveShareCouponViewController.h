//
//     Generated by private class-dump
//

@class NSDictionary, NSString, UIView;
@protocol AnnieXContainerBaseProtocol, AnnieXCardModelProtocol, AWELiveShareCouponVCDelegate;

@interface AWELiveShareCouponViewController : UIViewController <BDXContainerLifecycleProtocol, AWELiveShareCouponVC> {
    BOOL _lynxLoadFinished;
    id<AWELiveShareCouponVCDelegate> _delegate;
    UIView *_backgroundContainer;
    UIView<AnnieXContainerBaseProtocol> *_lynxView;
    id<AnnieXCardModelProtocol> _cardModel;
    NSDictionary *_updateData;
    id /* block */ _sharePanelCloseBlock;
}

@property (retain, nonatomic) UIView *backgroundContainer;
@property (retain, nonatomic) UIView<AnnieXContainerBaseProtocol> *lynxView;
@property (retain, nonatomic) id<AnnieXCardModelProtocol> cardModel;
@property (nonatomic) BOOL lynxLoadFinished;
@property (copy, nonatomic) NSDictionary *updateData;
@property (copy, nonatomic) id /* block */ sharePanelCloseBlock;
@property (weak, nonatomic) id<AWELiveShareCouponVCDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)container:(id)arg0 didFinishLoadWithURL:(id)arg1;
- (void)container:(id)arg0 didLoadFailedWithUrl:(id)arg1 error:(id)arg2;
- (void)container:(id)arg0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })arg1;
- (void)containerWillStartLoading:(id)arg0;
- (void)containerDidFirstScreen:(id)arg0;
- (void)trackWithEvent:(id)arg0 param:(id)arg1;
- (id)cardModel;
- (void)setCardModel:(id)arg0;
- (id)lynxView;
- (void)setLynxView:(id)arg0;
- (void)bindEvents;
- (void)setUpdateData:(id)arg0;
- (void)setLynxLoadFinished:(BOOL)arg0;
- (BOOL)lynxLoadFinished;
- (void)registerMessageCenter;
- (void)setupLynxUI;
- (void)setSharePanelCloseBlock:(id /* block */)arg0;
- (id /* block */)sharePanelCloseBlock;
- (id)initWithUpdateData:(id)arg0;
- (void)configSharePanelCloseBlock:(id /* block */)arg0;
- (void)updateLynxViewWithData:(id)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setBackgroundContainer:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)backgroundContainer;
- (void)setupUI;
- (id)updateData;

@end
