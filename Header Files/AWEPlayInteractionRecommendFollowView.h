//
//     Generated by private class-dump
//

@class AWEUIListCellActionButtonColorModel, AWEButton, UIButton;
@protocol AWEFollowButtonProtocol;

@interface AWEPlayInteractionRecommendFollowView : UIStackView {
    AWEButton *_uninterestBtn;
    UIButton<AWEFollowButtonProtocol> *_followBtn;
    AWEUIListCellActionButtonColorModel *_colorModel;
}

@property (retain, nonatomic) AWEUIListCellActionButtonColorModel *colorModel;
@property (retain, nonatomic) AWEButton *uninterestBtn;
@property (retain, nonatomic) UIButton<AWEFollowButtonProtocol> *followBtn;

- (id)colorModel;
- (void)setColorModel:(id)arg0;
- (void)buildUI;
- (id)followBtn;
- (void)setFollowBtn:(id)arg0;
- (id)uninterestBtn;
- (void)setUninterestBtn:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end