//
//     Generated by private class-dump
//

@protocol AWECommentSearchViewControllerDelegate <NSObject>

@property (nonatomic) long long indexForUserPositionInMentionShowList;

- (BOOL)needShowSendToIMEntrance;
- (id)currentSearchKeyword;
- (void)didSelectSearchResult:(id)arg0 trackInfo:(id)arg1;
- (void)didDeselectSearchResult:(id)arg0;
- (void)didSendMessageToUser:(id)arg0;
- (id)extraInfoList;

@optional

- (long long)indexForUserPositionInMentionShowList;
- (void)setIndexForUserPositionInMentionShowList:(long long)arg0;
- (void)searchCompleteWithNoResult;
- (void)searchCompleteWithResult;
- (id)getTrackInfo;

@end
