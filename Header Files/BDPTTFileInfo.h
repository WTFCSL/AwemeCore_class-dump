//
//     Generated by private class-dump
//

@class NSString;

@interface BDPTTFileInfo : NSObject {
    BOOL _isInPkg;
    NSString *_appId;
    NSString *_versionMark;
    NSString *_path;
    NSString *_pkgPath;
    NSString *_pkgName;
}

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *versionMark;
@property (nonatomic) BOOL isInPkg;
@property (copy, nonatomic) NSString *pkgPath;
@property (copy, nonatomic) NSString *path;

- (void)setPkgPath:(id)arg0;
- (id)versionMark;
- (void)setVersionMark:(id)arg0;
- (BOOL)isInPkg;
- (void)setIsInPkg:(BOOL)arg0;
- (id)pkgPath;
- (void)setPath:(id)arg0;
- (void)setAppId:(id)arg0;
- (void).cxx_destruct;
- (id)path;
- (id)appId;

@end