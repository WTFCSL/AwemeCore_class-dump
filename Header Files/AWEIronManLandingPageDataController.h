//
//     Generated by private class-dump
//

@interface AWEIronManLandingPageDataController : NSObject {
    unsigned long long _enterFrom;
    unsigned long long _uiVersion;
}

@property (nonatomic) unsigned long long enterFrom;
@property (nonatomic) unsigned long long uiVersion;

+ (void)clearStorage;
+ (id)getStorageKeyWithPlatKey:(id)arg0;
+ (id)loadDataToMemory;
+ (void)requestPageCallback;

- (void)setEnterFrom:(unsigned long long)arg0;
- (unsigned long long)enterFrom;
- (void)getWithURLString:(id)arg0 params:(id)arg1 modelClass:(Class)arg2 completion:(id /* block */)arg3;
- (void)setUiVersion:(unsigned long long)arg0;
- (unsigned long long)uiVersion;
- (void)trackRequestEventWithParams:(id)arg0 URL:(id)arg1 error:(id)arg2;
- (void)saveDataToDiskWithDict:(id)arg0;
- (id)init;

@end
