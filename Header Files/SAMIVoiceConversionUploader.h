//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSDictionary, AWEResourceUploadParametersResponseModel, NSMutableArray;
@protocol SAMIVoiceConversionUploaderDelegate;

@interface SAMIVoiceConversionUploader : NSObject {
    id<SAMIVoiceConversionUploaderDelegate> _delegate;
    AWEResourceUploadParametersResponseModel *_uploadParameters;
    NSDictionary *_authParams;
    NSMutableArray *_taskArray;
    NSMutableDictionary *_uploadDic;
}

@property (retain, nonatomic) NSMutableArray *taskArray;
@property (retain, nonatomic) NSMutableDictionary *uploadDic;
@property (weak, nonatomic) id<SAMIVoiceConversionUploaderDelegate> delegate;
@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParameters;
@property (retain, nonatomic) NSDictionary *authParams;

- (id)taskArray;
- (void)setTaskArray:(id)arg0;
- (void)setUploadParameters:(id)arg0;
- (id)uploadParameters;
- (id)logChain;
- (void)postCompleteTasks:(id)arg0 success:(BOOL)arg1 error:(id)arg2 taskID:(id)arg3;
- (void)cancelSubTask:(id)arg0;
- (void)uploadTasks:(id)arg0 taskID:(id)arg1;
- (id)createAudioFileUploaderUsePath:(id)arg0;
- (void)addItem:(id)arg0 uploader:(id)arg1;
- (id)uploadDic;
- (void)setUploadDic:(id)arg0;
- (void)removeItem:(id)arg0;
- (void)cancelTask:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setAuthParams:(id)arg0;
- (id)delegate;
- (id)authParams;
- (void)setDelegate:(id)arg0;
- (void)cancelAllTasks;

@end