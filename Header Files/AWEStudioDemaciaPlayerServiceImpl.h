//
//     Generated by private class-dump
//

@class NSString;

@interface AWEStudioDemaciaPlayerServiceImpl : NSObject <AWEStudioDemaciaPlayerServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)demaciaPlayerViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)demaciaSmallPlayerViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)bindDelegateForPlayerView:(id)arg0;
- (void)refreshPlayerView:(id)arg0 withModel:(id)arg1 paramDic:(id)arg2;

@end
