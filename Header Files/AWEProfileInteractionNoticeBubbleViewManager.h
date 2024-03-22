//
//     Generated by private class-dump
//

@class NSArray, NSString;
@protocol AWEProfileInteractionNoticeBubbleViewManagerDelegate, AWEIMDYNotificationGroupDataControllerProtocol;

@interface AWEProfileInteractionNoticeBubbleViewManager : NSObject <AWEProfileInteractionNoticeBubbleViewManagerProtocol> {
    BOOL _isShowing;
    id<AWEProfileInteractionNoticeBubbleViewManagerDelegate> _delegate;
    id<AWEIMDYNotificationGroupDataControllerProtocol> _groupDataController;
    NSArray *_noticeResponseModels;
    long long _noticeTotalCount;
    long long _newFansCount;
}

@property (retain, nonatomic) id<AWEIMDYNotificationGroupDataControllerProtocol> groupDataController;
@property (retain, nonatomic) NSArray *noticeResponseModels;
@property (nonatomic) long long noticeTotalCount;
@property (nonatomic) long long newFansCount;
@property (nonatomic) BOOL isShowing;
@property (weak, nonatomic) id<AWEProfileInteractionNoticeBubbleViewManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareManager;

- (void)setIsShowing:(BOOL)arg0;
- (long long)newFansCount;
- (void)setNewFansCount:(long long)arg0;
- (void)checkBubbleDisplayCondition;
- (long long)noticeTotalCount;
- (void)setNoticeTotalCount:(long long)arg0;
- (void)p_fetchRemoteNotice;
- (id)officialModelTypes;
- (id)groupDataController;
- (void)setGroupDataController:(id)arg0;
- (void)setNoticeResponseModels:(id)arg0;
- (id)bubbleViewText:(id)arg0;
- (BOOL)isLowFans;
- (id)noticeResponseModels;
- (void).cxx_destruct;
- (BOOL)isShowing;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (void)setupConfig;

@end