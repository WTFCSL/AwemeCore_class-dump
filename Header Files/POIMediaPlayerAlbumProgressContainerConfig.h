//
//     Generated by private class-dump
//

@class UIColor;

@interface POIMediaPlayerAlbumProgressContainerConfig : NSObject {
    BOOL _shouldHideProgressInSingleMode;
    UIColor *_progressColor;
    double _containerHeight;
    double _containerMargin;
    double _progressHeight;
    double _progressMargin;
}

@property (retain, nonatomic) UIColor *progressColor;
@property (nonatomic) double containerHeight;
@property (nonatomic) double containerMargin;
@property (nonatomic) double progressHeight;
@property (nonatomic) double progressMargin;
@property (nonatomic) BOOL shouldHideProgressInSingleMode;

- (void)setProgressHeight:(double)arg0;
- (double)progressHeight;
- (double)containerMargin;
- (double)progressMargin;
- (void)setContainerMargin:(double)arg0;
- (void)setProgressMargin:(double)arg0;
- (BOOL)shouldHideProgressInSingleMode;
- (void)setShouldHideProgressInSingleMode:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)progressColor;
- (void)setProgressColor:(id)arg0;
- (void)setContainerHeight:(double)arg0;
- (double)containerHeight;

@end
