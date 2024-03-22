//
//     Generated by private class-dump
//

@class NSString, BDPMMKVStorage;

@interface BDPMMKVStandaloneCookieJar : NSObject <BDPCookieStorageInterface> {
    BDPMMKVStorage *_cookieStorage;
    BDPMMKVStorage *_cookieCountStorage;
    NSString *_storagePath;
}

@property (copy, nonatomic) NSString *storagePath;
@property (retain, nonatomic) BDPMMKVStorage *cookieStorage;
@property (retain, nonatomic) BDPMMKVStorage *cookieCountStorage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cookieCountStorage;
- (void)cleanSessionCookies;
- (id)convertToCookieDictonary:(id)arg0;
- (void)pruneCookie:(id)arg0;
- (id)convertToCookiePart:(id)arg0;
- (BOOL)isSecureCookie:(id)arg0 ForURL:(id)arg1;
- (BOOL)isExpires:(id)arg0;
- (id)allCookieDomains;
- (void)setCookieCountStorage:(id)arg0;
- (id)storagePath;
- (id)initWithPath:(id)arg0;
- (void).cxx_destruct;
- (void)close;
- (void)setCookieStorage:(id)arg0;
- (id)cookieStorage;
- (int)setCookie:(id)arg0;
- (void)setStoragePath:(id)arg0;
- (id)cookies:(id)arg0;
- (id)allCookies;

@end