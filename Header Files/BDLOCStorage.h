//
//     Generated by private class-dump
//

@class NSString, BDLOCMetaData;

@interface BDLOCStorage : NSObject {
    BDLOCMetaData *_metaData;
    NSString *_baseFolderPath;
    NSString *_pkgPath;
    NSString *_bundlePath;
}

@property (copy, nonatomic) NSString *baseFolderPath;
@property (copy, nonatomic) NSString *pkgPath;
@property (copy, nonatomic) NSString *bundlePath;
@property (retain, nonatomic) BDLOCMetaData *metaData;

+ (id)storageWithMetaData:(id)arg0;

- (void)setPkgPath:(id)arg0;
- (id)pkgPath;
- (id)pkgInfoPlistPath;
- (void)setBaseFolderPath:(id)arg0;
- (void)createPkgInfoPlistIfNeed;
- (id)baseFolderPath;
- (void)removeOldPkgsWithMAXCount:(unsigned long long)arg0;
- (void)setBundlePath:(id)arg0;
- (id)metaData;
- (id)bundlePath;
- (void).cxx_destruct;
- (void)setMetaData:(id)arg0;

@end
