//
//     Generated by private class-dump
//

@class NSString;

@interface BDPIndustrySDKPKGModel : NSObject {
    NSString *_downloadURL;
    NSString *_name;
    NSString *_md5;
    NSString *_pkgPath;
}

@property (copy, nonatomic) NSString *downloadURL;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *md5;
@property (copy, nonatomic) NSString *pkgPath;

- (void)setPkgPath:(id)arg0;
- (id)pkgPath;
- (BOOL)pkgFileExists;
- (void).cxx_destruct;
- (void)setDownloadURL:(id)arg0;
- (id)downloadURL;
- (void)setName:(id)arg0;
- (id)name;
- (id)md5;
- (void)setMd5:(id)arg0;

@end