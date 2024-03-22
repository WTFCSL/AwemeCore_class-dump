//
//     Generated by private class-dump
//

@class FeedItem, NSString, NSArray, HTSLiveRoom;

@interface IESLiveViewingHistoryViewModel : NSObject {
    BOOL _live;
    long long _userID;
    NSString *_secUID;
    NSString *_nickName;
    NSArray *_urlList;
    NSString *_desc;
    NSString *_message;
    NSString *_rid;
    unsigned long long _historyType;
    HTSLiveRoom *_roomData;
    FeedItem *_item;
}

@property (retain, nonatomic) FeedItem *item;
@property (readonly, nonatomic) long long userID;
@property (readonly, copy, nonatomic) NSString *secUID;
@property (readonly, copy, nonatomic) NSString *nickName;
@property (readonly, copy, nonatomic) NSArray *urlList;
@property (readonly, copy, nonatomic) NSString *desc;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, copy, nonatomic) NSString *rid;
@property (readonly, nonatomic) unsigned long long historyType;
@property (readonly, nonatomic) HTSLiveRoom *roomData;
@property (nonatomic, getter=isLive) BOOL live;

- (id)roomData;
- (id)urlList;
- (id)secUID;
- (id)initWithFeedItem:(id)arg0;
- (void)dealFeedItem:(id)arg0;
- (long long)userID;
- (id)desc;
- (BOOL)isLive;
- (id)item;
- (void).cxx_destruct;
- (void)setLive:(BOOL)arg0;
- (id)message;
- (id)nickName;
- (void)setItem:(id)arg0;
- (unsigned long long)historyType;
- (id)rid;

@end
