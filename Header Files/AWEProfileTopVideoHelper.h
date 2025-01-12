//
//     Generated by private class-dump
//

@class AWEUserModel;

@interface AWEProfileTopVideoHelper : NSObject {
    BOOL _isTopVideoFullScreen;
    BOOL _isTopVideoDidEnterFullScreen;
    AWEUserModel *_user;
    double _backBtnMaxAlpha;
    double _moreFuncBtnMaxAlpha;
    double _moreFuncBackgroundViewMaxAlpha;
    double _shakeButtonMaxAlpha;
    double _visitorButtonMaxAlpha;
}

@property (retain, nonatomic) AWEUserModel *user;
@property (nonatomic) BOOL isTopVideoFullScreen;
@property (nonatomic) BOOL isTopVideoDidEnterFullScreen;
@property (nonatomic) double backBtnMaxAlpha;
@property (nonatomic) double moreFuncBtnMaxAlpha;
@property (nonatomic) double moreFuncBackgroundViewMaxAlpha;
@property (nonatomic) double shakeButtonMaxAlpha;
@property (nonatomic) double visitorButtonMaxAlpha;

- (BOOL)isTopVideoFullScreen;
- (void)setIsTopVideoFullScreen:(BOOL)arg0;
- (BOOL)isLeavingFullScreen;
- (BOOL)enableTopVideo;
- (BOOL)isTopVideoDidEnterFullScreen;
- (BOOL)isTopVideoEnterFullScreen;
- (void)setIsTopVideoDidEnterFullScreen:(BOOL)arg0;
- (double)backBtnMaxAlpha;
- (void)setBackBtnMaxAlpha:(double)arg0;
- (double)moreFuncBtnMaxAlpha;
- (void)setMoreFuncBtnMaxAlpha:(double)arg0;
- (double)moreFuncBackgroundViewMaxAlpha;
- (void)setMoreFuncBackgroundViewMaxAlpha:(double)arg0;
- (double)shakeButtonMaxAlpha;
- (void)setShakeButtonMaxAlpha:(double)arg0;
- (double)visitorButtonMaxAlpha;
- (void)setVisitorButtonMaxAlpha:(double)arg0;
- (void)setUser:(id)arg0;
- (id)init;
- (id)user;
- (void).cxx_destruct;

@end
