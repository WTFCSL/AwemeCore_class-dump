//
//     Generated by private class-dump
//

@class AWECollectionButton;
@protocol AWEPlayInteractionPlayletCollectionViewDelegate;

@interface AWEPlayInteractionPlayletCollectionView : UIView {
    long long _state;
    id<AWEPlayInteractionPlayletCollectionViewDelegate> _delegate;
    AWECollectionButton *_collectionButton;
}

@property (nonatomic) long long state;
@property (weak, nonatomic) id<AWEPlayInteractionPlayletCollectionViewDelegate> delegate;
@property (retain, nonatomic) AWECollectionButton *collectionButton;

- (void)setCollectionButton:(id)arg0;
- (id)collectionButton;
- (void)p_setup;
- (void)btnClicked:(id)arg0;
- (id)initWithState:(long long)arg0;
- (void).cxx_destruct;
- (long long)state;
- (void)setState:(long long)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)reset;

@end