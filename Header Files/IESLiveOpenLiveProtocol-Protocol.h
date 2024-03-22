//
//     Generated by private class-dump
//

@class HTSLiveRoom;

@protocol IESLiveOpenLiveProtocol <NSObject>

@property (nonatomic) BOOL enableBack;
@property (copy, nonatomic) id /* block */ backHandler;
@property (copy, nonatomic) id /* block */ dismissHandler;
@property (copy, nonatomic) id /* block */ buildCameraAfterPassAuthBlock;
@property (retain, nonatomic) HTSLiveRoom *room;

- (void)setShootWay:(id)arg0;
- (void)setEnableBack:(BOOL)arg0;
- (void)setBackHandler:(id /* block */)arg0;
- (void)setBuildCameraAfterPassAuthBlock:(id /* block */)arg0;
- (void)willSwitchToOtherTab;
- (void)willSwitchToLiveTab;
- (void)didEnterLiveTabWithStartTime:(double)arg0;
- (void)setEntryFaceSticker:(id)arg0;
- (void)setTopicID:(id)arg0 topicName:(id)arg1 isCommerce:(BOOL)arg2;
- (BOOL)enableBack;
- (id /* block */)backHandler;
- (id /* block */)buildCameraAfterPassAuthBlock;
- (void)setCamera:(id)arg0;
- (void)setDismissHandler:(id /* block */)arg0;
- (void)setActive:(BOOL)arg0;
- (id /* block */)dismissHandler;
- (id)room;
- (void)setRoom:(id)arg0;

@end