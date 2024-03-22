//
//     Generated by private class-dump
//

@class NSTimer;

@interface AWELandscapeFeedUserGuideController : AWELandscapeFeedBaseController {
    NSTimer *_longPressGuideTimer;
}

@property (retain, nonatomic) NSTimer *longPressGuideTimer;

- (void)triggerGuideEvent;
- (void)registerLandscapeGuide;
- (void)resetLongPressGuideTimer:(BOOL)arg0;
- (id)longPressGuideTimer;
- (void)setLongPressGuideTimer:(id)arg0;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)viewDidLoad;

@end
