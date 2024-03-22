//
//     Generated by private class-dump
//

@class UIViewController, UILongPressGestureRecognizer, UIView, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface AWEInsideSplitScreenUIConfig : NSObject {
    UIViewController *_mainContainerVC;
    UIViewController *_leftContainerVC;
    UIView *_leftContentView;
    long long _scene;
    UITapGestureRecognizer *_tapGesture;
    UIPanGestureRecognizer *_panGesture;
    UILongPressGestureRecognizer *_longPressGesture;
}

@property (weak, nonatomic) UIViewController *mainContainerVC;
@property (weak, nonatomic) UIViewController *leftContainerVC;
@property (weak, nonatomic) UIView *leftContentView;
@property (nonatomic) long long scene;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGesture;

- (void)setLeftContentView:(id)arg0;
- (void)setLeftContainerVC:(id)arg0;
- (void)setMainContainerVC:(id)arg0;
- (id)initWithLeftContainer:(id)arg0 leftContentView:(id)arg1 mainContainerVC:(id)arg2 scene:(long long)arg3;
- (void)bindTapGesture:(id)arg0 panGesture:(id)arg1 longPressGesture:(id)arg2;
- (id)mainContainerVC;
- (id)leftContainerVC;
- (id)longPressGesture;
- (void)setScene:(long long)arg0;
- (void).cxx_destruct;
- (id)tapGesture;
- (long long)scene;
- (id)panGesture;
- (void)setPanGesture:(id)arg0;
- (id)leftContentView;
- (void)setLongPressGesture:(id)arg0;
- (void)setTapGesture:(id)arg0;

@end
