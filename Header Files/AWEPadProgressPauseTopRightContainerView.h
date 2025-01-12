//
//     Generated by private class-dump
//

@class UIView, NSMutableArray, NSMutableDictionary;
@protocol AWEPadProgressPauseButtonProtocol, AWEPadProgressPauseTopRightContainerViewDelegate;

@interface AWEPadProgressPauseTopRightContainerView : UIView {
    id<AWEPadProgressPauseTopRightContainerViewDelegate> _delegate;
    NSMutableArray *_buttonList;
    NSMutableDictionary *_buttonMap;
    UIView<AWEPadProgressPauseButtonProtocol> *_speedButton;
    UIView<AWEPadProgressPauseButtonProtocol> *_pureModeButton;
    UIView<AWEPadProgressPauseButtonProtocol> *_autoPlayButton;
    UIView<AWEPadProgressPauseButtonProtocol> *_danmakuButton;
}

@property (retain, nonatomic) NSMutableArray *buttonList;
@property (retain, nonatomic) NSMutableDictionary *buttonMap;
@property (retain, nonatomic) UIView<AWEPadProgressPauseButtonProtocol> *speedButton;
@property (retain, nonatomic) UIView<AWEPadProgressPauseButtonProtocol> *pureModeButton;
@property (retain, nonatomic) UIView<AWEPadProgressPauseButtonProtocol> *autoPlayButton;
@property (retain, nonatomic) UIView<AWEPadProgressPauseButtonProtocol> *danmakuButton;
@property (weak, nonatomic) id<AWEPadProgressPauseTopRightContainerViewDelegate> delegate;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)setButtonList:(id)arg0;
- (id)buttonList;
- (id)speedButton;
- (void)setSpeedButton:(id)arg0;
- (void)showButton:(unsigned long long)arg0 show:(BOOL)arg1;
- (void)addButtonToContainer:(unsigned long long)arg0 buttonWidth:(double)arg1;
- (void)updateButton:(unsigned long long)arg0 text:(id)arg1;
- (void)updateButton:(unsigned long long)arg0 icon:(id)arg1;
- (void)handleTapButton:(unsigned long long)arg0;
- (id)pureModeButton;
- (void)setPureModeButton:(id)arg0;
- (id)autoPlayButton;
- (void)setAutoPlayButton:(id)arg0;
- (id)danmakuButton;
- (void)setDanmakuButton:(id)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)buttonMap;
- (void)setButtonMap:(id)arg0;

@end
