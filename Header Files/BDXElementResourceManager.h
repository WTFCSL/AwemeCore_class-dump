//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;
@protocol BDXElementResourceManagerDelegate;

@interface BDXElementResourceManager : NSObject <SSZipArchiveDelegate> {
    id<BDXElementResourceManagerDelegate> _resourceDelegate;
    id /* block */ _localizeStringBlock;
    NSMutableDictionary *_fetchingResourceCallbacks;
}

@property (retain, nonatomic) NSMutableDictionary *fetchingResourceCallbacks;
@property (weak, nonatomic) id<BDXElementResourceManagerDelegate> resourceDelegate;
@property (copy, nonatomic) id /* block */ localizeStringBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)unzipCachePathForURL:(id)arg0;
+ (id)zipTempCachePathForURL:(id)arg0;
+ (void)unzipFile:(id)arg0 toPath:(id)arg1 completionHandler:(id /* block */)arg2;
+ (id)lynxViewFrom:(id)arg0;
+ (id)pickOutLynxViewFrom:(id)arg0;
+ (id)genContext:(id)arg0 withLynxView:(id)arg1;
+ (id)allocWithZone:(struct _NSZone { } *)arg0;
+ (id)sharedInstance;

- (BOOL)zipArchiveShouldUnzipFileAtIndex:(long long)arg0 totalFiles:(long long)arg1 archivePath:(id)arg2 fileInfo:(struct unz_file_info_s { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned short x8; unsigned short x9; unsigned short x10; unsigned short x11; unsigned short x12; unsigned int x13; unsigned long long x14; })arg3;
- (id)resourceDelegate;
- (void)setResourceDelegate:(id)arg0;
- (void)downloadZipFileWithURL:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)setLocalizeStringBlock:(id /* block */)arg0;
- (id)downloadDestinationPath;
- (void)fetchFileWithURL:(id)arg0 baseURL:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (id /* block */)localizeStringBlock;
- (void)resourceZipFileWithURL:(id)arg0 baseURL:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)setFetchingResourceCallbacks:(id)arg0;
- (id)getRemoteURLWithRelativeURL:(id)arg0 baseURL:(id)arg1 error:(id *)arg2;
- (id)urlStringWithURL:(id)arg0;
- (id)fetchingResourceCallbacks;
- (void)resourceDataWithURL:(id)arg0 baseURL:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)fetchLocalFileWithURL:(id)arg0 baseURL:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
- (void).cxx_destruct;

@end
