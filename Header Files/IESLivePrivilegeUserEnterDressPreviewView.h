//
//     Generated by private class-dump
//

@class NSDictionary, IESLiveEffectPlayerView;
@protocol IESLiveDIContext;

@interface IESLivePrivilegeUserEnterDressPreviewView : IESLivePrivilegeDressPreviewBaseView {
    IESLiveEffectPlayerView *_playerView;
    id<IESLiveDIContext> _DIContext;
    NSDictionary *_mixInfo;
    struct CGSize { double width; double height; } _videoSize;
}

@property (retain, nonatomic) IESLiveEffectPlayerView *playerView;
@property (retain, nonatomic) id<IESLiveDIContext> DIContext;
@property (retain, nonatomic) NSDictionary *mixInfo;
@property (nonatomic) struct CGSize { double width; double height; } videoSize;

- (id)mixInfo;
- (void)setMixInfo:(id)arg0;
- (void)setDIContext:(id)arg0;
- (id)DIContext;
- (id)initWithPreviewModel:(id)arg0 DIContext:(id)arg1;
- (void)setupPlayerWithPreviewModel:(id)arg0;
- (void)reportError:(id)arg0 previewModel:(id)arg1;
- (void).cxx_destruct;
- (id)playerView;
- (void)layoutSubviews;
- (void)setPlayerView:(id)arg0;
- (void)startAnimation;
- (struct CGSize { double x0; double x1; })videoSize;
- (void)setVideoSize:(struct CGSize { double x0; double x1; })arg0;

@end