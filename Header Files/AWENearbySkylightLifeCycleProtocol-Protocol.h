//
//     Generated by private class-dump
//

@protocol AWENearbySkylightLifeCycleProtocol <NSObject>

@property (readonly, nonatomic) BOOL isShowing;
@property (readonly, nonatomic) BOOL isOpening;

- (void)skylightWillHidden;
- (void)onLeaveNearby;
- (void)skylightWillShow;
- (void)skylightDidShowWithAnimated:(BOOL)arg0 Params:(id)arg1;
- (void)skylightWillClose;
- (void)skylightDidClose;
- (void)onEnterNearbyWithParams:(id)arg0;
- (void)switchToNeabryWithParams:(id)arg0;
- (void)switchLeaveNeabry;
- (BOOL)isShowing;
- (BOOL)isOpening;

@end