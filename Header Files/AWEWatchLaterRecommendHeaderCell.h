//
//     Generated by private class-dump
//

@class UILabel, UIImageView, UIView;

@interface AWEWatchLaterRecommendHeaderCell : UICollectionReusableView {
    id /* block */ _closeBlock;
    UILabel *_textLabel;
    UIView *_textFakeView;
    UIView *_lineView;
    UIImageView *_closeView;
}

@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIView *textFakeView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UIImageView *closeView;
@property (copy, nonatomic) id /* block */ closeBlock;

- (id /* block */)closeBlock;
- (void)setCloseBlock:(id /* block */)arg0;
- (id)closeView;
- (void)setCloseView:(id)arg0;
- (id)textFakeView;
- (void)setTextFakeView:(id)arg0;
- (id)textLabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTextLabel:(id)arg0;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (void)setupUI;
- (void)updateText:(id)arg0;

@end
