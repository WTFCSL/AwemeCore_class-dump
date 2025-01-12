//
//     Generated by private class-dump
//

@class NSString;

@interface BDPSessionService : NSObject <BDPSessionService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (id)getSession:(id)arg0;
- (void)updateSession:(id)arg0 sandbox:(id)arg1;
- (void)updateAnonymousID:(id)arg0;
- (id)getAnonymousID;
- (void)updateSessionExpirationDate:(id)arg0 sandbox:(id)arg1;
- (id)getSessionExpirationDate:(id)arg0;
- (id)initService;
- (id)getOpenID:(id)arg0;
- (void)updateOpenID:(id)arg0 sandbox:(id)arg1;
- (void)removeOpenIDForSandbox:(id)arg0;

@end
