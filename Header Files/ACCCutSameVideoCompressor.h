//
//     Generated by private class-dump
//

@class NSString;

@interface ACCCutSameVideoCompressor : NSObject <ACCCutSameVideoCompressorProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)compressAsset:(id)arg0 withConfig:(id)arg1 progressHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)cancelAllTasks;

@end
