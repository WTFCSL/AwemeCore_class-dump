//
//     Generated by private class-dump
//

@class NSString, UIImageView, UILabel, UIView;

@interface AWEConcernFansToolEntranceView : UIView <AWEConcernFansToolEntranceProtocol> {
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIView *_yellowDot;
    UIImageView *_arrowImageView;
}

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *yellowDot;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)create;

- (void)__addObservers;
- (void)__setupUI;
- (void)__addGestureRecognizer;
- (id)yellowDot;
- (void)__updateTitleLabelMasonry;
- (void)__enterFansTool;
- (void)__removeYellowDot;
- (void)__fansToolDidEnter;
- (void)setYellowDot:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)dealloc;
- (void)setTitleLabel:(id)arg0;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg0;

@end