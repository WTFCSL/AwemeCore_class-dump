//
//     Generated by private class-dump
//

@class NSArray, UIImage, NSString;

@interface AWEHPPinTopSnackBarCouponUIModel : NSObject <AWEHPPinTopBusinessUIConfigProtocol> {
    BOOL _shouldShowCouponView;
    NSArray *_imageURL;
    UIImage *_backgroundImage;
    UIImage *_amountIconImage;
    long long _amount;
    NSString *_couponDesc;
    NSString *_title;
}

@property (retain, nonatomic) NSArray *imageURL;
@property (retain, nonatomic) UIImage *backgroundImage;
@property (retain, nonatomic) UIImage *amountIconImage;
@property (nonatomic) long long amount;
@property (copy, nonatomic) NSString *couponDesc;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL shouldShowCouponView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)couponDesc;
- (void)setCouponDesc:(id)arg0;
- (BOOL)shouldShowCouponView;
- (id)amountIconImage;
- (void)setAmountIconImage:(id)arg0;
- (void)setShouldShowCouponView:(BOOL)arg0;
- (id)backgroundImage;
- (void).cxx_destruct;
- (void)setImageURL:(id)arg0;
- (BOOL)isValid;
- (id)imageURL;
- (id)title;
- (void)setBackgroundImage:(id)arg0;
- (void)setTitle:(id)arg0;
- (long long)amount;
- (void)setAmount:(long long)arg0;

@end
