//
//     Generated by private class-dump
//

@class EcAlbum, EcTaskStatus, EcTaskProgress;

@protocol AWECloudAlbumDetailDataServiceProtocol <NSObject>

@property (readonly, nonatomic) EcAlbum *album;
@property (readonly, nonatomic) EcTaskStatus *status;
@property (readonly, nonatomic) EcTaskProgress *progress;

- (void)addAlbumSubscriber:(id)arg0;
- (void)addTaskSubscriber:(id)arg0;
- (BOOL)uploadTaskExists;
- (id)album;
- (id)status;
- (id)progress;

@end