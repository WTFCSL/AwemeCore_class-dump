//
//     Generated by private class-dump
//

@class AWELeftSideBarBasePresenter, AWEHPChannelBubbleTask;

@interface AWELeftSideBarEntranceCommonBubbleTask : NSObject {
    BOOL _isBusiness;
    AWEHPChannelBubbleTask *_holdingTask;
    AWELeftSideBarBasePresenter *_presenter;
}

@property (retain, nonatomic) AWEHPChannelBubbleTask *holdingTask;
@property (weak, nonatomic) AWELeftSideBarBasePresenter *presenter;
@property (nonatomic) BOOL isBusiness;

- (id)holdingTask;
- (void)setHoldingTask:(id)arg0;
- (void).cxx_destruct;
- (id)presenter;
- (void)setPresenter:(id)arg0;
- (BOOL)isBusiness;
- (void)setIsBusiness:(BOOL)arg0;

@end