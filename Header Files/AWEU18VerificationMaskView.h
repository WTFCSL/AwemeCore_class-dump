//
//     Generated by private class-dump
//

@class UIImageView, UILabel, NSObject, UIButton;
@protocol AWEU18VerificationMaskViewDelegate;

@interface AWEU18VerificationMaskView : UIView {
    UIImageView *_coverImageView;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIButton *_verificationButton;
    UILabel *_laterHintLabel;
    NSObject<AWEU18VerificationMaskViewDelegate> *_delegate;
}

@property (weak, nonatomic) NSObject<AWEU18VerificationMaskViewDelegate> *delegate;
@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIButton *verificationButton;
@property (retain, nonatomic) UILabel *laterHintLabel;

- (void)setCoverImageView:(id)arg0;
- (id)coverImageView;
- (void)updateLayoutWithContext:(id)arg0;
- (id)verificationButton;
- (id)laterHintLabel;
- (void)verifyName;
- (void)updateLaterHintText:(id)arg0;
- (void)setVerificationButton:(id)arg0;
- (void)setLaterHintLabel:(id)arg0;
- (void).cxx_destruct;
- (void)commonInit;
- (id)initWithDelegate:(id)arg0;
- (id)titleLabel;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (id)detailLabel;
- (void)setDetailLabel:(id)arg0;

@end
