//
//     Generated by private class-dump
//

@class NSString, NSTimer, UIScrollView, IESLiveBannerListModel;
@protocol IESLiveRoomService, IESLiveLoginService;

@interface IESLiveActivityBannerNativeContainer : UIView <UIScrollViewDelegate> {
    int _preIndex;
    UIScrollView *_scrollView;
    IESLiveBannerListModel *_bannerData;
    NSTimer *_timer;
    id<IESLiveRoomService> _room;
    id<IESLiveLoginService> _loginService;
}

@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) IESLiveBannerListModel *bannerData;
@property (retain, nonatomic) NSTimer *timer;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) id<IESLiveLoginService> loginService;
@property (nonatomic) int preIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupContainer;
- (void)addGesture;
- (void)initTimer;
- (void)setPreIndex:(int)arg0;
- (int)preIndex;
- (BOOL)isInMSeq;
- (id)bannerData;
- (void)setBannerData:(id)arg0;
- (void)autoScrollPage;
- (void)trackBanner:(id)arg0 index:(int)arg1 withClicked:(BOOL)arg2;
- (void)containerViewTapped;
- (id)loginService;
- (id)initWithBannerData:(id)arg0;
- (void)setLoginService:(id)arg0;
- (id)timer;
- (void)setScrollView:(id)arg0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg0;
- (void)setTimer:(id)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (id)scrollView;
- (id)room;
- (void)setRoom:(id)arg0;

@end
