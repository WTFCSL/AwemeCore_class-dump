//
//     Generated by private class-dump
//

@class NSString, UIView;
@protocol AWEFeedLiveMarkViewProtocol;

@interface IESGCPLiveAnimationService_Douyin : NSObject <IESGCPLiveAnimationService> {
    UIView<AWEFeedLiveMarkViewProtocol> *_liveMarkView;
    UIView *_liveAvatarView;
}

@property (retain, nonatomic) UIView<AWEFeedLiveMarkViewProtocol> *liveMarkView;
@property (retain, nonatomic) UIView *liveAvatarView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)liveMarkView;
- (void)setMarkLayerGradientColorWithType:(unsigned long long)arg0;
- (void)setLiveMarkView:(id)arg0;
- (void)stopAnimationWithView:(id)arg0;
- (void)startAnimationWithView:(id)arg0 showLiveTag:(BOOL)arg1 withURLs:(id)arg2 type:(unsigned long long)arg3 interval:(double)arg4;
- (void)hiddenLiveAvatarView;
- (void)showLiveAvatarView;
- (id)getLiveAvatarView;
- (id)liveAvatarView;
- (id)getLiveMarkViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setLiveAvatarView:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setupView;

@end
