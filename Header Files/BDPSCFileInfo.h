//
//     Generated by private class-dump
//

@class NSString;

@interface BDPSCFileInfo : NSObject {
    BOOL _isInPkg;
    NSString *_appId;
    NSString *_versionType;
    NSString *_path;
    NSString *_pkgPath;
}

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *versionType;
@property (nonatomic) BOOL isInPkg;
@property (copy, nonatomic) NSString *pkgPath;
@property (copy, nonatomic) NSString *path;

- (id)versionType;
- (void)setPkgPath:(id)arg0;
- (BOOL)isInPkg;
- (void)setIsInPkg:(BOOL)arg0;
- (id)pkgPath;
- (void)setVersionType:(id)arg0;
- (void)setPath:(id)arg0;
- (void)setAppId:(id)arg0;
- (void).cxx_destruct;
- (id)path;
- (id)appId;

@end
