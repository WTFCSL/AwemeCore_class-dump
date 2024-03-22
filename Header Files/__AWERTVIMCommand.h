//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSDate;

@interface __AWERTVIMCommand : NSObject <AWERTVIMCommand> {
    NSString *_identifier;
    long long _type;
    NSString *_conversationID;
    NSDate *_createdAt;
    NSDictionary *_content;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long type;
@property (readonly, copy, nonatomic) NSString *conversationID;
@property (readonly, nonatomic) NSDate *createdAt;
@property (readonly, copy, nonatomic) NSDictionary *content;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifier:(id)arg0 type:(long long)arg1 conversationID:(id)arg2 createdAt:(id)arg3 content:(id)arg4;
- (void).cxx_destruct;
- (long long)type;
- (id)content;
- (id)conversationID;
- (id)identifier;
- (id)description;
- (id)createdAt;

@end