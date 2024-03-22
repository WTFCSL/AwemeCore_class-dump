//
//     Generated by private class-dump
//

@class NSString, IESLivePrivilegeEntranceProfileAnimationFactory, NSNumber;
@protocol IESLivePrivilegeEntranceProfileViewEventHandler;

@interface IESLivePrivilegeEntranceBlankView : UIView <IESLivePrivilegeEntranceProfileViewProtocol> {
    id<IESLivePrivilegeEntranceProfileViewEventHandler> _delegate;
    NSString *_lastFansclubState;
    NSString *_lastVipState;
    IESLivePrivilegeEntranceProfileAnimationFactory *_animationFactory;
    NSNumber *_isShowing;
}

@property (weak, nonatomic) id<IESLivePrivilegeEntranceProfileViewEventHandler> delegate;
@property (retain, nonatomic) IESLivePrivilegeEntranceProfileAnimationFactory *animationFactory;
@property (retain, nonatomic) NSString *lastFansclubState;
@property (retain, nonatomic) NSString *lastVipState;
@property (retain, nonatomic) NSNumber *isShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsShowing:(id)arg0;
- (void)viewDidShowOnContainer:(id)arg0;
- (void)viewDidHideFromContainer:(id)arg0;
- (id)lastFansclubState;
- (void)setLastFansclubState:(id)arg0;
- (id)lastVipState;
- (void)setLastVipState:(id)arg0;
- (void)setAnimationFactory:(id)arg0;
- (void).cxx_destruct;
- (id)isShowing;
- (id)delegate;
- (struct CGSize { double x0; double x1; })viewSize;
- (id)animationFactory;
- (void)setDelegate:(id)arg0;

@end