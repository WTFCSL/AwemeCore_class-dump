//
//     Generated by private class-dump
//

@class IESLiveCastScreenWindow, UIImage;
@protocol IESLiveCommonCastScreenViewStrategy;

@interface IESLiveCommonCastScreenViewHandler : NSObject {
    id<IESLiveCommonCastScreenViewStrategy> _strategy;
    IESLiveCastScreenWindow *_windowView;
    UIImage *_businessIcon;
}

@property (retain, nonatomic) id<IESLiveCommonCastScreenViewStrategy> strategy;
@property (retain, nonatomic) IESLiveCastScreenWindow *windowView;
@property (retain, nonatomic) UIImage *businessIcon;

- (void)didSetAttachingDIContext;
- (void)stopCast;
- (id)windowView;
- (void)setWindowView:(id)arg0;
- (id)initWithBusiness:(id)arg0 room:(id)arg1;
- (void)startWithBusiness:(id)arg0 complete:(id /* block */)arg1;
- (void)resumeScreenCast;
- (void)castScreenChangedWithStatus:(long long)arg0;
- (void)setupCastBusinessIcon:(id)arg0;
- (id)businessIcon;
- (void)setBusinessIcon:(id)arg0;
- (void)removeWindowViewFromCurrentScreen;
- (void)addViewToContainer:(id)arg0;
- (void)updateInteractionItemAlpha:(double)arg0;
- (void)updatePKItemAlpha:(double)arg0;
- (void)handleCastBusinessIcon:(id)arg0 completion:(id /* block */)arg1;
- (id)backgroundToastText;
- (id)strategy;
- (void).cxx_destruct;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (void)setStrategy:(id)arg0;

@end
