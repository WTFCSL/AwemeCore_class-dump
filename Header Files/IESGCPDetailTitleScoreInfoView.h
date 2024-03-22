//
//     Generated by private class-dump
//

@class IESGCPImageButton, NSString, UIView;

@interface IESGCPDetailTitleScoreInfoView : IESGCPDetailBaseView <IESGCPDIContextSubscriber> {
    UIView *_contentView;
    IESGCPImageButton *_scoreLabel;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) IESGCPImageButton *scoreLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel:(id)arg0;
- (void)didSetGameCPDIContext;
- (void)setupV4ScoreInfoView;
- (void)layoutViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)contentView;
- (void)setContentView:(id)arg0;
- (void)setupViews;
- (id)scoreLabel;
- (void)setScoreLabel:(id)arg0;

@end
