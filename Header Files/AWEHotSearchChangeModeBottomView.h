//
//     Generated by private class-dump
//

@class UIImageView, UIView;
@protocol AWEHotSearchChangeModeDelegate;

@interface AWEHotSearchChangeModeBottomView : UIView {
    id<AWEHotSearchChangeModeDelegate> _delegate;
    UIImageView *_closeImageView;
    UIView *_separateLine;
    UIView *_bottomBGView;
    UIView *_upperBGView;
}

@property (retain, nonatomic) UIImageView *closeImageView;
@property (retain, nonatomic) UIView *separateLine;
@property (retain, nonatomic) UIView *bottomBGView;
@property (retain, nonatomic) UIView *upperBGView;
@property (weak, nonatomic) id<AWEHotSearchChangeModeDelegate> delegate;

+ (long long)barTypeForAweme:(id)arg0;

- (id)separateLine;
- (void)setSeparateLine:(id)arg0;
- (void)updateBackgroundColor:(id)arg0 upColor:(id)arg1;
- (void)updateType:(long long)arg0;
- (id)bottomBGView;
- (id)upperBGView;
- (void)closeFullMode:(id)arg0;
- (id)colorStringAdjust:(id)arg0;
- (void)setBottomBGView:(id)arg0;
- (void)setUpperBGView:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)closeImageView;
- (void)setCloseImageView:(id)arg0;

@end
