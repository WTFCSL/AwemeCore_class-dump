//
//     Generated by private class-dump
//

@class NSString;

@interface ECOMTIMConversationUnreadCountORM : NSObject <WCTTableCoding, ECOMTIMConversationUnreadCountModelProtocol> {
    int _badgeCount;
    int _readBadgeCount;
    int _type;
    NSString *_conversationID;
}

@property (copy, nonatomic) NSString *conversationID;
@property (nonatomic) int badgeCount;
@property (nonatomic) int readBadgeCount;
@property (nonatomic) int type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (const void *)objectRelationalMappingForWCDB;
+ (const void *)AllProperties;
+ (const void *)AnyProperty;
+ (id /* block */)PropertyNamed;
+ (const void *)readBadgeCount;
+ (const void *)type;
+ (const void *)conversationID;
+ (const void *)badgeCount;

- (int)readBadgeCount;
- (void)setReadBadgeCount:(int)arg0;
- (void).cxx_destruct;
- (int)type;
- (id)conversationID;
- (void)setType:(int)arg0;
- (int)badgeCount;
- (void)setConversationID:(id)arg0;
- (void)setBadgeCount:(int)arg0;

@end
