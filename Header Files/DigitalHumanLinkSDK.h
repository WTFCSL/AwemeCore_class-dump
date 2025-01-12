//
//     Generated by private class-dump
//

@class BDVideoUploaderClient, NSString, CreateDigitalHumanParams;
@protocol DHBridge;

@interface DigitalHumanLinkSDK : NSObject <BDVideoUploadClientDelegate> {
    BOOL _hasInit;
    id<DHBridge> _mDHBridge;
    BDVideoUploaderClient *_videoUploadClient;
    CreateDigitalHumanParams *_createAvatarParams;
    id /* block */ _completeHandler;
    id /* block */ _failedHandler;
}

@property (nonatomic) BOOL hasInit;
@property (retain, nonatomic) BDVideoUploaderClient *videoUploadClient;
@property (retain, nonatomic) CreateDigitalHumanParams *createAvatarParams;
@property (copy, nonatomic) id /* block */ completeHandler;
@property (copy, nonatomic) id /* block */ failedHandler;
@property (weak, nonatomic) id<DHBridge> mDHBridge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)videoUpload:(id)arg0 didFinish:(id)arg1 error:(id)arg2;
- (void)videoUpload:(id)arg0 progressDidUpdate:(long long)arg1;
- (void)videoUploadDiskResumeFailed:(id)arg0;
- (void)videoUpload:(id)arg0 didFinish:(id)arg1 failNum:(long long)arg2;
- (void)videoUpload:(id)arg0 fileIndex:(long long)arg1 videoInfo:(id)arg2 error:(id)arg3 log:(id)arg4;
- (void)setMDHBridge:(id)arg0;
- (void)refreshWSLoginAddr;
- (void)setHasInit:(BOOL)arg0;
- (void)setCreateAvatarParams:(id)arg0;
- (void)setCompleteHandler:(id /* block */)arg0;
- (void)setFailedHandler:(id /* block */)arg0;
- (void)TTNETuploadWithID:(id)arg0 withFileUrl:(id)arg1 withChunkIndex:(int)arg2 withChunkTotalSize:(int)arg3 withProgressHandler:(id /* block */)arg4 withSuccessHandler:(id /* block */)arg5 withFailedHandler:(id /* block */)arg6;
- (void)ZCUploadFinishWithVid:(id)arg0;
- (id /* block */)failedHandler;
- (id)createAvatarParams;
- (id /* block */)completeHandler;
- (id)dictToAvatarInfo:(id)arg0;
- (id)getDigitalHumanWithUid:(id)arg0 withCid:(id)arg1;
- (BOOL)hasInit;
- (void)resetInit;
- (void)createDigitalHumanWithParams:(id)arg0 withProgressHandler:(id /* block */)arg1 withSuccessHandler:(id /* block */)arg2 withFailedHandler:(id /* block */)arg3;
- (void)updateProgress:(long long)arg0 progressDidUpdate:(long long)arg1 identifier:(id)arg2;
- (void)uploadVideoLogInfo:(id)arg0;
- (void)updateVideoEventLog:(id)arg0;
- (void)getDigitalHumanInfoWithID:(id)arg0 withSuccessHandler:(id /* block */)arg1 withFailedHandler:(id /* block */)arg2;
- (void)getMultiDigitalHumanInfosWithIDs:(id)arg0 withSuccessHandler:(id /* block */)arg1 withFailedHandler:(id /* block */)arg2;
- (id)getDigitalHumanWithUid:(id)arg0;
- (id)mDHBridge;
- (id)videoUploadClient;
- (void)setVideoUploadClient:(id)arg0;
- (void).cxx_destruct;
- (void)initWithBridge:(id)arg0;

@end
