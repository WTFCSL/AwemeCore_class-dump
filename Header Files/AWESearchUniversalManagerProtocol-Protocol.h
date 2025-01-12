//
//     Generated by private class-dump
//

@class UIView;
@protocol AWEPublishProgressViewProtocol;

@protocol AWESearchUniversalManagerProtocol <NSObject>

+ (id)sharedInstance;

@property (retain, nonatomic) UIView<AWEPublishProgressViewProtocol> *progressView;

- (void)setupUploadProgressViewDisplayType:(long long)arg0;
- (void)setPublishProgressViewHiden:(BOOL)arg0 WithAnimation:(BOOL)arg1;
- (void)recordNearbyVCAppearStatus:(BOOL)arg0;
- (BOOL)nearbyVCAppearStatus;
- (void)recordNearbyFullVCAppearStatus:(BOOL)arg0;
- (BOOL)nearbyFullVCAppearStatus;
- (void)recordConcernFullVCAppearStatus:(BOOL)arg0;
- (BOOL)concernFullVCAppearStatus;
- (id)progressView;
- (void)setProgressView:(id)arg0;

@end
