//
//     Generated by private class-dump
//

@protocol AWECloudAlbumPopupVCProtocol;

@protocol AWECloudAlbumPopupContentViewProtocol <NSObject>

@property (weak, nonatomic) id<AWECloudAlbumPopupVCProtocol> delegate;
@property (nonatomic) BOOL needPanGesture;

- (BOOL)needPanGesture;
- (void)setNeedPanGesture:(BOOL)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (double)contentViewHeight;

@optional

- (void)cancleAction;

@end
