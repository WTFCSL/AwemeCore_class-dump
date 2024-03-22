//
//     Generated by private class-dump
//

@class BDByteScreenCastSearchNoDeviceModel, UIScrollView, UIView, UIImage, NSString, UIImageView, CAGradientLayer, UILabel, BDByteScreenCastSearchNoDeviceView;

@interface BDSCSearchNoDeviceView : UIView <BDSCSearchDeviceNoDeviceViewProtocol> {
    BOOL _isLandscape;
    BOOL _feedbackBottom;
    UIScrollView *_scrollView;
    BDByteScreenCastSearchNoDeviceModel *_model;
    UIImage *_feedbackImage;
    id /* block */ _airPlayBlock;
    UIView *_containerView;
    BDByteScreenCastSearchNoDeviceView *_noDeviceView;
    CAGradientLayer *_feedbackMaskLayer;
    UIView *_feedbackView;
    UILabel *_descLabel;
    UILabel *_feedbackBtn;
    UIImageView *_feedbackImageView;
    double _feedbackMargin;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) BDByteScreenCastSearchNoDeviceView *noDeviceView;
@property (retain, nonatomic) CAGradientLayer *feedbackMaskLayer;
@property (retain, nonatomic) UIView *feedbackView;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UILabel *feedbackBtn;
@property (retain, nonatomic) UIImageView *feedbackImageView;
@property (nonatomic) double feedbackMargin;
@property (nonatomic) BOOL feedbackBottom;
@property (retain, nonatomic) BDByteScreenCastSearchNoDeviceModel *model;
@property (retain, nonatomic) UIImage *feedbackImage;
@property (copy, nonatomic) id /* block */ airPlayBlock;
@property (nonatomic) BOOL isLandscape;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descLabel;
- (void)setDescLabel:(id)arg0;
- (id)feedbackImageView;
- (id)feedbackBtn;
- (void)setFeedbackImageView:(id)arg0;
- (void)setFeedbackBtn:(id)arg0;
- (void)buildSubviews;
- (void)setFeedbackImage:(id)arg0;
- (void)configFeedbackMargin:(double)arg0 bottom:(BOOL)arg1;
- (id)noDeviceView;
- (void)setAirPlayBlock:(id /* block */)arg0;
- (void)setNoDeviceView:(id)arg0;
- (id /* block */)airPlayBlock;
- (BOOL)feedbackBottom;
- (double)feedbackMargin;
- (id)feedbackMaskLayer;
- (id)feedbackImage;
- (void)setFeedbackMargin:(double)arg0;
- (void)setFeedbackBottom:(BOOL)arg0;
- (void)updateFeedbackImageView;
- (void)onFeedBackClick:(id)arg0;
- (void)setFeedbackMaskLayer:(id)arg0;
- (void)setModel:(id)arg0;
- (void)setScrollView:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (void)setIsLandscape:(BOOL)arg0;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)containerView;
- (void)layoutSublayersOfLayer:(id)arg0;
- (BOOL)isLandscape;
- (id)scrollView;
- (id)feedbackView;
- (void)setFeedbackView:(id)arg0;
- (void)rebuildConstraints;

@end
