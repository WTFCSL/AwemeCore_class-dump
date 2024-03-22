//
//     Generated by private class-dump
//

@class NSString;

@interface BDPOfflinePackage : NSObject {
    BOOL _forceUpdate;
    NSString *_md5;
    NSString *_packageUrl;
    NSString *_packagePath;
    NSString *_packageName;
    NSString *_version;
}

@property (copy, nonatomic) NSString *md5;
@property (copy, nonatomic) NSString *packageUrl;
@property (copy, nonatomic) NSString *packagePath;
@property (copy, nonatomic) NSString *packageName;
@property (copy, nonatomic) NSString *version;
@property (nonatomic) BOOL forceUpdate;

- (id)packagePath;
- (void)setPackageUrl:(id)arg0;
- (void)setPackagePath:(id)arg0;
- (id)packageUrl;
- (void)setVersion:(id)arg0;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg0;
- (BOOL)forceUpdate;
- (id)version;
- (unsigned long long)hash;
- (id)packageName;
- (BOOL)isEqual:(id)arg0;
- (id)md5;
- (void)setMd5:(id)arg0;
- (void)setPackageName:(id)arg0;
- (void)setForceUpdate:(BOOL)arg0;

@end