//
//     Generated by private class-dump
//

@class UIImageView, UILabel, AWEPOITagRateGradeModel;

@interface AWEPOIDetailRateGradeView : UIView {
    UIImageView *_iconImageView;
    UILabel *_gradeLabel;
    AWEPOITagRateGradeModel *_tagModel;
    id /* block */ _onSelect;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *gradeLabel;
@property (retain, nonatomic) AWEPOITagRateGradeModel *tagModel;
@property (copy, nonatomic) id /* block */ onSelect;

- (void)setTagModel:(id)arg0;
- (id)tagModel;
- (void)setGradeLabel:(id)arg0;
- (id)gradeLabel;
- (void)updateWithTag:(id)arg0;
- (void)setOnSelect:(id /* block */)arg0;
- (void)invalidateIntrinsicContentSize;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)onTap;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;
- (void)setupUI;
- (id /* block */)onSelect;

@end