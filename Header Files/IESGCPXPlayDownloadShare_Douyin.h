//
//     Generated by private class-dump
//

@class NSString, AWEGCPXPlayShareDownloadViewController, IESGCPApi, NSTimer;

@interface IESGCPXPlayDownloadShare_Douyin : NSObject <AWEPublishTaskMessage, IESGCPXPlayDownloadShareService> {
    BOOL _hasClickShare;
    BOOL _hasDownload;
    BOOL _hasPublishMessage;
    AWEGCPXPlayShareDownloadViewController *_loadingView;
    unsigned long long _recordState;
    NSString *_url;
    IESGCPApi *_api;
    NSTimer *_timer;
}

@property (retain, nonatomic) AWEGCPXPlayShareDownloadViewController *loadingView;
@property (nonatomic) BOOL hasClickShare;
@property (nonatomic) BOOL hasDownload;
@property (nonatomic) BOOL hasPublishMessage;
@property (nonatomic) unsigned long long recordState;
@property (copy, nonatomic) NSString *url;
@property (retain, nonatomic) IESGCPApi *api;
@property (retain, nonatomic) NSTimer *timer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)task:(id)arg0 didEndWithResult:(long long)arg1 error:(id)arg2;
- (void)setRecordState:(unsigned long long)arg0;
- (void)registePublishTaskMessage;
- (void)trueShareWithParams:(id)arg0;
- (void)requestAnchorData:(id /* block */)arg0;
- (void)unRegisterPublishTaskMessage;
- (void)setHasClickShare:(BOOL)arg0;
- (void)setHasDownload:(BOOL)arg0;
- (void)openEditComposerPageWithVideoPath:(id)arg0 extraParams:(id)arg1;
- (void)downloadVideoWithURL:(id)arg0 initProgress:(long long)arg1 completion:(id /* block */)arg2;
- (id)createEditorComposerWithFilePath:(id)arg0;
- (id)createPublishComposer:(id)arg0;
- (id)createBizData;
- (void)clickShare;
- (void)acquirePlayRecordUrl:(id)arg0 size:(long long)arg1;
- (void)blockDownloadWithError:(id)arg0;
- (void)acquirePlayRecord:(BOOL)arg0 url:(id)arg1 size:(long long)arg2;
- (BOOL)hasClickShare;
- (BOOL)hasDownload;
- (BOOL)hasPublishMessage;
- (void)setHasPublishMessage:(BOOL)arg0;
- (id)timer;
- (void).cxx_destruct;
- (void)setUrl:(id)arg0;
- (void)setTimer:(id)arg0;
- (void)dealloc;
- (id)url;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;
- (id)api;
- (unsigned long long)recordState;
- (void)clean;
- (void)setApi:(id)arg0;

@end