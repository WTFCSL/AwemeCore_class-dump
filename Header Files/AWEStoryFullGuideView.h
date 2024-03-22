//
//     Generated by private class-dump
//

@class LOTAnimationView, NSString;

@interface AWEStoryFullGuideView : UIView <AWEAlertProtocol> {
    LOTAnimationView *_imageView;
    id /* block */ _dismissCallback;
}

@property (retain, nonatomic) LOTAnimationView *imageView;
@property (copy, nonatomic) id /* block */ dismissCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showWithCloseCallback:(id /* block */)arg0;
- (void)dismissGuideView;
- (id /* block */)dismissCallback;
- (void)setDismissCallback:(id /* block */)arg0;
- (void)showGuideView;
- (void).cxx_destruct;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (void)setUpUI;

@end