//
//     Generated by private class-dump
//

@class NSArray, BDPPackageInfo;

@interface BDPODRXDepAnalyzer : NSObject {
    NSArray *_pkgInfos;
    BDPPackageInfo *_mainPkgInfo;
    NSArray *_pluginInfos;
}

@property (copy, nonatomic) NSArray *pkgInfos;
@property (retain, nonatomic) BDPPackageInfo *mainPkgInfo;
@property (readonly, copy, nonatomic) NSArray *pluginInfos;

+ (id)subpackageTypeForPagePath:(id)arg0 withPkgInfos:(id)arg1 pluginInfos:(id)arg2;
+ (id)addPkgPrefixIfNeededForPath:(id)arg0 withPkgInfo:(id)arg1;
+ (id)dependedPkgsForPagePath:(id)arg0 withPkgInfos:(id)arg1 pluginInfos:(id)arg2;
+ (id)matchedPkgForPagePath:(id)arg0 withPkgInfos:(id)arg1;
+ (id)dependedPkgsForPagePath:(id)arg0 withPkgInfos:(id)arg1;
+ (id)subpackageTypeForPagePath:(id)arg0 withPkgInfos:(id)arg1;

- (void)setMainPkgInfo:(id)arg0;
- (id)initWithPackageInfos:(id)arg0 pluginInfos:(id)arg1;
- (id)dependedPkgsForPath:(id)arg0;
- (id)allPkgs;
- (id)mainPkgInfo;
- (id)pluginInfos;
- (id)pkgInfos;
- (id)matchedPkgForPath:(id)arg0;
- (void)setPkgInfos:(id)arg0;
- (id)initWithPackageInfos:(id)arg0;
- (void).cxx_destruct;

@end
