//
//     Generated by private class-dump
//

@class NSString, AWELeftSideBarBasePresenter;
@protocol AWELeftSideBarEntranceViewBussinessDelegate;

@interface AWELeftSideBarEntranceViewProxy : NSObject <AWELeftSideBarEntranceViewAbility> {
    AWELeftSideBarBasePresenter *_presenter;
    id<AWELeftSideBarEntranceViewBussinessDelegate> _bussinessDelegate;
}

@property (weak, nonatomic) AWELeftSideBarBasePresenter *presenter;
@property (weak, nonatomic) id<AWELeftSideBarEntranceViewBussinessDelegate> bussinessDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)sideBarStatus;
- (BOOL)closeLeftSideBar;
- (void)showLeftSideBarBussinessEntranceRedDot;
- (void)hideLeftSideBarBussinessEntranceRedDot;
- (BOOL)leftSideBarIsOpen;
- (void)removeLeftSideBarBussinessEntranceView;
- (BOOL)leftSideBarBussinessEntranceViewIsShow;
- (void)showLeftSideBarBussinessEntranceRedDotWithCount:(long long)arg0;
- (void)hideLeftSideBarBussinessEntranceCountRedDot;
- (void)setBussinessDelegate:(id)arg0;
- (id)bussinessDelegate;
- (void)showCaptionViewWithParameterModel:(id)arg0 completion:(id /* block */)arg1 clickBlock:(id /* block */)arg2 dismissBlock:(id /* block */)arg3;
- (void)hideEntranceCaptionBubbleViewWithComponentID:(id)arg0 completion:(id /* block */)arg1;
- (void)addLeftSideBarEntranceView:(id)arg0 completion:(id /* block */)arg1;
- (void)showLeftSideBarEntrancePopView:(id)arg0 completion:(id /* block */)arg1 clickBlock:(id /* block */)arg2 dismissBlock:(id /* block */)arg3;
- (BOOL)openLeftSideBar;
- (BOOL)openLeftSideBarWithClickEntranceViewBackFeed;
- (id)initWithPresenter:(id)arg0 leftSideBarEntranceViewBussinessDelegate:(id)arg1;
- (void).cxx_destruct;
- (id)presenter;
- (void)setPresenter:(id)arg0;

@end
