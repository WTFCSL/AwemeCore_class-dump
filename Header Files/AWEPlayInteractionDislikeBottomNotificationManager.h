//
//     Generated by private class-dump
//

@class NSDictionary, NSString, DUXBottomNotification;

@interface AWEPlayInteractionDislikeBottomNotificationManager : NSObject {
    BOOL _disableToast;
    NSDictionary *_trackExtra;
    NSString *_disableToastShowAwemeID;
    DUXBottomNotification *_bottomNotification;
}

@property (copy, nonatomic) NSDictionary *trackExtra;
@property (nonatomic) BOOL disableToast;
@property (retain, nonatomic) NSString *disableToastShowAwemeID;
@property (retain, nonatomic) DUXBottomNotification *bottomNotification;

+ (id)sharedInstance;

- (id)trackExtra;
- (void)setTrackExtra:(id)arg0;
- (void)setBottomNotification:(id)arg0;
- (id)bottomNotification;
- (void)dislikeToastOnVC:(id)arg0 awemeModel:(id)arg1 trackExtra:(id)arg2 dismissWhenClick:(BOOL)arg3 clicked:(id /* block */)arg4;
- (void)showWithdrawGuideToastOnVC:(id)arg0 awemeModel:(id)arg1 trackExtra:(id)arg2;
- (void)dislikeToastOnVC:(id)arg0 awemeModel:(id)arg1 trackExtra:(id)arg2;
- (void)removeDislikeToastWithAweme:(id)arg0;
- (BOOL)disableToast;
- (void)showBubbleWithToast:(id)arg0 awemeModel:(id)arg1 onVC:(id)arg2 autoDismissTime:(double)arg3 buttonText:(id)arg4 buttonActionSchema:(id)arg5;
- (void)showBubbleWithToast:(id)arg0 awemeModel:(id)arg1 onVC:(id)arg2 autoDismissTime:(double)arg3 buttonType:(unsigned long long)arg4 buttonText:(id)arg5 buttonActionSchema:(id)arg6 dismissWhenClick:(BOOL)arg7 enlargeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg8 leftImage:(id)arg9 clicked:(id /* block */)arg10 dismiss:(id /* block */)arg11;
- (void)setDisableToast:(BOOL)arg0;
- (void)setDisableToastShowAwemeID:(id)arg0;
- (id)createBottomNotification:(unsigned long long)arg0 dismiss:(id /* block */)arg1;
- (id)disableToastShowAwemeID;
- (void).cxx_destruct;

@end
