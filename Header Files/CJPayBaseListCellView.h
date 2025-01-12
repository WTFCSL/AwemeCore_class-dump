//
//     Generated by private class-dump
//

@class CJPayCommonListViewController, CJPayBaseListViewModel, UIView;
@protocol CJPayBaseListEventHandleProtocol;

@interface CJPayBaseListCellView : UITableViewCell {
    UIView *_containerView;
    CJPayBaseListViewModel *_viewModel;
    id<CJPayBaseListEventHandleProtocol> _eventHandler;
    UIView *_topMarginView;
    UIView *_bottomMarginView;
}

@property (retain, nonatomic) UIView *topMarginView;
@property (retain, nonatomic) UIView *bottomMarginView;
@property (readonly, weak, nonatomic) CJPayCommonListViewController *viewController;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) CJPayBaseListViewModel *viewModel;
@property (weak, nonatomic) id<CJPayBaseListEventHandleProtocol> eventHandler;

- (void)bindViewModel:(id)arg0;
- (id)topMarginView;
- (void)p_baseMakeConstraints;
- (void)setTopMarginView:(id)arg0;
- (id)eventHandler;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (id)viewController;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (void)setViewModel:(id)arg0;
- (id)containerView;
- (id)viewModel;
- (void)setEventHandler:(id)arg0;
- (void)setupUI;
- (void)didSelect;
- (id)bottomMarginView;
- (void)setBottomMarginView:(id)arg0;

@end
