//
//     Generated by private class-dump
//

@protocol IESLiveCastProxyService <NSObject>

- (BOOL)enableCastProxy;
- (BOOL)enableVerifyCastProxyInNormalRoom;
- (id)fetchProxyURLWithOriginalURL:(id)arg0 token:(id)arg1 deviceIP:(id)arg2;
- (id)fetchProxyURLWithOriginalURLs:(id)arg0 token:(id)arg1 deviceIP:(id)arg2;
- (void)castDidFinish;

@end