//
//     Generated by private class-dump
//

@class UIImageView, NSString, NSTimer, BDARVSourceModel, BDARVADModel, UILabel, UIButton;
@protocol BDARVBannerDelegate;

@interface BDARVBanner : UIView {
    BOOL _hasSendShow;
    BOOL _hasSendShowOver;
    id<BDARVBannerDelegate> _delegate;
    unsigned long long _loadState;
    BDARVSourceModel *_sourceModel;
    UIButton *_touchControl;
    BDARVADModel *_adModel;
    UIButton *_closeButton;
    UILabel *_cornerLabel;
    double _maxHeight;
    double _minHeight;
    UIImageView *_contentImageView;
    UIImageView *_cornerImageView;
    NSString *_tagString;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _layoutFrame;
}

@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) UIButton *touchControl;
@property (nonatomic) unsigned long long loadState;
@property (retain, nonatomic) BDARVSourceModel *sourceModel;
@property (retain, nonatomic) BDARVADModel *adModel;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UILabel *cornerLabel;
@property (nonatomic) double maxHeight;
@property (nonatomic) double minHeight;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } layoutFrame;
@property (retain, nonatomic) UIImageView *contentImageView;
@property (retain, nonatomic) UIImageView *cornerImageView;
@property (nonatomic) BOOL hasSendShow;
@property (nonatomic) BOOL hasSendShowOver;
@property (retain, nonatomic) NSString *tagString;
@property (weak, nonatomic) id<BDARVBannerDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *adUnitID;
@property (readonly, copy, nonatomic) NSString *creatorId;

+ (id)bannerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 maxHeight:(double)arg1 minHeight:(double)arg2 source:(id)arg3 delegate:(id)arg4 shouldLoad:(BOOL)arg5;
+ (id)bannerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 source:(id)arg1 delegate:(id)arg2 config:(id)arg3;
+ (id)bannerWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 source:(id)arg1 delegate:(id)arg2 shouldLoad:(BOOL)arg3;

- (id)adModel;
- (void)setAdModel:(id)arg0;
- (void)closeAction:(id)arg0;
- (id)touchControl;
- (void)resizeLayout;
- (void)tapAction:(id)arg0 forEvent:(id)arg1;
- (id)adUnitID;
- (void)setTouchControl:(id)arg0;
- (void)setTagString:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 source:(id)arg1;
- (void)setLayoutFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)cornerImageView;
- (id)cornerLabel;
- (BOOL)hasSendShowOver;
- (void)sendBannerEventWithLabel:(id)arg0;
- (void)setHasSendShowOver:(BOOL)arg0;
- (BOOL)hasSendShow;
- (void)setHasSendShow:(BOOL)arg0;
- (void)layoutWithOrigin:(struct CGPoint { double x0; double x1; })arg0;
- (void)layoutWithWidth:(double)arg0;
- (void)clickTimeMonitor;
- (void)layoutWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setCornerLabel:(id)arg0;
- (void)setCornerImageView:(id)arg0;
- (id)tagString;
- (id)timer;
- (id)timer;
- (void).cxx_destruct;
- (unsigned long long)loadState;
- (void)show;
- (void)loadImage;
- (void)setMinHeight:(double)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })layoutFrame;
- (void)setMaxHeight:(double)arg0;
- (id)delegate;
- (void)setTimer:(id)arg0;
- (void)setTimer:(id)arg0;
- (void)hide;
- (double)maxHeight;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (double)minHeight;
- (id)sourceModel;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)contentImageView;
- (void)loadContent;
- (void)setContentImageView:(id)arg0;
- (void)setSourceModel:(id)arg0;
- (void)setLoadState:(unsigned long long)arg0;
- (void)updateUI:(id)arg0;
- (id)creatorId;

@end