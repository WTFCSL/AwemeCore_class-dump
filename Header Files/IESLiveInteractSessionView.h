//
//     Generated by private class-dump
//

@class UIView;

@interface IESLiveInteractSessionView : NSObject {
    BOOL _isHost;
    UIView *_rtcView;
    UIView *_videoView;
    UIView *_optionView;
}

@property (retain, nonatomic) UIView *rtcView;
@property (retain, nonatomic) UIView *videoView;
@property (retain, nonatomic) UIView *optionView;
@property (nonatomic) BOOL isHost;

- (void)setIsHost:(BOOL)arg0;
- (void)setRtcView:(id)arg0;
- (id)rtcView;
- (void).cxx_destruct;
- (void)setVideoView:(id)arg0;
- (id)videoView;
- (BOOL)isHost;
- (void)setOptionView:(id)arg0;
- (id)optionView;

@end
