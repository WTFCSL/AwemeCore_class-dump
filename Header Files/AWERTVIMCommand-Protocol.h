//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSDate;

@protocol AWERTVIMCommand <NSObject>

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *conversationID;
@property (readonly, nonatomic) NSDate *createdAt;
@property (readonly, copy, nonatomic) NSDictionary *content;

- (long long)type;
- (id)content;
- (id)conversationID;
- (id)identifier;
- (id)createdAt;

@end
