//
//     Generated by private class-dump
//

@class DVETrackPanelContext, DVEMediaTimelineView;
@protocol DVEMulitpleTrackViewServiceProtocol, DVEMultipleTrackControllerDelegate;

@interface ACCAdvanceEditTimeLineController : UIViewController {
    DVEMediaTimelineView *_timeLineView;
    DVETrackPanelContext *_vcContext;
    id<DVEMulitpleTrackViewServiceProtocol> _multipleTrackViewService;
}

@property (weak, nonatomic) DVETrackPanelContext *vcContext;
@property (weak, nonatomic) id<DVEMulitpleTrackViewServiceProtocol> multipleTrackViewService;
@property (retain, nonatomic) DVEMediaTimelineView *timeLineView;
@property (weak, nonatomic) id<DVEMultipleTrackControllerDelegate> multipleTrackDelegate;

- (id)multipleTrackDelegate;
- (void)setMultipleTrackDelegate:(id)arg0;
- (id)multipleTrackViewService;
- (void)setMultipleTrackViewService:(id)arg0;
- (id)vcContext;
- (void)setVcContext:(id)arg0;
- (void)setupObserve;
- (id)timeLineView;
- (void)setTimeLineView:(id)arg0;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLoad;
- (void)setupUI;
- (void)setupData;

@end