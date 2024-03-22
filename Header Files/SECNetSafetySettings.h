//
//     Generated by private class-dump
//

@class NSArray;

@interface SECNetSafetySettings : NSObject {
    BOOL _webContentSafetyEnabled;
    BOOL _webSafetyEnabled;
    BOOL _nativeSafetyEnabled;
    BOOL _nativeProtection;
    BOOL _webPageProtection;
    BOOL _webContentProtection;
    NSArray *_reportableReqHeaders;
    NSArray *_reportableRespHeaders;
    NSArray *_maskReqHeaders;
    NSArray *_maskRespHeaders;
}

@property (copy) NSArray *reportableReqHeaders;
@property (copy) NSArray *reportableRespHeaders;
@property (copy) NSArray *maskReqHeaders;
@property (copy) NSArray *maskRespHeaders;
@property BOOL webContentSafetyEnabled;
@property BOOL webSafetyEnabled;
@property BOOL nativeSafetyEnabled;
@property BOOL nativeProtection;
@property BOOL webPageProtection;
@property BOOL webContentProtection;

+ (id)sharedSettings;

- (id)reportableReqHeaders;
- (id)maskReqHeaders;
- (id)reportableRespHeaders;
- (id)maskRespHeaders;
- (BOOL)nativeProtection;
- (BOOL)nativeSafetyEnabled;
- (void)setReportableReqHeaders:(id)arg0;
- (void)setReportableRespHeaders:(id)arg0;
- (void)setMaskReqHeaders:(id)arg0;
- (void)setMaskRespHeaders:(id)arg0;
- (BOOL)webContentSafetyEnabled;
- (void)setWebContentSafetyEnabled:(BOOL)arg0;
- (BOOL)webSafetyEnabled;
- (void)setWebSafetyEnabled:(BOOL)arg0;
- (void)setNativeSafetyEnabled:(BOOL)arg0;
- (void)setNativeProtection:(BOOL)arg0;
- (BOOL)webPageProtection;
- (void)setWebPageProtection:(BOOL)arg0;
- (BOOL)webContentProtection;
- (void)setWebContentProtection:(BOOL)arg0;
- (void).cxx_destruct;

@end