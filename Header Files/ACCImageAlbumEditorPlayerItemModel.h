//
//     Generated by private class-dump
//

@class ACCImageAlbumPlayerItemContainerView;

@interface ACCImageAlbumEditorPlayerItemModel : NSObject {
    BOOL _needUpdate;
    ACCImageAlbumPlayerItemContainerView *_playerItemView;
}

@property (readonly, nonatomic) ACCImageAlbumPlayerItemContainerView *playerItemView;
@property (nonatomic) BOOL needUpdate;

- (BOOL)needUpdate;
- (void)setNeedUpdate:(BOOL)arg0;
- (id)playerItemView;
- (void).cxx_destruct;
- (id)initWithContainerSize:(struct CGSize { double x0; double x1; })arg0;

@end