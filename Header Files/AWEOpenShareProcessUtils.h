//
//     Generated by private class-dump
//

@interface AWEOpenShareProcessUtils : NSObject

+ (long long)videoMaxSize;
+ (void)downLoadVideo:(id)arg0 processStype:(id /* block */)arg1 process:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (void)downLoadImageList:(id)arg0 processStype:(id /* block */)arg1 process:(id /* block */)arg2 completion:(id /* block */)arg3;
+ (id)extensionForContentType:(id)arg0;
+ (long long)limitLoadingMaxSize;
+ (id)createLocalVideoPathWithExtension:(id)arg0;
+ (void)getHeaderWithURL:(id)arg0 completion:(id /* block */)arg1;
+ (void)getAlbumImages:(id)arg0 process:(id /* block */)arg1 completion:(id /* block */)arg2;
+ (void)checkAlbumSize:(id)arg0 completion:(id /* block */)arg1;
+ (long long)imageMaxSize;
+ (id)createLocalImagePath;

@end