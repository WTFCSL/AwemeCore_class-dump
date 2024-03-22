//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWENoticePushGdlabelTextManager : NSObject <AWENoticePushGdlabelTextManagerProtocol>

@property (readonly, nonatomic) NSArray *diggArray;
@property (readonly, nonatomic) NSArray *atArray;
@property (readonly, nonatomic) NSArray *commentArray;
@property (readonly, nonatomic) NSArray *fansArray;
@property (readonly, nonatomic) NSArray *fansUrgeArray;
@property (readonly, nonatomic) NSArray *opsArray;
@property (readonly, nonatomic) NSArray *generalArray;
@property (readonly, nonatomic) NSArray *sendCoinArray;
@property (readonly, nonatomic) NSArray *favoriteArray;
@property (readonly, nonatomic) NSArray *normalNoticeArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commentArray;
- (id)interactionNoticePageSchema:(id)arg0;
- (BOOL)isHomepageVisitorGdLabel:(id)arg0;
- (BOOL)isInteractionNoticeGdLabel:(id)arg0;
- (BOOL)isFansGdLabel:(id)arg0;
- (BOOL)containsLabel:(id)arg0;
- (BOOL)isDiggGdLabel:(id)arg0;
- (id)interactionNoticePageForProfileVisitorSchema:(id)arg0;
- (id)diggArray;
- (id)atArray;
- (id)homepageVistorArray;
- (id)fansArray;
- (id)fansUrgeArray;
- (id)opsArray;
- (id)generalArray;
- (id)sendCoinArray;
- (id)favoriteArray;
- (id)normalNoticeArray;
- (BOOL)isAtGdLabel:(id)arg0;
- (BOOL)isCommentGdLabel:(id)arg0;
- (BOOL)isSendCoinGdLabel:(id)arg0;
- (BOOL)isFavoriteGdLabel:(id)arg0;
- (BOOL)isRewardGdLabel:(id)arg0;
- (BOOL)isNoticeGeneralGdLabel:(id)arg0;

@end
