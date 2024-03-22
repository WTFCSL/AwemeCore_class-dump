//
//     Generated by private class-dump
//

@protocol ACCImageTemplateResourceDownloadProtocol <NSObject>

+ (id)getNeedDownloadedTemplateResourcesFromTemplateInfoModel:(id)arg0 logSubTag:(id)arg1;
+ (id)templateCacheDir;
+ (void)predownloadFixedResourcesWithCallback:(id /* block */)arg0;

- (void)downloadTemplateZipWithMediaID:(id)arg0 callback:(id /* block */)arg1;
- (void)downloadTemplateResources:(id)arg0 unzipFilePath:(id)arg1 progressChangeCompletion:(id /* block */)arg2 onCompletion:(id /* block */)arg3;
- (id)getResourceFromNleCache:(id)arg0;

@end