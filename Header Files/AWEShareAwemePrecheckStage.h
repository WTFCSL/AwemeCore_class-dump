//
//     Generated by private class-dump
//

@class AWEShareAwemeInfoModel, AWEAwemeModel;

@interface AWEShareAwemePrecheckStage : AWEShareBaseStage

@property (readonly, nonatomic) AWEAwemeModel *aweme;
@property (readonly, nonatomic) AWEShareAwemeInfoModel *awemeInfo;

- (id)aweme;
- (id)awemeInfo;
- (BOOL)prepareBeforeRun;
- (BOOL)precheckAwemeControl;
- (BOOL)precheckAwemeStatus;
- (BOOL)precheckNonNativeADXAd;
- (void)p_showSelfSeeNotShare;
- (void)run;

@end
