//
//     Generated by private class-dump
//

@class NSString;

@protocol AWEShareReflowManager <AWECrotocol>

+ (id)sharedInstance;

@property (retain, nonatomic) NSString *qrCodeLogType;

- (BOOL)containShareToken:(id)arg0;
- (void)parseActivityToken:(id)arg0 carrierType:(long long)arg1 sourceFrom:(id)arg2 Completion:(id /* block */)arg3;
- (void)getSchemeFromShareToken;
- (void)appLaunchFormSchemaOrNotification;
- (void)handleString:(id)arg0;
- (id)lookForFirstUrlString:(id)arg0;
- (void)checkIMGroupToken;
- (void)transferFromSearchToken:(id)arg0;
- (void)transferFromSearchToken:(id)arg0 withCompleteHandler:(id /* block */)arg1;
- (id)getTemporaryShareTokenHandlerModelWithTokenID:(id)arg0;
- (id)qrCodeLogType;
- (void)setQrCodeLogType:(id)arg0;
- (void)clearPasteboard;

@optional

- (id)extractToken:(id)arg0;

@end