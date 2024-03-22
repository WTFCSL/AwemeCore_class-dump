//
//     Generated by private class-dump
//

@class UIButton, NSString, UIPanGestureRecognizer;

@interface AWEFullScreenOfflineTableViewCellMaskView : UIView <UIGestureRecognizerDelegate> {
    UIButton *_button;
    UIPanGestureRecognizer *_panGes;
}

@property (retain, nonatomic) UIButton *button;
@property (retain, nonatomic) UIPanGestureRecognizer *panGes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)panGes;
- (void)setPanGes:(id)arg0;
- (void).cxx_destruct;
- (id)button;
- (void)setButton:(id)arg0;
- (BOOL)gestureRecognizerShouldBegin:(id)arg0;

@end
