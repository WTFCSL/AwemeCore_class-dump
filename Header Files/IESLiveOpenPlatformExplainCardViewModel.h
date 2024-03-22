//
//     Generated by private class-dump
//

@class NSString, IESLiveOpenPlatformExplainCardModel, IESLiveGCDTimer;

@interface IESLiveOpenPlatformExplainCardViewModel : NSObject {
    IESLiveOpenPlatformExplainCardModel *_cardModel;
    IESLiveGCDTimer *_timer;
    double _showTimeinterval;
    NSString *_closeType;
}

@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (nonatomic) double showTimeinterval;
@property (copy, nonatomic) NSString *closeType;
@property (readonly, nonatomic) IESLiveOpenPlatformExplainCardModel *cardModel;

- (id)attachingDIContext;
- (id)cardModel;
- (id)initWithCardModel:(id)arg0;
- (id)_trackParams;
- (void)handleTapAction;
- (id)closeType;
- (void)setCloseType:(id)arg0;
- (void)handleCloseAction;
- (void)handleCardDidShow;
- (void)handleCardDidHide;
- (void)setShowTimeinterval:(double)arg0;
- (double)showTimeinterval;
- (id)timer;
- (void).cxx_destruct;
- (void)setTimer:(id)arg0;
- (void)_invalidateTimer;
- (void)dealloc;

@end
