//
//     Generated by private class-dump
//

@class NSString;
@protocol ACCFileUploadServiceProtocol;

@interface ACCEditFrameUploadServiceImpl : NSObject <ACCEditFrameUploadServiceProtocol> {
    id<ACCFileUploadServiceProtocol> _uploadService;
}

@property (retain, nonatomic) id<ACCFileUploadServiceProtocol> uploadService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enablePreupload;
+ (id)errorOfUploadImage;

- (void)uploadFramesWithModel:(id)arg0 compeletion:(id /* block */)arg1;
- (void).cxx_destruct;
- (id)uploadService;
- (void)setUploadService:(id)arg0;

@end
