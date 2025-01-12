//
//     Generated by private class-dump
//

@class UIButton, AFECloseBtn;

@interface AFECircularSuitableView : AFECircularView {
    unsigned long long _screenWidthSize;
    AFECloseBtn *_closeBtn;
    UIButton *_playBtn;
}

@property (retain, nonatomic) AFECloseBtn *closeBtn;
@property (retain, nonatomic) UIButton *playBtn;

- (id)closeBtn;
- (void)setCloseBtn:(id)arg0;
- (void)setSize;
- (id)playBtn;
- (void)setPlayBtn:(id)arg0;
- (void)setScreenRotation:(BOOL)arg0;
- (void)onButtonCancel;
- (void)addView;
- (void)setPlayBtnIcon:(id)arg0;
- (void).cxx_destruct;
- (void)play:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)_updateView;

@end
