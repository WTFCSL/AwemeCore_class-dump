//
//     Generated by private class-dump
//

@class NSString, FeedItem;

@interface IESLiveFeedDrawerHistoryOnlineModel : NSObject <IESLiveFeedDrawerItemProtocol, IESLiveFeedDrawerHistoryModelProtocol> {
    NSString *_enterFrom;
    NSString *_enterMethod;
    FeedItem *_item;
}

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (retain, nonatomic) FeedItem *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (id)enterFrom;
- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)arg0;
- (id)initWithFeedItem:(id)arg0;
- (id)item;
- (void).cxx_destruct;
- (void)setItem:(id)arg0;
- (Class)sectionClass;

@end