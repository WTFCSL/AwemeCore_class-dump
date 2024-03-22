//
//     Generated by private class-dump
//

@class AWELeftSideBarBasePresenter, NSString, AWEHPChannelCaptionBubbleTask;

@interface AWELeftSideBarEntranceCaptionBubbleTask : NSObject {
    BOOL _isBusiness;
    AWEHPChannelCaptionBubbleTask *_holdingTask;
    AWELeftSideBarBasePresenter *_presenter;
    NSString *_componentId;
    double _showTime;
}

@property (retain, nonatomic) AWEHPChannelCaptionBubbleTask *holdingTask;
@property (weak, nonatomic) AWELeftSideBarBasePresenter *presenter;
@property (nonatomic) BOOL isBusiness;
@property (copy, nonatomic) NSString *componentId;
@property (nonatomic) double showTime;

- (id)componentId;
- (void)setComponentId:(id)arg0;
- (double)showTime;
- (void)setShowTime:(double)arg0;
- (id)holdingTask;
- (void)setHoldingTask:(id)arg0;
- (void).cxx_destruct;
- (id)presenter;
- (void)setPresenter:(id)arg0;
- (BOOL)isBusiness;
- (void)setIsBusiness:(BOOL)arg0;

@end