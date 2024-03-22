//
//     Generated by private class-dump
//

@class AWEAdGeneralSearchLynxComponentMonitorContext, NSString, UIView;
@protocol AWEBDARifleView;

@interface AWEModernFeedAdSandwichVideoViewController : AWEModernFeedAwemeViewController <AWEBDARifleViewDelegate> {
    BOOL _isVideoDidBreak;
    UIView<AWEBDARifleView> *_topRifleView;
    UIView<AWEBDARifleView> *_bottomRifleView;
    AWEAdGeneralSearchLynxComponentMonitorContext *_topLynxTrackContext;
    AWEAdGeneralSearchLynxComponentMonitorContext *_bottomLynxTrackContext;
}

@property (retain, nonatomic) UIView<AWEBDARifleView> *topRifleView;
@property (retain, nonatomic) UIView<AWEBDARifleView> *bottomRifleView;
@property (retain, nonatomic) AWEAdGeneralSearchLynxComponentMonitorContext *topLynxTrackContext;
@property (retain, nonatomic) AWEAdGeneralSearchLynxComponentMonitorContext *bottomLynxTrackContext;
@property (nonatomic) BOOL isVideoDidBreak;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)modernFeedCellPreferedHeightForModel:(id)arg0 width:(double)arg1;
+ (void)__awe__codeRunnerRun___LINE__;

- (void)rifleView:(id)arg0 didFinishLoadWithURL:(id)arg1;
- (void)rifleView:(id)arg0 didLoadFailedWithURL:(id)arg1 error:(id)arg2;
- (void)rifleViewDidConstructJSRuntime:(id)arg0;
- (void)rifleView:(id)arg0 didChangeIntrinsicContentSize:(struct CGSize { double x0; double x1; })arg1;
- (void)didStartShowing;
- (void)didEndShowing;
- (void)updateSubviewFrames;
- (void)setIsVideoDidBreak:(BOOL)arg0;
- (void)resetLynxView;
- (void)updateLynxViewWithAwemeModel:(id)arg0;
- (id)topRifleView;
- (void)setTopRifleView:(id)arg0;
- (id)bottomRifleView;
- (void)setBottomRifleView:(id)arg0;
- (id)createLynxMonitorContextWithLynxModel:(id)arg0;
- (void)setTopLynxTrackContext:(id)arg0;
- (id)topLynxTrackContext;
- (void)monitorWithContext:(id)arg0 eventKey:(long long)arg1;
- (void)setBottomLynxTrackContext:(id)arg0;
- (id)bottomLynxTrackContext;
- (void)notifyLynxDisappear;
- (BOOL)isVideoDidBreak;
- (void)lynxViewShowMonitorWithContext:(id)arg0 lynxView:(id)arg1;
- (id)topLynxViewComponentModelWithAweme:(id)arg0;
- (id)bottomLynxViewComponentModelWithAweme:(id)arg0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)updateWithModel:(id)arg0;
- (void)_setupUI;

@end
