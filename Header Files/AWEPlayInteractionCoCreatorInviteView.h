//
//     Generated by private class-dump
//

@class AWEButton, DUXLoadingCircleView, AWEAwemeModel;

@interface AWEPlayInteractionCoCreatorInviteView : UIView {
    AWEAwemeModel *_model;
    AWEButton *_acceptButton;
    AWEButton *_refuseButton;
    id /* block */ _acceptButtonHandler;
    id /* block */ _refuseButtonHandler;
    DUXLoadingCircleView *_loadingView;
}

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEButton *acceptButton;
@property (retain, nonatomic) AWEButton *refuseButton;
@property (copy, nonatomic) id /* block */ acceptButtonHandler;
@property (copy, nonatomic) id /* block */ refuseButtonHandler;
@property (retain, nonatomic) DUXLoadingCircleView *loadingView;

- (id)refuseButton;
- (void)setRefuseButton:(id)arg0;
- (void)startLoading:(id)arg0;
- (id /* block */)acceptButtonHandler;
- (id /* block */)refuseButtonHandler;
- (void)acceptButtonAction;
- (void)refuseButtonAction;
- (void)setAcceptButtonHandler:(id /* block */)arg0;
- (void)setRefuseButtonHandler:(id /* block */)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)stopLoading:(id)arg0;
- (id)acceptButton;
- (void)setAcceptButton:(id)arg0;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (void)configureConstraints;
- (void)configureSubviews;

@end
