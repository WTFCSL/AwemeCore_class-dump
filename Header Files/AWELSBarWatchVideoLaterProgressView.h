//
//     Generated by private class-dump
//

@class UIView;

@interface AWELSBarWatchVideoLaterProgressView : UIView {
    UIView *_progressView;
    double _progress;
}

@property (retain, nonatomic) UIView *progressView;
@property (nonatomic) double progress;

- (void)updatePlayProgress:(double)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)progressView;
- (void)setProgressView:(id)arg0;
- (double)progress;
- (void)layoutSubviews;
- (void)setProgress:(double)arg0;
- (void)setupUI;

@end