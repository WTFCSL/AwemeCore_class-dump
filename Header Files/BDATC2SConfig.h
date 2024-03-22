//
//     Generated by private class-dump
//

@class NSString, NSSet, NSArray;

@interface BDATC2SConfig : NSObject {
    BOOL _enable;
    BOOL _enableURLTrackRetry;
    BOOL _offlineRetryEnable;
    NSArray *_standardMacros;
    NSArray *_nonstandardMacros;
    NSSet *_macroBlackList;
    long long _sendTimes;
    NSString *_customUserAgent;
    NSSet *_redirctionBlockList;
}

@property (class, readonly, copy, nonatomic) NSString *defaultUserAgent;

@property (copy, nonatomic) NSSet *redirctionBlockList;
@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL enableURLTrackRetry;
@property (copy, nonatomic) NSArray *standardMacros;
@property (copy, nonatomic) NSArray *nonstandardMacros;
@property (copy, nonatomic) NSSet *macroBlackList;
@property (nonatomic) BOOL offlineRetryEnable;
@property (nonatomic) long long sendTimes;
@property (readonly, copy, nonatomic) NSString *userAgent;
@property (copy, nonatomic) NSString *customUserAgent;

+ (id)defaultUserAgent;
+ (id)defaultConfig;

- (void)setupConfig:(id)arg0 error:(id *)arg1;
- (void)setEnableURLTrackRetry:(BOOL)arg0;
- (void)setStandardMacros:(id)arg0;
- (void)setNonstandardMacros:(id)arg0;
- (void)setOfflineRetryEnable:(BOOL)arg0;
- (void)setRedirctionBlockList:(id)arg0;
- (void)setSendTimes:(long long)arg0;
- (BOOL)enableURLTrackRetry;
- (id)standardMacros;
- (id)nonstandardMacros;
- (id)macroBlackList;
- (void)setMacroBlackList:(id)arg0;
- (BOOL)offlineRetryEnable;
- (long long)sendTimes;
- (id)redirctionBlockList;
- (void)setCustomUserAgent:(id)arg0;
- (id)customUserAgent;
- (BOOL)enable;
- (id)userAgent;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;
- (void)setEnable:(BOOL)arg0;

@end
