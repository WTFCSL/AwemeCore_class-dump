//
//     Generated by private class-dump
//

@class NSArray, UILabel;

@interface AWERecognitionLoadingView : UIView {
    BOOL _loopContinue;
    UILabel *_tipTitleLabel;
    UILabel *_tipHintLabel;
    NSArray *_lottieArray;
}

@property (nonatomic) BOOL loopContinue;
@property (copy, nonatomic) NSArray *lottieArray;
@property (readonly, nonatomic) UILabel *tipTitleLabel;
@property (readonly, nonatomic) UILabel *tipHintLabel;

- (void)p_play;
- (void)hideLottie;
- (id)lottieArray;
- (void)setLottieArray:(id)arg0;
- (id)tipTitleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 hideLottie:(BOOL)arg1;
- (void)setupLotties;
- (id)createAnimationView;
- (void)setLoopContinue:(BOOL)arg0;
- (void)loopItem:(long long)arg0 :(long long)arg1;
- (BOOL)loopContinue;
- (struct CGPoint { double x0; double x1; })randomItemCenter:(long long)arg0 :(long long)arg1;
- (id)tipHintLabel;
- (void).cxx_destruct;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)play;
- (void)setupConstraints;
- (struct CGSize { double x0; double x1; })area;
- (void)setupViews;

@end