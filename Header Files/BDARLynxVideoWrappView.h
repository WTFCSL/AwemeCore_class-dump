//
//     Generated by private class-dump
//

@class BDARVPlayer;
@protocol BDARLynxContext;

@interface BDARLynxVideoWrappView : UIView {
    BDARVPlayer *_player;
    id<BDARLynxContext> _lynxContext;
}

@property (weak, nonatomic) BDARVPlayer *player;
@property (weak, nonatomic) id<BDARLynxContext> lynxContext;

- (void)setLynxContext:(id)arg0;
- (id)lynxContext;
- (void).cxx_destruct;
- (void)setPlayer:(id)arg0;
- (id)player;

@end
