//
//     Generated by private class-dump
//

@class BDPVideoWaterMarkView, BDPTiledImageView, UILabel, UIView;

@interface BDPVideoPlayerDisplayView : UIView {
    BOOL _finishDarkWaterMark;
    UIView *_playerView;
    UILabel *_signView;
    BDPVideoWaterMarkView *_waterMarkView;
    BDPTiledImageView *_darkWaterMarkView;
    unsigned long long _signPosition;
}

@property (retain, nonatomic) UILabel *signView;
@property (retain, nonatomic) BDPVideoWaterMarkView *waterMarkView;
@property (retain, nonatomic) BDPTiledImageView *darkWaterMarkView;
@property (nonatomic) unsigned long long signPosition;
@property (nonatomic) BOOL finishDarkWaterMark;
@property (retain, nonatomic) UIView *playerView;

- (void)updateMarkWithEnable:(BOOL)arg0 text:(id)arg1 color:(id)arg2;
- (void)updateSignWithSignature:(id)arg0;
- (void)updateDarkMarkWithUniqueID:(id)arg0 enable:(BOOL)arg1;
- (id)darkWaterMarkView;
- (id)waterMarkView;
- (id)signView;
- (unsigned long long)signPosition;
- (void)setWaterMarkView:(id)arg0;
- (void)setSignView:(id)arg0;
- (void)setDarkWaterMarkView:(id)arg0;
- (void)setSignPosition:(unsigned long long)arg0;
- (BOOL)finishDarkWaterMark;
- (void)setFinishDarkWaterMark:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setup;
- (id)playerView;
- (void)layoutSubviews;
- (void)setPlayerView:(id)arg0;

@end