//
//     Generated by private class-dump
//

@class IESLiveMediaCountView, NSString, IESLiveMediaCountStore, NSDate, UIViewController;
@protocol IESHYControllerProtocol;

@interface IESLiveMediaRoomCountFragment : IESLiveRoomComponent <IESLiveMessageInteractionModuleCommentAction, IESHYControllerDelegate> {
    IESLiveMediaCountStore *_store;
    IESLiveMediaCountView *_audienceCountView;
    long long _orientation;
    UIViewController<IESHYControllerProtocol> *_audienceListVC;
    NSDate *_audienceListShowStartTime;
}

@property (retain, nonatomic) IESLiveMediaCountStore *store;
@property (retain, nonatomic) IESLiveMediaCountView *audienceCountView;
@property (nonatomic) long long orientation;
@property (weak, nonatomic) UIViewController<IESHYControllerProtocol> *audienceListVC;
@property (retain, nonatomic) NSDate *audienceListShowStartTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)iesHYControllerDidFinishLoad:(id)arg0;
- (void)hideComponent;
- (void)showComponent;
- (void)componentOrientationTransitioning:(long long)arg0;
- (void)updateRoomProfile:(long long)arg0;
- (void)setAudienceCountView:(id)arg0;
- (id)audienceCountView;
- (void)showAudienceList;
- (void)updateCountViewState:(BOOL)arg0;
- (void)showLynxAudienceListWithRankType:(long long)arg0;
- (void)setAudienceListVC:(id)arg0;
- (id)audienceListVC;
- (void)setAudienceListShowStartTime:(id)arg0;
- (id)audienceListShowStartTime;
- (void).cxx_destruct;
- (id)store;
- (void)keyboardWillShow:(id)arg0;
- (long long)orientation;
- (void)keyboardWillHide:(id)arg0;
- (void)setStore:(id)arg0;
- (void)keyboardWillHide;
- (void)setOrientation:(long long)arg0;
- (void)keyboardWillShow;

@end