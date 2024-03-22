//
//     Generated by private class-dump
//

@class AWEProfilePostUnreadNoticeModel, NSString;

@interface AWEUserWorkCellNoticeLabelComponent : AWERLComponent <AWERLComponentProtocol, AWEUserWorkCellComponentProtocol, AWEProfilePostNoticeLabelServiceProtocol> {
    AWEProfilePostUnreadNoticeModel *_unreadNoticeModel;
}

@property (retain, nonatomic) AWEProfilePostUnreadNoticeModel *unreadNoticeModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)componentWithData:(id)arg0 context:(id)arg1;

- (id)buildSubComponents;
- (void)bindEvents;
- (void)clearUnreadNoticeAfterCoverTapped;
- (unsigned long long)landingCommentTabType;
- (BOOL)canShowNoticeLabel;
- (void)trackMsgShow;
- (BOOL)dynamicComponent;
- (void)updateCachedUnreadNoticeModel;
- (void)clearUnreadNoticeWithOption:(unsigned long long)arg0;
- (void)trackMsgShowIfNeeded;
- (void)updateCommentTabChangedObserver;
- (id)unreadNoticeModel;
- (void)setUnreadNoticeModel:(id)arg0;
- (void)clearUnreadNotice:(id)arg0;
- (void)commentTabDidSelectedNoti:(id)arg0;
- (void)richAwemeFullPageNoti:(id)arg0;
- (void)videoPlayNoti:(id)arg0;
- (id)initWithData:(id)arg0 context:(id)arg1;
- (void).cxx_destruct;
- (long long)unreadCount;
- (void)dealloc;

@end