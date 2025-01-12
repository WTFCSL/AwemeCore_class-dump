//
//     Generated by private class-dump
//

@class UIViewController, AWELandscapePageContext, AWEAwemeModel, UILabel, UIView, UIButton;
@protocol AWECoCreatorDetailViewControllerProtocol, AWELandscapeSplitScreenContainerDelegate;

@interface AWELandscapeCoCreatorsViewController : UIViewController {
    id<AWELandscapeSplitScreenContainerDelegate> _delegate;
    UIView *_container;
    UIView *_effectView;
    UIView *_topContainer;
    UILabel *_titleLabel;
    UIButton *_closeButton;
    UIViewController<AWECoCreatorDetailViewControllerProtocol> *_coCreatorViewController;
    double _splitScreenWidth;
    AWELandscapePageContext *_pageContext;
    AWEAwemeModel *_model;
}

@property (retain, nonatomic) UIView *container;
@property (retain, nonatomic) UIView *effectView;
@property (retain, nonatomic) UIView *topContainer;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIViewController<AWECoCreatorDetailViewControllerProtocol> *coCreatorViewController;
@property (nonatomic) double splitScreenWidth;
@property (retain, nonatomic) AWELandscapePageContext *pageContext;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) id<AWELandscapeSplitScreenContainerDelegate> delegate;

- (void)awe_themeReload;
- (void)showWithModel:(id)arg0;
- (id)createEffectView;
- (id)createContainerView;
- (id)topContainer;
- (void)setTopContainer:(id)arg0;
- (id)initWithPageContext:(id)arg0;
- (void)enterCoCreatorProfile:(id)arg0;
- (id)coCreatorViewController;
- (void)setCoCreatorViewController:(id)arg0;
- (void)enterUserChatPageWithUserModel:(id)arg0;
- (double)splitScreenWidth;
- (void)setSplitScreenWidth:(double)arg0;
- (id)container;
- (void)setModel:(id)arg0;
- (id)effectView;
- (void).cxx_destruct;
- (id)model;
- (void)setContainer:(id)arg0;
- (id)titleLabel;
- (id)delegate;
- (void)setEffectView:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)viewDidLoad;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)pageContext;
- (void)setPageContext:(id)arg0;

@end
