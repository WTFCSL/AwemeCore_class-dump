//
//     Generated by private class-dump
//

@protocol AWENaviCacheManagerProtocol <NSObject>

- (BOOL)shouldShowPromotionForTab:(id)arg0;
- (void)fetchLokiResponseCompletion:(id /* block */)arg0;
- (void)setLokiResponse:(id)arg0;
- (void)fetchLimitResponseCompletion:(id /* block */)arg0;
- (void)setLimitResponse:(id)arg0;
- (void)fetchSelfAvatarResponseCompletion:(id /* block */)arg0;
- (void)setSelfAvatarResponse:(id)arg0;
- (void)markShowedPromotionForTab:(id)arg0;
- (void)increaceForceLandingCount:(id)arg0;
- (BOOL)shouldForceLandingTab:(id)arg0 limit:(long long)arg1;

@end
