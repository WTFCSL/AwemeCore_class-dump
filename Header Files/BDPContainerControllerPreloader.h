//
//     Generated by private class-dump
//

@class NSString, UIView;

@interface BDPContainerControllerPreloader : NSObject <BDPAPPFramePreloadProtocol> {
    UIView *_customLoadingView;
}

@property (retain, nonatomic) UIView *customLoadingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (id)customLoadingView;
+ (void)startPreload;
+ (void)preLoadCustomLoadingView;
+ (id)sharedManager;

- (id)customLoadingView;
- (void)setCustomLoadingView:(id)arg0;
- (void).cxx_destruct;

@end