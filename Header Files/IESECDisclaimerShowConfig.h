//
//     Generated by private class-dump
//

@class NSDictionary, NSString, UIView;

@interface IESECDisclaimerShowConfig : NSObject {
    BOOL _allowThird;
    long long _promotionSource;
    long long _forceShowType;
    NSDictionary *_extraTrackerParams;
    UIView *_containerView;
    NSString *_ecomAppID;
    NSDictionary *_disclaimerLoginInfo;
}

@property (nonatomic) long long promotionSource;
@property (nonatomic) long long forceShowType;
@property (nonatomic) BOOL allowThird;
@property (copy, nonatomic) NSDictionary *extraTrackerParams;
@property (weak, nonatomic) UIView *containerView;
@property (copy, nonatomic) NSString *ecomAppID;
@property (copy, nonatomic) NSDictionary *disclaimerLoginInfo;

- (long long)promotionSource;
- (void)setupDefaultValues;
- (void)setPromotionSource:(long long)arg0;
- (void)setForceShowType:(long long)arg0;
- (void)setExtraTrackerParams:(id)arg0;
- (id)initWithPromotionSource:(long long)arg0;
- (long long)forceShowType;
- (id)extraTrackerParams;
- (BOOL)allowThird;
- (id)ecomAppID;
- (void)setDisclaimerLoginInfo:(id)arg0;
- (void)setAllowThird:(BOOL)arg0;
- (void)setEcomAppID:(id)arg0;
- (id)disclaimerLoginInfo;
- (id)init;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)containerView;

@end