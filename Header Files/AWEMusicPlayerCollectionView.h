//
//     Generated by private class-dump
//

@class LOTAnimationView, UIButton;

@interface AWEMusicPlayerCollectionView : UIView {
    LOTAnimationView *_collectAnimationView;
    UIButton *_collectionButton;
}

@property (retain, nonatomic) LOTAnimationView *collectAnimationView;
@property (retain, nonatomic) UIButton *collectionButton;

- (void)setCollectionButton:(id)arg0;
- (id)collectionButton;
- (void)setCollectAnimationView:(id)arg0;
- (id)collectAnimationView;
- (void)animeCollectWithType:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (void)setAnimationWithTargetType:(unsigned long long)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setupView;

@end