//
//     Generated by private class-dump
//

@class GetRoomPanelResponse_Data, HTSEventContext, NSString, NSNumber, NSMutableArray;

@interface IESLiveAnchorDataPanelInfo : NSObject {
    BOOL _firstSwipeDown;
    BOOL _hasBottomContainerView;
    NSNumber *_roomID;
    HTSEventContext *_trackContext;
    unsigned long long _currentTabIndex;
    NSString *_currentTabName;
    NSString *_changeLabelUrl;
    NSString *_enterFrom;
    NSString *_profileAbnormalType;
    NSMutableArray *_bottomInfoItemQueue;
    unsigned long long _currentQueueIndex;
    GetRoomPanelResponse_Data *_lastPanelData;
}

@property (retain, nonatomic) NSNumber *roomID;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (nonatomic) BOOL firstSwipeDown;
@property (nonatomic) BOOL hasBottomContainerView;
@property (nonatomic) unsigned long long currentTabIndex;
@property (retain, nonatomic) NSString *currentTabName;
@property (retain, nonatomic) NSString *changeLabelUrl;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *profileAbnormalType;
@property (retain, nonatomic) NSMutableArray *bottomInfoItemQueue;
@property (nonatomic) unsigned long long currentQueueIndex;
@property (retain, nonatomic) GetRoomPanelResponse_Data *lastPanelData;

- (void)setEnterFrom:(id)arg0;
- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)enterFrom;
- (id)currentTabName;
- (void)setCurrentTabName:(id)arg0;
- (id)initWithRoomID:(id)arg0 trackContext:(id)arg1;
- (void)setupDefaultPanelData;
- (id)getNeedLoadURLsWithText:(id)arg0;
- (void)loadRichTextImageWithTextArray:(id)arg0 downloadCompletion:(id /* block */)arg1;
- (void)loadRichTextImageWithText:(id)arg0 downloadCompletion:(id /* block */)arg1;
- (BOOL)firstSwipeDown;
- (void)setFirstSwipeDown:(BOOL)arg0;
- (BOOL)hasBottomContainerView;
- (void)setHasBottomContainerView:(BOOL)arg0;
- (id)changeLabelUrl;
- (void)setChangeLabelUrl:(id)arg0;
- (id)profileAbnormalType;
- (void)setProfileAbnormalType:(id)arg0;
- (id)bottomInfoItemQueue;
- (void)setBottomInfoItemQueue:(id)arg0;
- (unsigned long long)currentQueueIndex;
- (void)setCurrentQueueIndex:(unsigned long long)arg0;
- (id)lastPanelData;
- (void)setLastPanelData:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)currentTabIndex;
- (void)setCurrentTabIndex:(unsigned long long)arg0;
- (id)roomID;
- (void)setRoomID:(id)arg0;

@end
