//
//     Generated by private class-dump
//

@class UIView;

@protocol IESLiveInteractiveLocalLayout <NSObject>

@property (retain, nonatomic) UIView *sessionViewContainer;
@property (retain, nonatomic) UIView *optionViewContainer;

- (void)setSessionViewContainer:(id)arg0;
- (void)setOptionViewContainer:(id)arg0;
- (id)optionViewContainer;
- (id)sessionViewContainer;
- (void)layoutHostSession:(id)arg0;
- (void)onNewSessionCreated:(id)arg0 local:(BOOL)arg1;
- (void)updateLayoutOfSessionViews:(id)arg0 withUserService:(id)arg1;

@optional

- (void)firstRemoteVideoDecodedOfUid:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1;
- (void)updateRenderLayout:(id)arg0;
- (void)updateHostSessionWithBizFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end
