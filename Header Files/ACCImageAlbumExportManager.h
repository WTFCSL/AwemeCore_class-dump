//
//     Generated by private class-dump
//

@class NSOperationQueue, ACCImageAlbumEditor, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface ACCImageAlbumExportManager : NSOperation {
    ACCImageAlbumEditor *_imageEditor;
    NSObject<OS_dispatch_semaphore> *_exportingLock;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_exportQueue;
}

@property (retain, nonatomic) ACCImageAlbumEditor *imageEditor;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *exportingLock;
@property (retain, nonatomic) NSOperationQueue *operationQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *exportQueue;

+ (id)sharedManager;

- (void)p_setup;
- (void)exportImagesWithImageItems:(id)arg0 containerSize:(struct CGSize { double x0; double x1; })arg1 progress:(id /* block */)arg2 onSucceed:(id /* block */)arg3 onFaild:(id /* block */)arg4;
- (void)setExportQueue:(id)arg0;
- (id)exportQueue;
- (void)setImageEditor:(id)arg0;
- (id)imageEditor;
- (void)releaseImageEditorIfEnable;
- (void)exportImagesWithImageItems:(id)arg0 containerSize:(struct CGSize { double x0; double x1; })arg1 useUniqueId:(BOOL)arg2 progress:(id /* block */)arg3 onSucceed:(id /* block */)arg4 onFaild:(id /* block */)arg5;
- (id)exportingLock;
- (void)setExportingLock:(id)arg0;
- (id)init;
- (void)setOperationQueue:(id)arg0;
- (void).cxx_destruct;
- (id)operationQueue;

@end
