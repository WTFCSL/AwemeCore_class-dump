//
//     Generated by private class-dump
//

@class UIButton, NSDictionary, AWEVideoModel, AWEURLModel;

@protocol AWESimpleViewControllerProtocol <NSObject>

@property (nonatomic) BOOL repeated;
@property (retain, nonatomic) AWEVideoModel *video;
@property (retain, nonatomic) AWEURLModel *playURL;
@property (retain, nonatomic) AWEURLModel *coverURL;
@property (copy, nonatomic) id /* block */ loopHandler;
@property (copy, nonatomic) NSDictionary *eventParams;
@property (nonatomic) double initPlayTime;
@property (readonly, nonatomic) UIButton *closeButton;

- (void)setEventParams:(id)arg0;
- (void)setLoopHandler:(id /* block */)arg0;
- (id /* block */)loopHandler;
- (id)initWithCoverImage:(id)arg0;
- (void)loadImageUrl:(id)arg0;
- (void)showPlayButton;
- (id)initWithCoverImageURL:(id)arg0;
- (double)initPlayTime;
- (void)setInitPlayTime:(double)arg0;
- (void)dismiss;
- (void)setVideo:(id)arg0;
- (BOOL)isPlaying;
- (id)video;
- (BOOL)play;
- (BOOL)pause;
- (id)closeButton;
- (BOOL)repeated;
- (void)setRepeated:(BOOL)arg0;
- (id)playURL;
- (void)setPlayURL:(id)arg0;
- (id)eventParams;
- (id)coverURL;
- (void)setCoverURL:(id)arg0;

@end