//
//     Generated by private class-dump
//

@class NSString;

@interface AWENetworkProviderLayer.CodeGenV3HolmesDebugItemNetworkProvider : AWEDataLayerRootModelPostMethodNetworkProvider {
    void /* unknown type, empty encoding */ gid;
    void /* unknown type, empty encoding */ uid;
    void /* unknown type, empty encoding */ contentFieldType;
    void /* unknown type, empty encoding */ username;
}

@property (nonatomic) void /* unknown type, empty encoding */ gid;
@property (nonatomic) void /* unknown type, empty encoding */ uid;
@property (nonatomic) void /* unknown type, empty encoding */ contentFieldType;
@property (nonatomic, copy) NSString *username;

+ (id)businessURI;

- (id)networkDomain;
- (id)networkURLPath;
- (id)networkParams;
- (unsigned long long)contentFieldType;
- (void)setContentFieldType:(unsigned long long)arg0;
- (void)setGid:(long long)arg0;
- (void)setUid:(long long)arg0;
- (long long)gid;
- (long long)uid;
- (id)username;
- (id)init;
- (void).cxx_destruct;
- (void)setUsername:(id)arg0;
- (Class)modelClass;

@end
