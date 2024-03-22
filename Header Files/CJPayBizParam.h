//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayBizParam : NSObject {
    NSString *_appName;
    id /* block */ _riskInfoBlock;
}

@property (copy, nonatomic) id /* block */ riskInfoBlock;
@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *configHost;

+ (id)shared;

- (void)setConfigHost:(id)arg0;
- (void)setupTrackerDelegate:(id)arg0;
- (void)setupLanguage:(unsigned long long)arg0;
- (id)configHost;
- (void)setupAppInfoConfig:(id)arg0;
- (void)setupRiskInfoBlock:(id /* block */)arg0;
- (void)setRiskInfoBlock:(id /* block */)arg0;
- (id /* block */)riskInfoBlock;
- (void)cleanCookies;
- (void)setupCookieWith:(id /* block */)arg0;
- (void)setAppName:(id)arg0;
- (id)appName;
- (void).cxx_destruct;

@end
