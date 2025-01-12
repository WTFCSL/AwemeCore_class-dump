//
//     Generated by private class-dump
//

@class EcHttpTask, NSString, ECUploadItemModel, TTUploadTaskParam, EcClient;

@interface EcUploadItemTask : NSObject {
    EcClient *_client;
    NSString *_taskKey;
    NSString *_uploadURL;
    TTUploadTaskParam *_taskParam;
    id /* block */ _progress;
    id /* block */ _resultBlock;
    ECUploadItemModel *_itemModel;
    EcHttpTask *_task;
}

@property (weak, nonatomic) EcClient *client;
@property (copy, nonatomic) NSString *taskKey;
@property (copy, nonatomic) NSString *uploadURL;
@property (retain, nonatomic) TTUploadTaskParam *taskParam;
@property (copy, nonatomic) id /* block */ progress;
@property (copy, nonatomic) id /* block */ resultBlock;
@property (retain, nonatomic) ECUploadItemModel *itemModel;
@property (retain, nonatomic) EcHttpTask *task;
@property (readonly, copy, nonatomic) NSString *md5;

- (id)itemModel;
- (void)setItemModel:(id)arg0;
- (id)taskKey;
- (void)setTaskKey:(id)arg0;
- (void)setTaskParam:(id)arg0;
- (id)taskParam;
- (void)uploadComplete:(id /* block */)arg0;
- (void)taskCompleteResult:(id)arg0;
- (id)initWithUploadURL:(id)arg0 taskParam:(id)arg1 itemModel:(id)arg2 client:(id)arg3 progress:(id /* block */)arg4 result:(id /* block */)arg5;
- (void).cxx_destruct;
- (void)setResultBlock:(id /* block */)arg0;
- (void)setClient:(id)arg0;
- (void)setUploadURL:(id)arg0;
- (id)client;
- (void)setTask:(id)arg0;
- (void)cancel;
- (id /* block */)progress;
- (id)uploadURL;
- (void)start;
- (id)task;
- (void)setProgress:(id /* block */)arg0;
- (id /* block */)resultBlock;
- (id)md5;

@end
