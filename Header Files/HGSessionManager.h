//
//     Generated by private class-dump
//

@interface HGSessionManager : NSObject

+ (id)sharedManager;

- (id)getSession:(id)arg0;
- (void)updateSession:(id)arg0 sandbox:(id)arg1;
- (void)updateAnonymousID:(id)arg0;
- (id)getAnonymousID;
- (void)updateSessionExpirationDate:(id)arg0 sandbox:(id)arg1;
- (id)getSessionExpirationDate:(id)arg0;

@end
