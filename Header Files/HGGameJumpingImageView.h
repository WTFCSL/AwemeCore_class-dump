//
//     Generated by private class-dump
//

@class HGGameJumpingView, HGGameJumpingModel;

@interface HGGameJumpingImageView : UIImageView {
    HGGameJumpingModel *_model;
    unsigned long long _indexInView;
    HGGameJumpingView *_gameJumpingView;
}

@property (retain, nonatomic) HGGameJumpingModel *model;
@property (nonatomic) unsigned long long indexInView;
@property (weak, nonatomic) HGGameJumpingView *gameJumpingView;

- (id)gameJumpingView;
- (unsigned long long)indexInView;
- (void)setIndexInView:(unsigned long long)arg0;
- (void)setGameJumpingView:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)onTap;

@end