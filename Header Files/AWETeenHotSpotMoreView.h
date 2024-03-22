//
//     Generated by private class-dump
//

@class AWETeenHotSpotDataController, UIImageView, NSTimer, UIView, UILabel, AWETeenHotSpotModel;

@interface AWETeenHotSpotMoreView : UIView {
    BOOL _showStartMarqueeAnimation;
    AWETeenHotSpotModel *_curHotSpotModel;
    id /* block */ _selectedBlock;
    AWETeenHotSpotDataController *_dataController;
    UIView *_containerView;
    UIImageView *_flameView;
    UIImageView *_hotSpotIcon;
    UIImageView *_arrowView;
    UIView *_splitLine;
    UILabel *_fadeInLabel;
    UILabel *_fadeOutLabel;
    long long _showIndex;
    NSTimer *_timer;
}

@property (retain, nonatomic) AWETeenHotSpotDataController *dataController;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *flameView;
@property (retain, nonatomic) UIImageView *hotSpotIcon;
@property (retain, nonatomic) UIImageView *arrowView;
@property (retain, nonatomic) UIView *splitLine;
@property (retain, nonatomic) UILabel *fadeInLabel;
@property (retain, nonatomic) UILabel *fadeOutLabel;
@property (nonatomic) long long showIndex;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) AWETeenHotSpotModel *curHotSpotModel;
@property (nonatomic) BOOL showStartMarqueeAnimation;
@property (copy, nonatomic) id /* block */ selectedBlock;

- (void)setDataController:(id)arg0;
- (id)initWithDataController:(id)arg0;
- (id)splitLine;
- (void)setSplitLine:(id)arg0;
- (void)setSelectedBlock:(id /* block */)arg0;
- (id /* block */)selectedBlock;
- (long long)showIndex;
- (void)setShowIndex:(long long)arg0;
- (void)p_setupView;
- (void)p_setupBind;
- (void)p_startMarqueeAnimation;
- (void)p_onSingleTap;
- (id)fadeInLabel;
- (id)curHotSpotModel;
- (id)flameView;
- (id)hotSpotIcon;
- (id)fadeOutLabel;
- (BOOL)showStartMarqueeAnimation;
- (void)setCurHotSpotModel:(id)arg0;
- (void)setShowStartMarqueeAnimation:(BOOL)arg0;
- (void)setFlameView:(id)arg0;
- (void)setHotSpotIcon:(id)arg0;
- (void)setFadeInLabel:(id)arg0;
- (void)setFadeOutLabel:(id)arg0;
- (id)timer;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (void)setTimer:(id)arg0;
- (id)containerView;
- (void)dealloc;
- (id)arrowView;
- (void)setArrowView:(id)arg0;
- (id)dataController;

@end
