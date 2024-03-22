//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSDictionary, WKWebView, NSURLRequest;

@protocol BDWebURLProtocolTask <NSObject>

@property (readonly, nonatomic) NSURLRequest *bdw_request;
@property (nonatomic) BOOL bdw_shouldUseNetReuse;
@property (retain, nonatomic) NSDictionary *bdw_additionalInfo;
@property (retain, nonatomic) NSMutableDictionary *bdw_falconProcessInfoRecord;
@property (retain, nonatomic) NSDictionary *bdw_ttnetResponseTimingInfoRecord;
@property (weak, nonatomic) WKWebView *bdw_webView;
@property (nonatomic) BOOL willRecordForMainFrameModel;
@property (nonatomic) BOOL taskFinishWithTTNet;
@property (nonatomic) BOOL taskFinishWithLocalData;
@property (nonatomic) BOOL taskFromHookAjax;
@property (nonatomic) BOOL useTTNetCommonParams;
@property (nonatomic) BOOL ttnetEnableCustomizedCookie;
@property (nonatomic) int taskHttpCachePolicy;

- (id)bdw_falconProcessInfoRecord;
- (void)setBdw_falconProcessInfoRecord:(id)arg0;
- (BOOL)willRecordForMainFrameModel;
- (id)bdw_request;
- (id)bdw_webView;
- (void)setBdw_shouldUseNetReuse:(BOOL)arg0;
- (void)setUseTTNetCommonParams:(BOOL)arg0;
- (void)setTaskFinishWithLocalData:(BOOL)arg0;
- (void)setTaskHttpCachePolicy:(int)arg0;
- (void)setBdw_webView:(id)arg0;
- (void)setWillRecordForMainFrameModel:(BOOL)arg0;
- (void)setTaskFinishWithTTNet:(BOOL)arg0;
- (void)setTtnetEnableCustomizedCookie:(BOOL)arg0;
- (id)bdw_additionalInfo;
- (void)setBdw_additionalInfo:(id)arg0;
- (BOOL)bdw_shouldUseNetReuse;
- (id)bdw_ttnetResponseTimingInfoRecord;
- (void)setBdw_ttnetResponseTimingInfoRecord:(id)arg0;
- (BOOL)taskFinishWithTTNet;
- (BOOL)taskFinishWithLocalData;
- (BOOL)useTTNetCommonParams;
- (BOOL)ttnetEnableCustomizedCookie;
- (int)taskHttpCachePolicy;
- (void)setTaskFromHookAjax:(BOOL)arg0;
- (BOOL)taskFromHookAjax;

@end