//
//     Generated by private class-dump
//

@class UILabel, UIButton, NSArray;

@interface BDNovelReadingSettingBackgroundView : BDNovelReadingSettingChildView {
    UILabel *_backgroundLabel;
    UIButton *_backgroundDefaultBtn;
    UIButton *_backgroundYellowBtn;
    UIButton *_backgroundGreenBtn;
    UIButton *_backgroundBlueBtn;
    UIButton *_backgroundDarkModeBtn;
    NSArray *_backgroundBtnArr;
}

@property (retain, nonatomic) UILabel *backgroundLabel;
@property (retain, nonatomic) UIButton *backgroundDefaultBtn;
@property (retain, nonatomic) UIButton *backgroundYellowBtn;
@property (retain, nonatomic) UIButton *backgroundGreenBtn;
@property (retain, nonatomic) UIButton *backgroundBlueBtn;
@property (retain, nonatomic) UIButton *backgroundDarkModeBtn;
@property (retain, nonatomic) NSArray *backgroundBtnArr;

- (id)backgroundLabel;
- (id)backgroundDarkModeBtn;
- (id)backgroundYellowBtn;
- (id)backgroundGreenBtn;
- (id)backgroundBlueBtn;
- (id)backgroundDefaultBtn;
- (void)setBackgroundBtnArr:(id)arg0;
- (id)backgroundBtnArr;
- (void)onBackgroundColorSelect:(id)arg0;
- (void)updateWithConfigData:(id)arg0;
- (void)setBackgroundLabel:(id)arg0;
- (void)setBackgroundDefaultBtn:(id)arg0;
- (void)setBackgroundYellowBtn:(id)arg0;
- (void)setBackgroundGreenBtn:(id)arg0;
- (void)setBackgroundBlueBtn:(id)arg0;
- (void)setBackgroundDarkModeBtn:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;

@end
