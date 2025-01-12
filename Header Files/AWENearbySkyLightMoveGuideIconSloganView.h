//
//     Generated by private class-dump
//

@class AWENearbyLynxContainerView, NSString;
@protocol AWENearbySkyLightElementViewActionDelegate;

@interface AWENearbySkyLightMoveGuideIconSloganView : UIView <AWENearbyLynxContainerViewDelegate, AWENearbySkyLightElementViewProtocol> {
    id<AWENearbySkyLightElementViewActionDelegate> _delegate;
    AWENearbyLynxContainerView *_lynxContainerView;
}

@property (retain, nonatomic) AWENearbyLynxContainerView *lynxContainerView;
@property (weak, nonatomic) id<AWENearbySkyLightElementViewActionDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)lynxContainerView;
- (void)lynxContainerDidFirstScreen:(id)arg0;
- (void)lynxContainer:(id)arg0 didFinishLoadWithURL:(id)arg1;
- (void)lynxContainer:(id)arg0 didLoadFailedWithUrl:(id)arg1 error:(id)arg2;
- (void)trackShowAnimated:(BOOL)arg0 params:(id)arg1;
- (void)trackSkylightHidden;
- (unsigned long long)elementViewType;
- (void)setLynxContainerView:(id)arg0;
- (void)configWithGuideModel:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
