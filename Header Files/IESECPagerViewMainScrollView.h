//
//     Generated by private class-dump
//

@class NSString;
@protocol IESECPagerViewMainScrollViewGestureDelegate;

@interface IESECPagerViewMainScrollView : UIScrollView <UIGestureRecognizerDelegate> {
    id<IESECPagerViewMainScrollViewGestureDelegate> _gestureDelegate;
}

@property (weak, nonatomic) id<IESECPagerViewMainScrollViewGestureDelegate> gestureDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (id)gestureDelegate;
- (void)setGestureDelegate:(id)arg0;

@end