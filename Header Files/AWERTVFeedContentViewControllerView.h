//
//     Generated by private class-dump
//

@class NSString;
@protocol AWERTVFeedContentViewControllerViewDelegate;

@interface AWERTVFeedContentViewControllerView : UIView <AFDPiPContentViewProtocol> {
    id<AWERTVFeedContentViewControllerViewDelegate> _delegate;
}

@property (weak, nonatomic) id<AWERTVFeedContentViewControllerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateContentOffsetWithNewFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
