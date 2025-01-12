//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayFaceRecognitionFullLeadPageModel : NSObject {
    BOOL _isSign;
    BOOL _isLightTheme;
    BOOL _isShowTopBrand;
    NSString *_backgroundImageURL;
    NSString *_topTitleImageURL;
    double _topTitleImageHeight;
    double _topTitleImageWidth;
    NSString *_title;
    NSString *_subTitle;
    NSString *_centerImageURL;
    NSString *_protocolDesc;
    NSString *_popupProtocolDesc;
    NSString *_agreementDesc;
    NSString *_agreementURL;
    NSString *_buttonStr;
    NSString *_retainStr;
    id /* block */ _userCancelBlock;
    id /* block */ _userActionBLock;
    id /* block */ _trackerBlock;
}

@property (nonatomic) BOOL isSign;
@property (nonatomic) BOOL isLightTheme;
@property (copy, nonatomic) NSString *backgroundImageURL;
@property (nonatomic) BOOL isShowTopBrand;
@property (copy, nonatomic) NSString *topTitleImageURL;
@property (nonatomic) double topTitleImageHeight;
@property (nonatomic) double topTitleImageWidth;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *centerImageURL;
@property (copy, nonatomic) NSString *protocolDesc;
@property (copy, nonatomic) NSString *popupProtocolDesc;
@property (copy, nonatomic) NSString *agreementDesc;
@property (copy, nonatomic) NSString *agreementURL;
@property (copy, nonatomic) NSString *buttonStr;
@property (copy, nonatomic) NSString *retainStr;
@property (copy, nonatomic) id /* block */ userCancelBlock;
@property (copy, nonatomic) id /* block */ userActionBLock;
@property (copy, nonatomic) id /* block */ trackerBlock;

- (id)agreementURL;
- (void)setAgreementURL:(id)arg0;
- (void)setIsLightTheme:(BOOL)arg0;
- (id /* block */)trackerBlock;
- (void)setTrackerBlock:(id /* block */)arg0;
- (void)setIsSign:(BOOL)arg0;
- (BOOL)isSign;
- (void)setIsShowTopBrand:(BOOL)arg0;
- (void)setTopTitleImageURL:(id)arg0;
- (void)setTopTitleImageHeight:(double)arg0;
- (void)setTopTitleImageWidth:(double)arg0;
- (void)setCenterImageURL:(id)arg0;
- (void)setProtocolDesc:(id)arg0;
- (id)popupProtocolDesc;
- (void)setPopupProtocolDesc:(id)arg0;
- (id)agreementDesc;
- (void)setAgreementDesc:(id)arg0;
- (void)setButtonStr:(id)arg0;
- (void)setRetainStr:(id)arg0;
- (void)setUserCancelBlock:(id /* block */)arg0;
- (void)setUserActionBLock:(id /* block */)arg0;
- (BOOL)isShowTopBrand;
- (id)topTitleImageURL;
- (double)topTitleImageHeight;
- (double)topTitleImageWidth;
- (id)centerImageURL;
- (id)protocolDesc;
- (id)buttonStr;
- (id)retainStr;
- (id /* block */)userCancelBlock;
- (id /* block */)userActionBLock;
- (void).cxx_destruct;
- (id)title;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (void)setTitle:(id)arg0;
- (id)backgroundImageURL;
- (void)setBackgroundImageURL:(id)arg0;
- (BOOL)isLightTheme;

@end
