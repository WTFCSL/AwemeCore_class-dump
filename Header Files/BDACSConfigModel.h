//
//     Generated by private class-dump
//

@class BDACSResourceConfig, NSString, BDACSWebReportConfig, BDACSiOSConfig, BDACSPornInspectConfig, NSNumber;

@interface BDACSConfigModel : NSObject {
    NSNumber *_enableProcessor;
    NSNumber *_enableWebReport;
    NSNumber *_enablePornInspect;
    BDACSResourceConfig *_resourceConfig;
    BDACSWebReportConfig *_webReport;
    BDACSPornInspectConfig *_pornInspect;
    BDACSiOSConfig *_iOSConfig;
    unsigned long long _type;
    NSString *_cid;
    NSString *_logExtra;
    NSString *_URLHost;
}

@property (readonly, nonatomic) BDACSResourceConfig *resourceConfig;
@property (readonly, nonatomic) BDACSWebReportConfig *webReport;
@property (readonly, nonatomic) BDACSPornInspectConfig *pornInspect;
@property (readonly, nonatomic) BDACSiOSConfig *iOSConfig;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSString *cid;
@property (readonly, copy, nonatomic) NSString *logExtra;
@property (readonly, copy, nonatomic) NSString *URLHost;

- (id)logExtra;
- (id)resourceConfig;
- (BOOL)shouldEnableInterceptor;
- (id)initWithCid:(id)arg0 logExtra:(id)arg1 URLHost:(id)arg2;
- (id)pornInspect;
- (id)initWithWebViewClientSecuritySettings:(id)arg0 cid:(id)arg1 logExtra:(id)arg2 URLHost:(id)arg3;
- (id)webReport;
- (BOOL)enableProcessor;
- (BOOL)enableWebReport;
- (BOOL)enablePornInspect;
- (void)recordUpload;
- (id)iOSConfig;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)cid;
- (id)URLHost;

@end
