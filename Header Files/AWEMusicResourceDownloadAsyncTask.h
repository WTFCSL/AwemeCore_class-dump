//
//     Generated by private class-dump
//

@class NSString, AWERecordResourceMusicModel;

@interface AWEMusicResourceDownloadAsyncTask : NSObject <AWERecordResourceDownloadTaskProtocol> {
    NSString *_taskIdentifier;
    AWERecordResourceMusicModel *_musicModelConfig;
    id /* block */ _resourceDownloadCompletion;
}

@property (retain, nonatomic) AWERecordResourceMusicModel *musicModelConfig;
@property (copy, nonatomic) id /* block */ resourceDownloadCompletion;
@property (copy, nonatomic) NSString *taskIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)downloadTaskWithResourceModel:(id)arg0 completion:(id /* block */)arg1;

- (void)setResourceDownloadCompletion:(id /* block */)arg0;
- (id /* block */)resourceDownloadCompletion;
- (void)setMusicModelConfig:(id)arg0;
- (void)downloadMusic;
- (void)downloadMusicResourceWithMusicModel:(id)arg0 error:(id)arg1;
- (id)musicModelConfig;
- (unsigned long long)taskType;
- (void).cxx_destruct;
- (id)taskIdentifier;
- (void)setTaskIdentifier:(id)arg0;

@end
