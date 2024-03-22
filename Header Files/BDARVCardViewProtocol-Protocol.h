//
//     Generated by private class-dump
//

@protocol BDARVCardViewProtocol <NSObject>

- (void)cardViewWillStartLoad;
- (void)cardViewDidLoadFailWithError:(id)arg0;
- (void)cardViewDidLoadSuccess;
- (void)cardViewDidContentResize:(struct CGSize { double x0; double x1; })arg0 info:(id)arg1;
- (void)cardViewPreloadFormWithInfo:(id)arg0;
- (void)cardViewDidClickBannerWithInfo:(id)arg0;
- (void)cardViewDidClickVideoWithInfo:(id)arg0;
- (void)cardViewDidClickCardViewWithInfo:(id)arg0;
- (void)cardViewDidClickCardViewButtonWithInfo:(id)arg0;
- (void)cardViewDidClickCloseWithInfo:(id)arg0;
- (void)cardViewDidClickFullScreen:(BOOL)arg0 completed:(id /* block */)arg1;
- (void)cardViewRenderVideoStart;
- (void)cardViewCloseAd;
- (void)cardViewLoadVideoError;
- (void)cardViewVideoAdDidFinish;
- (void)cardViewMuteBtnClick:(BOOL)arg0;
- (void)cardViewReportAction:(id)arg0 adModel:(id)arg1;

@end
