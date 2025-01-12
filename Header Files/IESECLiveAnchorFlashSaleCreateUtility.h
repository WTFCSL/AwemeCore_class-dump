//
//     Generated by private class-dump
//

@interface IESECLiveAnchorFlashSaleCreateUtility : NSObject

+ (double)buttonMargin;
+ (id)placeHolderColor;
+ (BOOL)isValidPrice:(id)arg0 showToast:(BOOL)arg1 acceptZero:(BOOL)arg2;
+ (BOOL)isValidStock:(id)arg0 maxLimit:(long long)arg1 showToast:(BOOL)arg2;
+ (BOOL)isValidSKUCode:(id)arg0 showToast:(BOOL)arg1 acceptShortLength:(BOOL)arg2;
+ (BOOL)isValidDeposit:(id)arg0 showToast:(BOOL)arg1 acceptZero:(BOOL)arg2;
+ (BOOL)isValidPrice:(id)arg0 showToast:(BOOL)arg1 acceptZero:(BOOL)arg2 acceptDecimals:(BOOL)arg3 priceTitle:(id)arg4;
+ (BOOL)isValidPriceLiterals:(id)arg0 acceptDecimals:(BOOL)arg1;
+ (void)makeToast:(id)arg0 show:(BOOL)arg1;
+ (id)buttonColorWithEnableStatus:(BOOL)arg0;
+ (id)buttonFontColorWithEnableStatus:(BOOL)arg0;
+ (id)itemSubTitleLabel;
+ (id)itemTextField;
+ (id)itemLabelColor;
+ (double)itemTopMargin;
+ (id)lineColor;
+ (double)buttonCornerRadius;
+ (id)actionButtonFont;
+ (double)itemHeight;
+ (id)itemLabel;
+ (double)imageCornerRadius;

@end
