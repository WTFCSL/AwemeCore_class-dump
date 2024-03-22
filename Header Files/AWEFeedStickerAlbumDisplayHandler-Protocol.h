//
//     Generated by private class-dump
//

@class NSObject;
@protocol AWEFeedAlbumStickerDisplayManagerProtocol;

@protocol AWEFeedStickerAlbumDisplayHandler <AWEFeedStickerHandlerProtocol>

@property (weak, nonatomic) NSObject<AWEFeedAlbumStickerDisplayManagerProtocol> *managerDelegate;
@property (nonatomic) long long index;

- (void)stickerWillAppear;
- (BOOL)isFromSearch;
- (void)setIndex:(long long)arg0;
- (long long)index;
- (void)setManagerDelegate:(id)arg0;
- (id)managerDelegate;

@end