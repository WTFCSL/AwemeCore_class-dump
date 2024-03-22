//
//     Generated by private class-dump
//

@class IESECVideoPlayerView, NSString, IESECReviewsDetailPlayerManager, UICollectionView, UIImageView, UIView;

@interface IESECReviewsDetailCarouselCell : UICollectionViewCell <IESECReviewsDetailPlayerDelegate> {
    UIImageView *_imageView;
    UIView *_playerContainerView;
    UIImageView *_playControlImageView;
    IESECVideoPlayerView *_player;
    UICollectionView *_collectionView;
    NSString *_imageURL;
    IESECReviewsDetailPlayerManager *_playerManager;
}

@property (weak, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) NSString *imageURL;
@property (retain, nonatomic) IESECReviewsDetailPlayerManager *playerManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)playerManager;
- (void)setPlayerManager:(id)arg0;
- (void)playWithVideoModel:(id)arg0;
- (void)playerControlDidClick:(id)arg0;
- (void)updateContainerToVisible:(unsigned long long)arg0;
- (long long)outerIndexForView:(id)arg0;
- (void)playerIsReadyToPlay:(id)arg0;
- (void)player:(id)arg0 didChangePlaybackState:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)collectionView;
- (void)setImageURL:(id)arg0;
- (void)setCollectionView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)imageURL;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setupSubviews;

@end
