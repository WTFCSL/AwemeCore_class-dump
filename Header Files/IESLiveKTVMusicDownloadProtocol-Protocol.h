//
//     Generated by private class-dump
//

@class NSProgress, NSArray;

@protocol IESLiveKTVMusicDownloadProtocol <NSObject>

@property (nonatomic) long long operationType;
@property (readonly) NSProgress *progress;
@property (readonly, copy) NSArray *errors;

- (long long)operationType;
- (void)resume;
- (id)progress;
- (id)errors;
- (void)setOperationType:(long long)arg0;

@end
