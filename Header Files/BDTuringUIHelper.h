//
//     Generated by private class-dump
//

@class NSDictionary;

@interface BDTuringUIHelper : NSObject {
    BOOL _shouldCloseFromMask;
    BOOL _showNavigationBarWhenDisappear;
    BOOL _turingForbidLandscape;
    BOOL _supportLandscape;
    BOOL _disableLoadingView;
    BOOL _isShowAlert;
    long long _smsDigits;
    long long _emailDigits;
    NSDictionary *_verifyThemeDictionary;
    NSDictionary *_smsThemeDictionary;
    NSDictionary *_qaThemeDictionary;
    NSDictionary *_verifyTextDictionary;
    NSDictionary *_smsTextDictionary;
    NSDictionary *_qaTextDictionary;
    NSDictionary *_sealThemeDictionary;
    NSDictionary *_sealTextDictionary;
}

@property (nonatomic) BOOL shouldCloseFromMask;
@property (nonatomic) BOOL showNavigationBarWhenDisappear;
@property (nonatomic) BOOL turingForbidLandscape;
@property (nonatomic) BOOL supportLandscape;
@property (nonatomic) BOOL disableLoadingView;
@property (nonatomic) BOOL isShowAlert;
@property (nonatomic) long long smsDigits;
@property (nonatomic) long long emailDigits;
@property (copy) NSDictionary *verifyThemeDictionary;
@property (copy) NSDictionary *smsThemeDictionary;
@property (copy) NSDictionary *qaThemeDictionary;
@property (copy) NSDictionary *verifyTextDictionary;
@property (copy) NSDictionary *smsTextDictionary;
@property (copy) NSDictionary *qaTextDictionary;
@property (copy) NSDictionary *sealThemeDictionary;
@property (copy) NSDictionary *sealTextDictionary;

+ (double)statusBarHeight;
+ (id)sharedInstance;
+ (id)keyWindow;

- (BOOL)isShowAlert;
- (void)setIsShowAlert:(BOOL)arg0;
- (id)sealThemeDictionary;
- (id)sealTextDictionary;
- (void)setShowNavigationBarWhenDisappear:(BOOL)arg0;
- (void)setSupportLandscape:(BOOL)arg0;
- (void)setSealThemeDictionary:(id)arg0;
- (void)setSealTextDictionary:(id)arg0;
- (BOOL)turingForbidLandscape;
- (void)setTuringForbidLandscape:(BOOL)arg0;
- (void)setDisableLoadingView:(BOOL)arg0;
- (void)setVerifyThemeDictionary:(id)arg0;
- (void)setVerifyTextDictionary:(id)arg0;
- (void)setSmsThemeDictionary:(id)arg0;
- (void)setSmsTextDictionary:(id)arg0;
- (void)setSmsDigits:(long long)arg0;
- (void)setEmailDigits:(long long)arg0;
- (void)setQaThemeDictionary:(id)arg0;
- (void)setQaTextDictionary:(id)arg0;
- (BOOL)shouldCloseFromMask;
- (void)setShouldCloseFromMask:(BOOL)arg0;
- (id)verifyThemeDictionary;
- (id)verifyTextDictionary;
- (BOOL)supportLandscape;
- (id)qaThemeDictionary;
- (id)qaTextDictionary;
- (id)smsThemeDictionary;
- (id)smsTextDictionary;
- (BOOL)disableLoadingView;
- (long long)smsDigits;
- (long long)emailDigits;
- (BOOL)showNavigationBarWhenDisappear;
- (id)init;
- (void).cxx_destruct;

@end
