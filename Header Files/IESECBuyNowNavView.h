//
//     Generated by private class-dump
//

@class UILabel, IESECHighlightButton, UIView;
@protocol IESECBuyNowNavDelegate;

@interface IESECBuyNowNavView : UIView {
    BOOL _isHalfPanel;
    UIView *_defaultView;
    IESECHighlightButton *_blackCloseButton;
    UILabel *_titleLabel;
    id<IESECBuyNowNavDelegate> _delegate;
}

@property (retain, nonatomic) UIView *defaultView;
@property (retain, nonatomic) IESECHighlightButton *blackCloseButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (weak, nonatomic) id<IESECBuyNowNavDelegate> delegate;
@property (nonatomic) BOOL isHalfPanel;

+ (double)heightWithIsHalfPanel:(BOOL)arg0;

- (void)setDefaultView:(id)arg0;
- (void)tapClose;
- (BOOL)isHalfPanel;
- (id)blackCloseButton;
- (id)initWithDelegate:(id)arg0 isHalfPanel:(BOOL)arg1;
- (void)setBlackCloseButton:(id)arg0;
- (void)setIsHalfPanel:(BOOL)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id)defaultView;

@end
