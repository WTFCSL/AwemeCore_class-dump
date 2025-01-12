//
//     Generated by private class-dump
//

@class UIButton, NSString;

@interface IESGCPDetailTitleMiniPlayButtonView : IESGCPDetailBaseView <IESGCPDIContextSubscriber> {
    UIButton *_playButton;
}

@property (retain, nonatomic) UIButton *playButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel:(id)arg0;
- (void)didSetGameCPDIContext;
- (void)didTapActionButton:(id)arg0;
- (void)layoutViews;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupViews;
- (id)playButton;
- (void)setPlayButton:(id)arg0;

@end
