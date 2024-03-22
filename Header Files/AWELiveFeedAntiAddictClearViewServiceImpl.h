//
//     Generated by private class-dump
//

@class FeedItem, NSString, AWEAwemeModel;

@interface AWELiveFeedAntiAddictClearViewServiceImpl : NSObject <IESLiveFeedAntiAddictClearViewService> {
    unsigned long long _antiAddictType;
    AWEAwemeModel *_antiAddictModel;
    FeedItem *_antiAddictFeedItem;
}

@property (nonatomic) unsigned long long antiAddictType;
@property (retain, nonatomic) AWEAwemeModel *antiAddictModel;
@property (retain, nonatomic) FeedItem *antiAddictFeedItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shareInstance;

- (unsigned long long)antiAddictType;
- (void)setAntiAddictType:(unsigned long long)arg0;
- (BOOL)useAntiAddictModernCell;
- (id)antiAddictClearViewTitle;
- (id)antiAddictClearViewSubTitle;
- (void)preInsertAntiAddictData:(id)arg0;
- (void)handleAntiAddictLeaveNotification:(id)arg0;
- (id)noticeTypeStrFor:(id)arg0;
- (id)noticeStyleStrFor:(id)arg0;
- (void)insertAntiAddictData:(id)arg0;
- (id)antiAddictClearViewConfirmBtnTitle;
- (void)removeAntiData;
- (id)antiAddictModel;
- (void)trackNoticeViewShow:(id)arg0;
- (id)antiAddictFeedItem;
- (id)getVideoType;
- (void)insertAntiData:(id)arg0;
- (id)getAntiAddictParams;
- (void)setAntiAddictModel:(id)arg0;
- (void)antiAddictCardEnter;
- (void)setAntiAddictFeedItem:(id)arg0;
- (id)antiAddictClearView;
- (void)ignoreBtnClicked;
- (void)addAntiAddictFeedItemIfNeeded;
- (void)antiAddictCardStayTime:(id)arg0;
- (void)antiAddictionNoticeShow:(id)arg0;
- (id)antiAddictPlayerWrapper;
- (void)updateAntiAddictPlayer:(id)arg0 enterFrom:(id)arg1;
- (void)antiAddictClearViewShowReplaceToastIfNeed:(long long)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)addObserver;

@end
