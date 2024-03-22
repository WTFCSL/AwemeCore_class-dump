//
//     Generated by private class-dump
//

@class DUXBottomNotification;

@interface AWEProfileWaterfallSwitchBottomTipView : UIView <AWEProfileBubbleProtocol> {
    BOOL _isNextDayRemind;
    BOOL _hasShow;
    DUXBottomNotification *_bottomNotification;
}

@property (retain, nonatomic) DUXBottomNotification *bottomNotification;
@property (nonatomic) BOOL isNextDayRemind;
@property (nonatomic) BOOL hasShow;

- (void)addNotifications;
- (BOOL)hasShow;
- (void)setHasShow:(BOOL)arg0;
- (void)setBottomNotification:(id)arg0;
- (id)bottomNotification;
- (BOOL)useManagerAnimation;
- (void)setIsNextDayRemind:(BOOL)arg0;
- (BOOL)isNextDayRemind;
- (void)notifyAction:(BOOL)arg0;
- (void)postVCChangeAppear:(id)arg0;
- (void).cxx_destruct;
- (void)config;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)dealloc;
- (void)didShow;
- (BOOL)updateModel:(id)arg0;
- (void)didPop;

@end