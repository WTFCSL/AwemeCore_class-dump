//
//     Generated by private class-dump
//

@class UIView, NSString, AWEStoryColorChooseView, AWEVideoCoverRecommendTextViewController, AWEStoryColor, UIButton, AWEVideoCoverFontChooseView, AWEVideoCoverTextTabContext;
@protocol AWEVideoCoverTextStyleDelegate, AWEVideoCoverRecommendTextViewDelegate;

@interface AWENewVideoCoverTextInputQuickView : UIView {
    AWEVideoCoverTextTabContext *_context;
    id<AWEVideoCoverTextStyleDelegate> _styleDelegate;
    id<AWEVideoCoverRecommendTextViewDelegate> _recommendTextDelegate;
    UIView *_splitLine;
    UIButton *_fontButton;
    UIButton *_colorButton;
    UIButton *_closeButton;
    AWEVideoCoverFontChooseView *_fontChooseView;
    AWEStoryColorChooseView *_colorChooseView;
    AWEVideoCoverRecommendTextViewController *_recommendTextController;
    NSString *_observerIdentifier;
    AWEStoryColor *_currentStoryColor;
}

@property (retain, nonatomic) UIView *splitLine;
@property (retain, nonatomic) UIButton *fontButton;
@property (retain, nonatomic) UIButton *colorButton;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) AWEVideoCoverFontChooseView *fontChooseView;
@property (retain, nonatomic) AWEStoryColorChooseView *colorChooseView;
@property (retain, nonatomic) AWEVideoCoverRecommendTextViewController *recommendTextController;
@property (copy, nonatomic) NSString *observerIdentifier;
@property (retain, nonatomic) AWEStoryColor *currentStoryColor;
@property (retain, nonatomic) AWEVideoCoverTextTabContext *context;
@property (weak, nonatomic) id<AWEVideoCoverTextStyleDelegate> styleDelegate;
@property (weak, nonatomic) id<AWEVideoCoverRecommendTextViewDelegate> recommendTextDelegate;

- (id)splitLine;
- (void)setSplitLine:(id)arg0;
- (id)colorChooseView;
- (void)setColorChooseView:(id)arg0;
- (void)onCloseAction;
- (void)setupSubView;
- (id)fontChooseView;
- (id)currentTextModel;
- (void)setFontChooseView:(id)arg0;
- (void)setRecommendTextDelegate:(id)arg0;
- (id)recommendTextController;
- (void)observeFontData;
- (void)setCurrentStoryColor:(id)arg0;
- (id)colorButton;
- (id)fontButton;
- (id)observerIdentifier;
- (void)setObserverIdentifier:(id)arg0;
- (void)onColorAction;
- (void)setColorButton:(id)arg0;
- (void)onFontAction;
- (void)setFontButton:(id)arg0;
- (id)recommendTextDelegate;
- (void)setRecommendTextController:(id)arg0;
- (id)colorViewLayout;
- (void)didSelectedColor:(id)arg0 index:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 styleDelegate:(id)arg1 recommendTextDelegate:(id)arg2;
- (void)disableFontStyle;
- (void)resetFontStyle;
- (id)currentStoryColor;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;
- (void)update;
- (id)styleDelegate;
- (void)setStyleDelegate:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;

@end
