//
//     Generated by private class-dump
//

@class NSArray;

@interface AWETokamakImageExceedMonitor : AWETokamakImageMonitor {
    double _exceedThreshold;
    NSArray *_exceedWhiteList;
}

- (struct CGSize { double x0; double x1; })_targetSize:(id)arg0;
- (id)_generateShortViewPath:(id)arg0;
- (BOOL)shouldReportImageSizeExceed:(struct CGSize { double x0; double x1; })arg0 targeViewSize:(struct CGSize { double x0; double x1; })arg1 viewPath:(id)arg2;
- (id)_shortViewPathForView:(id)arg0;
- (void)receiveImageModel:(id)arg0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)arg0;

@end
