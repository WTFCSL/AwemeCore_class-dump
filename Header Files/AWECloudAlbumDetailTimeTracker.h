//
//     Generated by private class-dump
//

@class AWECloudAlbumCostTimer, NSNumber;

@interface AWECloudAlbumDetailTimeTracker : NSObject {
    NSNumber *_albumId;
    AWECloudAlbumCostTimer *_timer;
}

@property (retain, nonatomic) AWECloudAlbumCostTimer *timer;
@property (retain, nonatomic) NSNumber *albumId;

- (void)setAlbumId:(id)arg0;
- (id)albumId;
- (void)trackIfNeeded;
- (id)timer;
- (void).cxx_destruct;
- (void)setTimer:(id)arg0;
- (void)start;

@end
