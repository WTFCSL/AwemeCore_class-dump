//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView, UITapGestureRecognizer;
@protocol UIGestureRecognizerDelegate;

@interface IESLiveNativeAppShelfCellCoverImageView : UIImageView {
    BOOL _isShouldShowProductPic;
    BOOL _isShowProductPic;
    id /* block */ _tapAction;
    UIView *_coverHighLightView;
    UITapGestureRecognizer *_tapGesture;
    UIView *_coverShadowView;
    UILabel *_numberLabel;
    UIImageView *_explainingTipImageView;
    UILabel *_explainingTipLabel;
}

@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UIView *coverShadowView;
@property (retain, nonatomic) UILabel *numberLabel;
@property (retain, nonatomic) UIView *coverHighLightView;
@property (retain, nonatomic) UIImageView *explainingTipImageView;
@property (retain, nonatomic) UILabel *explainingTipLabel;
@property (nonatomic) BOOL isShouldShowProductPic;
@property (nonatomic) BOOL isShowProductPic;
@property (weak, nonatomic) id<UIGestureRecognizerDelegate> tapGestureDelegate;
@property (copy, nonatomic) id /* block */ tapAction;

- (id)coverShadowView;
- (void)setCoverShadowView:(id)arg0;
- (id)initWithDIContent:(id)arg0 trackContext:(id)arg1;
- (id)getProductTraceParams;
- (void)setTapGestureDelegate:(id)arg0;
- (id)coverHighLightView;
- (id)explainingTipImageView;
- (id)explainingTipLabel;
- (BOOL)isShouldShowProductPic;
- (BOOL)isShowProductPic;
- (void)setCoverHighLightView:(id)arg0;
- (void)setExplainingTipImageView:(id)arg0;
- (void)setExplainingTipLabel:(id)arg0;
- (void)setIsShouldShowProductPic:(BOOL)arg0;
- (void)setIsShowProductPic:(BOOL)arg0;
- (void).cxx_destruct;
- (id)tapGesture;
- (void)setupUI;
- (void)setTapGesture:(id)arg0;
- (id /* block */)tapAction;
- (void)setTapAction:(id /* block */)arg0;
- (id)numberLabel;
- (void)setNumberLabel:(id)arg0;

@end