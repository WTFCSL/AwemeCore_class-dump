//
//     Generated by private class-dump
//

@class LOTAnimationView, UILabel, UIView;

@interface AWETeenLongPressGuideManager : NSObject {
    BOOL _isShowingGuide;
    id /* block */ _longPressBlock;
    UIView *_containerView;
    LOTAnimationView *_pressView;
    UILabel *_guidingLabel;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) LOTAnimationView *pressView;
@property (retain, nonatomic) UILabel *guidingLabel;
@property (nonatomic) BOOL isShowingGuide;
@property (copy, nonatomic) id /* block */ longPressBlock;

- (void)p_setupUI;
- (id /* block */)longPressBlock;
- (void)setLongPressBlock:(id /* block */)arg0;
- (void)p_addGesture;
- (void)setIsShowingGuide:(BOOL)arg0;
- (BOOL)isShowingGuide;
- (void)p_setupBind;
- (id)pressView;
- (id)guidingLabel;
- (void)p_animationBegin;
- (void)dismissLongPressGuide;
- (void)swipeAction:(id)arg0;
- (void)showLongPressGuide;
- (void)setPressView:(id)arg0;
- (void)setGuidingLabel:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (void)longPressAction:(id)arg0;
- (void)dealloc;
- (void)tapAction:(id)arg0;

@end