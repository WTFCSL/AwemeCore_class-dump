//
//     Generated by private class-dump
//

@class NSString;

@interface AWEACCGrootStickerNetServiceImpl : NSObject <ACCGrootStickerNetServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)requestCheckGrootRecognitionWith:(id)arg0 creationId:(id)arg1 cameraDirection:(id)arg2 completion:(id /* block */)arg3;
- (void)requestFetchGrootRecognitionListWith:(id)arg0 creationId:(id)arg1 cameraDirection:(id)arg2 completion:(id /* block */)arg3;

@end
