//
//     Generated by private class-dump
//

@class NSString;

@interface AWEStudioRecorderHelperImpl : NSObject <AWEStudioRecorderHelperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)createNewRecorderAfterFinishingOldCreation:(id)arg0 oldPublishModel:(id)arg1 preCompletion:(id /* block */)arg2;
- (void)p_copyMusicFromPublishModel:(id)arg0 toPublishModel:(id)arg1;
- (void)p_modifyPublishModel:(id)arg0 oldPublishModel:(id)arg1;
- (void)p_copyPropsFromPublishModel:(id)arg0 toInputData:(id)arg1 completion:(id /* block */)arg2;

@end