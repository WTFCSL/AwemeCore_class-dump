//
//     Generated by private class-dump
//

@class ACCThreadSafeMutableDictionary, NSString;

@interface AWEUlikeAccountService : HTSService <AWEUlikeAccountService> {
    ACCThreadSafeMutableDictionary *_authInfos;
}

@property (retain, nonatomic) ACCThreadSafeMutableDictionary *authInfos;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)authInfoWithSource:(id)arg0;
- (void)fetchAuthInfoWithSource:(id)arg0 completion:(id /* block */)arg1;
- (id)authInfos;
- (id)cacheKeyWithSource:(id)arg0;
- (void)setAuthInfos:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
