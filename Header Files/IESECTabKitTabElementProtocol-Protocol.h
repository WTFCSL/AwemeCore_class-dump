//
//     Generated by private class-dump
//

@class UIScrollView, IESECTabKitTabModel;
@protocol IESECTabKitTabElementDelegate;

@protocol IESECTabKitTabElementProtocol <IESECTabViewElementProtocol>

@property (weak, nonatomic) id<IESECTabKitTabElementDelegate> delegate;
@property (readonly, nonatomic) UIScrollView *scrollView;
@property (readonly, nonatomic) long long statusBarStyle;
@property (readonly, nonatomic) IESECTabKitTabModel *tabModel;

- (id)tabModel;
- (BOOL)hiddenStatusBar;
- (void)reloadWithTabModel:(id)arg0;
- (long long)statusBarStyle;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)scrollView;

@end