//
//     Generated by private class-dump
//

@class UILabel;

@interface AWELiveWorkRightEntranceView : UIView {
    UILabel *_playBackTitle;
    UILabel *_dataLabel;
    UILabel *_playNumber;
}

@property (retain, nonatomic) UILabel *playBackTitle;
@property (retain, nonatomic) UILabel *dataLabel;
@property (retain, nonatomic) UILabel *playNumber;

- (void)setupDataWithModel:(id)arg0;
- (id)playBackTitle;
- (id)playNumber;
- (void)setPlayBackTitle:(id)arg0;
- (void)setPlayNumber:(id)arg0;
- (id)initWithModel:(id)arg0;
- (void).cxx_destruct;
- (void)updateWithConfig:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupUI;
- (id)dataLabel;
- (void)setDataLabel:(id)arg0;

@end