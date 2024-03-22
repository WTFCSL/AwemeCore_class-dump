//
//     Generated by private class-dump
//

@class RTVFeedShareReminderContentViewModel, UILabel, UIView, UITapGestureRecognizer;
@protocol RTVVoipResourceFetcherInterface, RxInjector;

@interface RTVFeedShareReminderContentView : UIView {
    id /* block */ _tapBlock;
    UIView *_iconView;
    UILabel *_tipLabel;
    RTVFeedShareReminderContentViewModel *_model;
    id<RTVVoipResourceFetcherInterface> _resourceFetcher;
    UITapGestureRecognizer *_tapGesture;
    id<RxInjector> _injector;
}

@property (retain, nonatomic) UIView *iconView;
@property (retain, nonatomic) UILabel *tipLabel;
@property (readonly, nonatomic) RTVFeedShareReminderContentViewModel *model;
@property (readonly, nonatomic) id<RTVVoipResourceFetcherInterface> resourceFetcher;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (copy, nonatomic) id /* block */ tapBlock;

- (id /* block */)tapBlock;
- (void)setTapBlock:(id /* block */)arg0;
- (void)rxAwakeFromPropertyInjection;
- (void)renderModel:(id)arg0;
- (id)resourceFetcher;
- (void)__handleTapGesture:(id)arg0;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__refreshComponents;
- (void).cxx_destruct;
- (id)iconView;
- (id)model;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setIconView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)tapGesture;
- (id)injector;
- (id)tipLabel;
- (void)setTipLabel:(id)arg0;
- (void)setTapGesture:(id)arg0;

@end
