//
//     Generated by private class-dump
//

@class UIView;
@protocol BDByteScreenCastLivePlayerControlViewProtocol;

@protocol AWEPlayInteractionScreenCastControllerProtocol <NSObject>

@property (readonly, nonatomic) UIView<BDByteScreenCastLivePlayerControlViewProtocol> *screenCastControlView;

- (id)screenCastControlView;
- (BOOL)checkIsScreenCastSubView:(id)arg0;
- (void)removeControlViewIfNeeded;
- (void)enterScreenCastStatusIfNeeded;
- (void)removeScreenCastControlView;
- (void)updateScreenCastViewLayout:(id)arg0;

@end