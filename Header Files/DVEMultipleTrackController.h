//
//     Generated by private class-dump
//

@class NSString, DVEMultipleTrackView, DVETrackPanelContext, DVEMultipleTrackAudioViewModel;
@protocol DVEMultipleTrackControllerDelegate;

@interface DVEMultipleTrackController : NSObject <DVEMulitpleTrackViewServiceProtocol> {
    DVEMultipleTrackView *_trackView;
    DVEMultipleTrackAudioViewModel *_audioViewModel;
    DVETrackPanelContext *_context;
}

@property (retain, nonatomic) DVETrackPanelContext *context;
@property (retain, nonatomic) DVEMultipleTrackView *trackView;
@property (retain, nonatomic) DVEMultipleTrackAudioViewModel *audioViewModel;
@property (weak, nonatomic) id<DVEMultipleTrackControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackView;
- (void)setTrackView:(id)arg0;
- (void)updateWithMultipleTrackMode:(unsigned long long)arg0 hidden:(BOOL)arg1;
- (void)p_registerService;
- (void)setUpObserve;
- (id)viewModelOfMode:(unsigned long long)arg0;
- (id)audioViewModel;
- (void)scrollCurrentClipCellToTop;
- (void)scrollCurrentClipCellToNormal;
- (void)setAudioViewModel:(id)arg0;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)delegate;
- (id)context;
- (void)hide;
- (void)setDelegate:(id)arg0;
- (void)scrollToBottom;

@end
