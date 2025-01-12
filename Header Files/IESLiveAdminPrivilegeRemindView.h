//
//     Generated by private class-dump
//

@class NSMutableArray, NSArray, UIImageView, UIView, UILabel, UIButton;

@interface IESLiveAdminPrivilegeRemindView : UIView {
    BOOL _isWhite;
    BOOL _isBottomType;
    id /* block */ _backBlock;
    NSArray *_contents;
    UIView *_baseView;
    UIView *_lineView;
    UIButton *_backButton;
    UILabel *_titleLabel;
    UIImageView *_backImageView;
    NSMutableArray *_guideLabels;
    double _baseViewHeight;
    UIView *_bgView;
}

@property (retain, nonatomic) NSArray *contents;
@property (retain, nonatomic) UIView *baseView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIButton *backButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *backImageView;
@property (retain, nonatomic) NSMutableArray *guideLabels;
@property (nonatomic) double baseViewHeight;
@property (retain, nonatomic) UIView *bgView;
@property (nonatomic) BOOL isBottomType;
@property (copy, nonatomic) id /* block */ backBlock;
@property (nonatomic) BOOL isWhite;

- (void)setBackImageView:(id)arg0;
- (id)backImageView;
- (void)setBackBlock:(id /* block */)arg0;
- (id /* block */)backBlock;
- (void)setBaseViewHeight:(double)arg0;
- (double)baseViewHeight;
- (void)setIsWhite:(BOOL)arg0;
- (id)guideLabels;
- (BOOL)isBottomType;
- (void)onSelfHide;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 isWhite:(BOOL)arg1 baseViewHeight:(double)arg2 isBottomType:(BOOL)arg3;
- (void)setGuideLabels:(id)arg0;
- (void)setIsBottomType:(BOOL)arg0;
- (BOOL)isWhite;
- (void).cxx_destruct;
- (id)contents;
- (id)baseView;
- (id)titleLabel;
- (void)setContents:(id)arg0;
- (void)setBaseView:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)backButton;
- (void)setBackButton:(id)arg0;
- (void)backAction;
- (id)bgView;
- (void)setBgView:(id)arg0;
- (void)setupView;
- (id)lineView;
- (void)setLineView:(id)arg0;

@end
