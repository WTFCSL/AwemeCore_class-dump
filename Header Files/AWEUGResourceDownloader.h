//
//     Generated by private class-dump
//

@interface AWEUGResourceDownloader : NSObject

+ (BOOL)unzipFileAtPath:(id)arg0 toDestination:(id)arg1 error:(id *)arg2;
+ (BOOL)moveFileFromPath:(id)arg0 toTargetPath:(id)arg1;
+ (void)downloadWithURLs:(id)arg0 targetPath:(id)arg1 index:(long long)arg2 completion:(id /* block */)arg3;
+ (id)ugResourceTmpRootFolder;
+ (void)downloadLottieWithURLs:(id)arg0 zipFileMD5:(id)arg1 zipTargetPath:(id)arg2 unzipDirectory:(id)arg3 completion:(id /* block */)arg4;
+ (void)downloadPNGWithURLs:(id)arg0 targetPath:(id)arg1 completion:(id /* block */)arg2;
+ (id)ugResourceRootFolder;

@end