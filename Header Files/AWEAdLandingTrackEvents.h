//
//     Generated by private class-dump
//

@class AWEAdLandingEvent, NSString, AWEAwemeModel;

@interface AWEAdLandingTrackEvents : NSObject {
    AWEAwemeModel *_aweme;
    AWEAdLandingEvent *_pageview;
    AWEAdLandingEvent *_closeButtonTapped;
    AWEAdLandingEvent *_reportButtonTapped;
    AWEAdLandingEvent *_backgroundTapped;
    AWEAdLandingEvent *_draggingDownDismissal;
    AWEAdLandingEvent *_draggingRightDismissal;
    NSString *_renderType;
}

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) AWEAdLandingEvent *pageview;
@property (retain, nonatomic) AWEAdLandingEvent *closeButtonTapped;
@property (retain, nonatomic) AWEAdLandingEvent *reportButtonTapped;
@property (retain, nonatomic) AWEAdLandingEvent *backgroundTapped;
@property (retain, nonatomic) AWEAdLandingEvent *draggingDownDismissal;
@property (retain, nonatomic) AWEAdLandingEvent *draggingRightDismissal;
@property (copy, nonatomic) NSString *renderType;

+ (id)closeLabelWithModel:(id)arg0;
+ (id)tagName;

- (id)initWithAweme:(id)arg0;
- (id)aweme;
- (id)renderType;
- (void)setAweme:(id)arg0;
- (id)pageview;
- (id)reportButtonTapped;
- (id)draggingDownDismissal;
- (id)draggingRightDismissal;
- (id)backgroundTapped;
- (void)setPageview:(id)arg0;
- (void)setCloseButtonTapped:(id)arg0;
- (void)setReportButtonTapped:(id)arg0;
- (void)setBackgroundTapped:(id)arg0;
- (void)setDraggingDownDismissal:(id)arg0;
- (void)setDraggingRightDismissal:(id)arg0;
- (void).cxx_destruct;
- (void)setRenderType:(id)arg0;
- (id)closeButtonTapped;

@end
