//
//     Generated by private class-dump
//

@class NSString, UIImageView, UIVisualEffectView, NSURL, NSMutableArray, UIButton;

@interface IESLiveShareCaptureWidget : UIView <UIGestureRecognizerDelegate> {
    BOOL _hasCommonSnapShotNoShare;
    BOOL _enableNewStyle;
    UIImageView *_imageView;
    NSURL *_localVideoPath;
    id /* block */ _shareAction;
    id /* block */ _dismissCallback;
    unsigned long long _style;
    NSMutableArray *_seriesImages;
    UIVisualEffectView *_blurEffectView;
    UIImageView *_playImageView;
    UIButton *_shareBtn;
    struct CGSize { double width; double height; } _streamSize;
}

@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) NSMutableArray *seriesImages;
@property (retain, nonatomic) UIVisualEffectView *blurEffectView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *playImageView;
@property (retain, nonatomic) UIButton *shareBtn;
@property (nonatomic) struct CGSize { double width; double height; } streamSize;
@property (nonatomic) BOOL enableNewStyle;
@property (retain, nonatomic) NSURL *localVideoPath;
@property (copy, nonatomic) id /* block */ shareAction;
@property (copy, nonatomic) id /* block */ dismissCallback;
@property (nonatomic) BOOL hasCommonSnapShotNoShare;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id /* block */)dismissCallback;
- (void)setDismissCallback:(id /* block */)arg0;
- (id)shareBtn;
- (void)setShareBtn:(id)arg0;
- (id /* block */)shareAction;
- (void)setShareAction:(id /* block */)arg0;
- (struct CGSize { double x0; double x1; })streamSize;
- (BOOL)enableNewStyle;
- (void)setEnableNewStyle:(BOOL)arg0;
- (void)panGestureActions:(id)arg0;
- (void)refreshAutoDismissTimer;
- (void)applyCaptureFrom:(id)arg0 target:(id)arg1 completed:(id /* block */)arg2;
- (id)initWithStream:(struct CGSize { double x0; double x1; })arg0 style:(unsigned long long)arg1 noShare:(BOOL)arg2;
- (void)addRightSwipeDissmissGesture;
- (void)setLocalVideoPath:(id)arg0;
- (id)localVideoPath;
- (void)setStreamSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setSeriesImages:(id)arg0;
- (void)setHasCommonSnapShotNoShare:(BOOL)arg0;
- (BOOL)hasCommonSnapShotNoShare;
- (id)seriesImages;
- (void)onBeginShareAction:(id)arg0;
- (unsigned long long)style;
- (void)dismiss;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (id)imageView;
- (void)setImageView:(id)arg0;
- (void)setStyle:(unsigned long long)arg0;
- (void)setupViews;
- (id)blurEffectView;
- (void)setBlurEffectView:(id)arg0;
- (id)playImageView;
- (void)setPlayImageView:(id)arg0;
- (BOOL)addPreviewImage:(id)arg0;

@end
