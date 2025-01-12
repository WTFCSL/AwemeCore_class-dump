//
//     Generated by private class-dump
//

@class AWEPaymentBadgeConfig, AWEDiscoverDInsetLabel, UIView;

@interface AWEPaymentBadgeView : UIView {
    BOOL _hasPaid;
    BOOL _isCurrentUser;
    BOOL _isInLimitFree;
    BOOL _isVIPVideo;
    BOOL _isUnlockedVideo;
    AWEDiscoverDInsetLabel *_titleLabel;
    unsigned long long _paymentStatus;
    AWEPaymentBadgeConfig *_config;
    UIView *_gradientView;
}

@property (retain, nonatomic) UIView *gradientView;
@property (retain, nonatomic) AWEPaymentBadgeConfig *config;
@property (nonatomic) unsigned long long paymentStatus;
@property (nonatomic) BOOL hasPaid;
@property (nonatomic) BOOL isCurrentUser;
@property (nonatomic) BOOL isInLimitFree;
@property (nonatomic) BOOL isVIPVideo;
@property (nonatomic) BOOL isUnlockedVideo;
@property (retain, nonatomic) AWEDiscoverDInsetLabel *titleLabel;

- (BOOL)isInLimitFree;
- (void)setIsInLimitFree:(BOOL)arg0;
- (BOOL)hasPaid;
- (void)setHasPaid:(BOOL)arg0;
- (void)addGradientAndCornerBackground;
- (void)updateUIWithTitle:(id)arg0;
- (void)configurePaymentBadgeViewWithMixModel:(id)arg0 title:(id)arg1 isCurrentUser:(BOOL)arg2;
- (void)configurePaymentBadgeViewWithPlayetModel:(id)arg0 title:(id)arg1 isCurrentUser:(BOOL)arg2;
- (void)setIsVIPVideo:(BOOL)arg0;
- (BOOL)isUnlockedVideo;
- (BOOL)isVIPVideo;
- (void)usePaymentStatusStyle:(unsigned long long)arg0;
- (void)configurePaymentBadgeViewWithMixModel:(id)arg0 isCurrentUser:(BOOL)arg1;
- (void)configurePaymentBadgeViewWithPlayetModel:(id)arg0 isCurrentUser:(BOOL)arg1;
- (void)configurePaymentBadgeViewWithAwemeModel:(id)arg0 isCurrentUser:(BOOL)arg1;
- (void)setPaymentStatus:(unsigned long long)arg0 isCurrentUser:(BOOL)arg1 isVIPVideo:(BOOL)arg2;
- (void)setIsUnlockedVideo:(BOOL)arg0;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (id)config;
- (id)titleLabel;
- (void)setGradientView:(id)arg0;
- (id)initWithConfig:(id)arg0;
- (void)layoutSubviews;
- (id)gradientView;
- (void)setTitleLabel:(id)arg0;
- (BOOL)isCurrentUser;
- (void)setIsCurrentUser:(BOOL)arg0;
- (void)setupUI;
- (unsigned long long)paymentStatus;
- (void)setPaymentStatus:(unsigned long long)arg0;

@end
