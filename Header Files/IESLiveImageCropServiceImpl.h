//
//     Generated by private class-dump
//

@class IESLiveImageCropHandler, NSString;

@interface IESLiveImageCropServiceImpl : NSObject <IESLivePrivilegeGlobalModuleImageCropService> {
    IESLiveImageCropHandler *_imageCropHandler;
}

@property (retain, nonatomic) IESLiveImageCropHandler *imageCropHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openImageCarpPageWithCompletionBlock:(id /* block */)arg0 requestPage:(id)arg1 privacyCert:(id)arg2 withPrivacyCert:(id)arg3 withContext:(id)arg4;
- (void)openAnchorImageCarpPageWithCompletionBlock:(id /* block */)arg0 requestPage:(id)arg1 coverStatus:(id)arg2 privacyCert:(id)arg3 withPrivacyCert:(id)arg4 withContext:(id)arg5;
- (void)openCameraWithPrivacyCert:(id)arg0 withPrivacyCert:(id)arg1 requestPage:(id)arg2 completionBlock:(id /* block */)arg3;
- (void)openImageCarpPgaeFromEmojiTemplateWithPrivacyCert:(id)arg0 withPrivacyCert:(id)arg1 requestPage:(id)arg2 completionBlock:(id /* block */)arg3;
- (id)imageCropHandler;
- (void)setImageCropHandler:(id)arg0;
- (void).cxx_destruct;

@end
