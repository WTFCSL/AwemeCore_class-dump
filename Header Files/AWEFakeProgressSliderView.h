//
//     Generated by private class-dump
//

@class NSString, UIVisualEffectView, UIView, NSMutableArray;

@interface AWEFakeProgressSliderView : UIView <AWEFakeProgressSliderViewProtocol> {
    BOOL _isDisappearAnimating;
    double _percentage;
    UIView *_containerView;
    UIView *_thumbView;
    UIView *_whiteView;
    UIView *_grayView;
    UIVisualEffectView *_effectView;
    NSMutableArray *_chapterViewArray;
}

@property (retain, nonatomic) NSMutableArray *chapterViewArray;
@property (nonatomic) double percentage;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *thumbView;
@property (retain, nonatomic) UIView *whiteView;
@property (retain, nonatomic) UIView *grayView;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (nonatomic) BOOL isDisappearAnimating;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (id)grayView;
- (void)setGrayView:(id)arg0;
- (void)setIsDisappearAnimating:(BOOL)arg0;
- (BOOL)isDisappearAnimating;
- (void)addProcessIcon:(id)arg0;
- (id)chapterViewArray;
- (void)setupChapterUIWithArray:(id)arg0;
- (void)removerChapterView;
- (void)setChapterViewArray:(id)arg0;
- (void)show:(BOOL)arg0 animation:(id /* block */)arg1 completion:(id /* block */)arg2;
- (double)realViewHeightWhenDragging;
- (id)init;
- (id)effectView;
- (void).cxx_destruct;
- (id)thumbView;
- (void)setContainerView:(id)arg0;
- (void)setEffectView:(id)arg0;
- (id)containerView;
- (void)dealloc;
- (double)percentage;
- (void)setupUI;
- (void)setThumbView:(id)arg0;
- (void)show:(BOOL)arg0 completion:(id /* block */)arg1;
- (void)setPercentage:(double)arg0;
- (id)whiteView;
- (void)setWhiteView:(id)arg0;

@end
