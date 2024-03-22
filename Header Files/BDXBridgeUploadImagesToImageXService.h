//
//     Generated by private class-dump
//

@class NSArray, NSMutableDictionary, NSString, BDImageXUploaderClient;

@interface BDXBridgeUploadImagesToImageXService : BDXBridgeUploadToVODBaseService <BDImageXUploadClientDelegate> {
    BDImageXUploaderClient *_uploaderClient;
    NSMutableDictionary *_infos;
    NSArray *_filePaths;
}

@property (retain, nonatomic) NSMutableDictionary *infos;
@property (copy, nonatomic) NSArray *filePaths;
@property (retain, nonatomic) BDImageXUploaderClient *uploaderClient;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)imageXUpload:(id)arg0 fileIndex:(long long)arg1 singleImage:(id)arg2 error:(id)arg3;
- (void)imageXUpload:(id)arg0 fileIndex:(long long)arg1 progressDidUpdate:(long long)arg2;
- (void)imageXUploadDidFinish:(id)arg0;
- (long long)imageXUploadGetNetState:(id)arg0;
- (void)imageXUpload:(id)arg0 onLogInfo:(id)arg1;
- (id)initWithParamModel:(id)arg0;
- (id)uploaderClient;
- (void)setUploaderClient:(id)arg0;
- (void).cxx_destruct;
- (id)infos;
- (id)filePaths;
- (void)setInfos:(id)arg0;
- (void)setFilePaths:(id)arg0;

@end