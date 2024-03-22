//
//     Generated by private class-dump
//

@class NSString;

@interface AWEStudioDraftHelperImpl : NSObject <AWEStudioDraftHelperProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)generateAttachTextWithDuetChain:(id)arg0 maxWidth:(double)arg1 font:(id)arg2;
- (void)startWithDraft:(id)arg0 isBackup:(BOOL)arg1 execute:(id /* block */)arg2;
- (void)startWithDraft:(id)arg0 isBackup:(BOOL)arg1 modifyPublishModelBlock:(id /* block */)arg2 execute:(id /* block */)arg3;
- (void)tryMusicAgainWithDraft:(id)arg0 modifyPublishModelBlock:(id /* block */)arg1 execute:(id /* block */)arg2;
- (void)reshootWithInputData:(id)arg0 execute:(id /* block */)arg1;
- (BOOL)enableManageDisk;
- (void)startMediumVideoDraftWithPublishModel:(id)arg0 execute:(id /* block */)arg1;
- (void)startWithDraft:(id)arg0 publishModel:(id)arg1 publishModelError:(id)arg2 execute:(id /* block */)arg3;

@end
