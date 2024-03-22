//
//     Generated by private class-dump
//

@class UIButton, NSString;

@interface AFDCloseFriendsBottomCameraComponent : AFDCloseFriendsBottomBaseComponent <AFDElementHostLifeCycle> {
    UIButton *_scrollToCameraButton;
}

@property (retain, nonatomic) UIButton *scrollToCameraButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)host_setData:(id)arg0;
- (void)elementDidLoad;
- (void)setupBinding;
- (void)setupMomentFeedUI;
- (void)updateButtonIfBlur;
- (void)updateButtonImage;
- (id)scrollToCameraButton;
- (void)tapScrollToCamera:(id)arg0;
- (void)setScrollToCameraButton:(id)arg0;
- (void).cxx_destruct;

@end