//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface BDARVLiteWebViewModel : NSObject {
    BOOL _disableCornerRadius;
    BOOL _disableClose;
    BOOL _dismissTitleLabel;
    BOOL _enableInterceptPV;
    NSString *_adID;
    NSString *_logExtra;
    NSString *_webURL;
    NSString *_liteWebURL;
    NSString *_webTitle;
    unsigned long long _preloadType;
    unsigned long long _webviewType;
    long long _height;
    NSString *_skanParameters;
    NSDictionary *_nativeSiteConfig;
    NSDictionary *_nativeSitAdInfo;
    NSString *_appData;
    NSDictionary *_extraData;
}

@property (copy, nonatomic) NSString *adID;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSString *webURL;
@property (copy, nonatomic) NSString *liteWebURL;
@property (copy, nonatomic) NSString *webTitle;
@property (nonatomic) unsigned long long preloadType;
@property (nonatomic) unsigned long long webviewType;
@property (nonatomic) BOOL disableCornerRadius;
@property (nonatomic) BOOL disableClose;
@property (nonatomic) long long height;
@property (copy, nonatomic) NSString *skanParameters;
@property (copy, nonatomic) NSDictionary *nativeSiteConfig;
@property (copy, nonatomic) NSDictionary *nativeSitAdInfo;
@property (copy, nonatomic) NSString *appData;
@property (copy, nonatomic) NSDictionary *extraData;
@property (nonatomic) BOOL dismissTitleLabel;
@property (nonatomic) BOOL enableInterceptPV;

- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (void)setWebTitle:(id)arg0;
- (id)adID;
- (void)setAdID:(id)arg0;
- (void)setSkanParameters:(id)arg0;
- (void)setPreloadType:(unsigned long long)arg0;
- (id)webTitle;
- (id)skanParameters;
- (void)setLiteWebURL:(id)arg0;
- (void)setWebviewType:(unsigned long long)arg0;
- (void)setDisableCornerRadius:(BOOL)arg0;
- (void)setDisableClose:(BOOL)arg0;
- (void)setNativeSiteConfig:(id)arg0;
- (void)setNativeSitAdInfo:(id)arg0;
- (void)setDismissTitleLabel:(BOOL)arg0;
- (void)setEnableInterceptPV:(BOOL)arg0;
- (id)liteWebURL;
- (unsigned long long)webviewType;
- (BOOL)disableCornerRadius;
- (BOOL)disableClose;
- (id)nativeSiteConfig;
- (id)nativeSitAdInfo;
- (BOOL)dismissTitleLabel;
- (BOOL)enableInterceptPV;
- (id)init;
- (void).cxx_destruct;
- (long long)height;
- (id)initWithDictionary:(id)arg0;
- (id)webURL;
- (void)setWebURL:(id)arg0;
- (id)toDictionary;
- (void)setHeight:(long long)arg0;
- (void)setExtraData:(id)arg0;
- (id)extraData;
- (void)setAppData:(id)arg0;
- (id)appData;
- (unsigned long long)preloadType;

@end
