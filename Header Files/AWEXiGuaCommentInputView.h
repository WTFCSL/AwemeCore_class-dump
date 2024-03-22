//
//     Generated by private class-dump
//

@class AWEAwemeModel, UILabel, UIView, UIButton;

@interface AWEXiGuaCommentInputView : UIView {
    AWEAwemeModel *_currentAwemeModel;
    UIButton *_moreButton;
    UIView *_lineView;
    UIView *_placeView;
    UILabel *_contentLabel;
    UILabel *_guideLabel;
    UIButton *_placeButton;
    UIButton *_commentButton;
}

@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIView *placeView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *guideLabel;
@property (retain, nonatomic) UIButton *moreButton;
@property (retain, nonatomic) UIButton *placeButton;
@property (retain, nonatomic) UIButton *commentButton;
@property (retain, nonatomic) AWEAwemeModel *currentAwemeModel;

+ (double)viewHeight;

- (id)currentAwemeModel;
- (void)setPlaceView:(id)arg0;
- (id)placeView;
- (id)guideLabel;
- (void)setGuideLabel:(id)arg0;
- (void)configureUI;
- (id)commentButton;
- (void)setCurrentAwemeModel:(id)arg0;
- (void)setCommentButton:(id)arg0;
- (id)placeButton;
- (void)traceWithEvent:(id)arg0 enterMethod:(id)arg1;
- (void)moreButtonTapped;
- (void)xiguaCommentTapped;
- (void)setPlaceButton:(id)arg0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void).cxx_destruct;
- (id)moreButton;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setMoreButton:(id)arg0;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;

@end