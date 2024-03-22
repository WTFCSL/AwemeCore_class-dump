//
//     Generated by private class-dump
//

@class NSString, AFDCloseFriendsMomentBottomBarViewModel, AFDCloseFriendsMomentModel, AWESimpleContainer;

@interface AFDCloseFriendsBottomBaseComponent : AFDBaseElement {
    AFDCloseFriendsMomentModel *_currentMomentModel;
    AFDCloseFriendsMomentBottomBarViewModel *_bottomViewModel;
    AWESimpleContainer *_serviceContainer;
    unsigned long long _currentScene;
    NSString *_lastMomentIDForViewed;
}

@property (copy, nonatomic) NSString *lastMomentIDForViewed;
@property (retain, nonatomic) AFDCloseFriendsMomentModel *currentMomentModel;
@property (weak, nonatomic) AFDCloseFriendsMomentBottomBarViewModel *bottomViewModel;
@property (retain, nonatomic) AWESimpleContainer *serviceContainer;
@property (nonatomic) unsigned long long currentScene;

- (id)currentMomentModel;
- (void)setCurrentMomentModel:(id)arg0;
- (void)setServiceContainer:(id)arg0;
- (void)setCurrentScene:(unsigned long long)arg0;
- (BOOL)isAddedToContainer;
- (BOOL)canShowViewedViewWithModel:(id)arg0;
- (id)bottomViewModel;
- (void)setBottomViewModel:(id)arg0;
- (id)lastMomentIDForViewed;
- (void)setLastMomentIDForViewed:(id)arg0;
- (void).cxx_destruct;
- (id)serviceContainer;
- (unsigned long long)currentScene;

@end
