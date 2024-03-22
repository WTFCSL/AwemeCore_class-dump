//
//     Generated by private class-dump
//

@class AWEBubble, NSTimer, NSString;

@interface AWEPhotoGuideManager : NSObject <AWEUserMessage> {
    BOOL _synchInfoAfterLogin;
    AWEBubble *_photoGuideBubble;
    NSTimer *_photoGuideTimer;
}

@property (retain, nonatomic) AWEBubble *photoGuideBubble;
@property (retain, nonatomic) NSTimer *photoGuideTimer;
@property (nonatomic) BOOL synchInfoAfterLogin;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)didFinishLogin;
- (void)didFinishLogout;
- (void)didFinishUpdateAwemeUser;
- (void)hidePhotoGuide;
- (void)showPhotoGuide;
- (void)_showPhotoGuide;
- (id)photoGuideBubble;
- (id)photoGuideTimer;
- (void)setPhotoGuideBubble:(id)arg0;
- (id)AWETabBarControllerShouldShowPhotoIntruductionKey;
- (BOOL)_customShouldShowPhotoGuide:(BOOL)arg0;
- (id)_customFirstLine;
- (id)_customSecondLine;
- (void)handleTapOnBubble:(id)arg0;
- (void)setPhotoGuideTimer:(id)arg0;
- (void)setSynchInfoAfterLogin:(BOOL)arg0;
- (BOOL)synchInfoAfterLogin;
- (BOOL)isPhotoGuideShowing;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end