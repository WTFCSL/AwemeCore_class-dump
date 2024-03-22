//
//     Generated by private class-dump
//

@class IESLiveAVPipManager, UIViewController, NSString;
@protocol IESLivePipUnitProvider;

@interface IESLivePipUnitManager : NSObject <IESLivePipUnitProvider> {
    BOOL _isVicePlayerHasOpen;
    IESLiveAVPipManager *_avPipManager;
    id<IESLivePipUnitProvider> _pipComponent;
    UIViewController *_returnToVC;
    NSString *_originSdkkey;
}

@property (retain, nonatomic) IESLiveAVPipManager *avPipManager;
@property (retain, nonatomic) id<IESLivePipUnitProvider> pipComponent;
@property (retain, nonatomic) UIViewController *returnToVC;
@property (nonatomic) BOOL isVicePlayerHasOpen;
@property (copy, nonatomic) NSString *originSdkkey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)setAudienceVC:(id)arg0;
- (void)setPipComponent:(id)arg0;
- (id)pipComponent;
- (void)showPip:(id)arg0;
- (void)hidePipWithBusinessLine:(id)arg0 type:(long long)arg1 completion:(id /* block */)arg2;
- (BOOL)isShowPip;
- (id)currentShowPipBusinessLine;
- (void)tapPip;
- (void)setIsForbidShow:(BOOL)arg0 changeType:(long long)arg1;
- (void)setReturnToVC:(id)arg0;
- (id)returnToVC;
- (BOOL)p_isVRMode;
- (void)setOriginSdkkey:(id)arg0;
- (id)originSdkkey;
- (BOOL)p_isCorrectFrom:(id)arg0;
- (id)p_getCurrentLowestLevelResolutionKey;
- (id)avPipManager;
- (void)setAvPipManager:(id)arg0;
- (BOOL)isVicePlayerHasOpen;
- (void)setIsVicePlayerHasOpen:(BOOL)arg0;
- (id)smallWindowBusinessLineConfig;
- (BOOL)enablePipUseVicePlayer;
- (void).cxx_destruct;
- (void)clear;

@end