//
//     Generated by private class-dump
//

@class NSString, AWEPOIAnchorTempoManager, AWEAwemeModel, UIView;
@protocol AWEPlayInteractionPOIBusinessCardDelegate, AWEHttpTask;

@interface AWEPlayInteractionPOIBusinessCardManager : NSObject <AWEPOIAnchorTempoManagerDelegate, AWEPlayInteractionPOIBusinessCardProtocol> {
    BOOL _hideAnimation;
    BOOL _hadTrackCardDataSuccess;
    AWEAwemeModel *_model;
    id<AWEPlayInteractionPOIBusinessCardDelegate> _delegate;
    UIView *_tempoView;
    NSString *_tempoViewItemID;
    AWEPOIAnchorTempoManager *_tempoManager;
    long long _retryTimes;
    id<AWEHttpTask> _task;
    double _playTimeInterval;
}

@property (retain, nonatomic) UIView *tempoView;
@property (copy, nonatomic) NSString *tempoViewItemID;
@property (nonatomic) BOOL hideAnimation;
@property (retain, nonatomic) AWEPOIAnchorTempoManager *tempoManager;
@property (nonatomic) long long retryTimes;
@property (retain, nonatomic) id<AWEHttpTask> task;
@property (nonatomic) double playTimeInterval;
@property (nonatomic) BOOL hadTrackCardDataSuccess;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) id<AWEPlayInteractionPOIBusinessCardDelegate> delegate;
@property (readonly, nonatomic) BOOL isCardShowing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)anchorInfo;
- (void)setTempoView:(id)arg0;
- (id)tempoView;
- (long long)retryTimes;
- (void)setRetryTimes:(long long)arg0;
- (BOOL)isCardShowing;
- (BOOL)isCardInUse;
- (void)p_close;
- (void)setHadTrackCardDataSuccess:(BOOL)arg0;
- (void)p_clearCard;
- (void)p_tryShowDetail;
- (void)setPlayTimeInterval:(double)arg0;
- (id)tempoViewItemID;
- (void)p_trackCardDataSuccess;
- (void)p_tryToShowCard;
- (void)analysisTrackWithAweme:(id)arg0 status:(unsigned long long)arg1 params:(id)arg2;
- (id)tempoManager;
- (void)setTempoViewItemID:(id)arg0;
- (void)p_fetchCardCompletion:(id /* block */)arg0;
- (void)dismiss:(BOOL)arg0 byClose:(BOOL)arg1;
- (BOOL)p_analysisData:(id)arg0;
- (void)p_closeCardACK;
- (double)playTimeInterval;
- (BOOL)hadTrackCardDataSuccess;
- (BOOL)poiAnchorTempoCardClickCloseWithItemID:(id)arg0 animation:(BOOL)arg1;
- (void)poiAnchorTempoCardOpenDetailWithItemID:(id)arg0 logExtra:(id)arg1;
- (id)poiAnchorTempoCardGetAwemeInfoWithItemID:(id)arg0;
- (void)tryToLoadAndShowPOIBusinessCardWithPlayTimeinterval:(double)arg0 videoDuration:(double)arg1 loopTimes:(long long)arg2;
- (id)showInView:(id)arg0 bottomY:(double)arg1;
- (void)setTempoManager:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (void)setHideAnimation:(BOOL)arg0;
- (id)model;
- (BOOL)hideAnimation;
- (id)contentView;
- (id)delegate;
- (void)setTask:(id)arg0;
- (void)resumeAnimation;
- (void)clear;
- (void)setDelegate:(id)arg0;
- (id)task;
- (void)reset;
- (void)dismiss:(BOOL)arg0;
- (void)cancelAnimation;

@end
