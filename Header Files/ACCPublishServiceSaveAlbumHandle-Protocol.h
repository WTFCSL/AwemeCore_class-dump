//
//     Generated by private class-dump
//

@class AWEVideoPublishViewModel;
@protocol ACCPublishServiceSaveAlbumDelegate;

@protocol ACCPublishServiceSaveAlbumHandle <NSObject>

@property (readonly, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (weak, nonatomic) id<ACCPublishServiceSaveAlbumDelegate> delegate;

- (id)publishModel;
- (void)cancelWithCallback:(id /* block */)arg0;
- (void)execute;
- (id)delegate;
- (void)cancel;
- (void)setDelegate:(id)arg0;

@end