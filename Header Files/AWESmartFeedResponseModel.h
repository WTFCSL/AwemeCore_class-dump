//
//     Generated by private class-dump
//

@class NSArray, AWESmartFeedLastViewModel, NSString, NSNumber;

@interface AWESmartFeedResponseModel : AWEBaseApiModel {
    BOOL _hasMore;
    BOOL _shouldUseSnapShot;
    BOOL _shouldDeleteSnapShot;
    BOOL _shouldChangeSnapShot;
    BOOL _isRecommendFlow;
    BOOL _useBackup;
    NSNumber *_cursor;
    NSNumber *_level;
    NSArray *_cardList;
    AWESmartFeedLastViewModel *_lastView;
    NSNumber *_updatedItemsCount;
    NSString *_blankPanelText;
    NSNumber *_alreadyLastView;
    NSNumber *_refreshCacheTimeout;
    NSString *_mockInfoFilteredText;
}

@property (retain, nonatomic) NSNumber *updateItemCount;
@property (retain, nonatomic) NSNumber *updateRoomCount;
@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) NSNumber *level;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSArray *cardList;
@property (retain, nonatomic) AWESmartFeedLastViewModel *lastView;
@property (nonatomic) BOOL shouldUseSnapShot;
@property (nonatomic) BOOL shouldDeleteSnapShot;
@property (nonatomic) BOOL shouldChangeSnapShot;
@property (retain, nonatomic) NSNumber *updatedItemsCount;
@property (copy, nonatomic) NSString *blankPanelText;
@property (nonatomic) BOOL isRecommendFlow;
@property (retain, nonatomic) NSNumber *alreadyLastView;
@property (retain, nonatomic) NSNumber *refreshCacheTimeout;
@property (nonatomic) BOOL useBackup;
@property (copy, nonatomic) NSString *mockInfoFilteredText;

+ (id)hasMoreJSONTransformer;
+ (id)cardListJSONTransformer;
+ (id)lastViewJSONTransformer;
+ (id)followFeed_subModelPropertyKey;
+ (id)JSONKeyPathsByPropertyKey;

- (id)blankPanelText;
- (void)setBlankPanelText:(id)arg0;
- (BOOL)isRecommendFlow;
- (void)setIsRecommendFlow:(BOOL)arg0;
- (id)cardList;
- (void)setCardList:(id)arg0;
- (id)lastView;
- (void)setLastView:(id)arg0;
- (BOOL)shouldUseSnapShot;
- (void)setShouldUseSnapShot:(BOOL)arg0;
- (BOOL)shouldDeleteSnapShot;
- (void)setShouldDeleteSnapShot:(BOOL)arg0;
- (BOOL)shouldChangeSnapShot;
- (void)setShouldChangeSnapShot:(BOOL)arg0;
- (id)updatedItemsCount;
- (void)setUpdatedItemsCount:(id)arg0;
- (id)alreadyLastView;
- (void)setAlreadyLastView:(id)arg0;
- (id)refreshCacheTimeout;
- (void)setRefreshCacheTimeout:(id)arg0;
- (BOOL)useBackup;
- (void)setUseBackup:(BOOL)arg0;
- (id)mockInfoFilteredText;
- (void)setMockInfoFilteredText:(id)arg0;
- (id)updateItemCount;
- (id)updateRoomCount;
- (void)setUpdateItemCount:(id)arg0;
- (void)setUpdateRoomCount:(id)arg0;
- (void)setLevel:(id)arg0;
- (id)cursor;
- (id)level;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setCursor:(id)arg0;

@end
