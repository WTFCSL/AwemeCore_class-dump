//
//     Generated by private class-dump
//

@class NSString;

@interface TIMXUserCounter : NSObject <TIMXUserCounterProtocol, TIMXInstanceScopeAlwaysNewDIComponent> {
    int _conversationType;
    long long _conversationShortId;
}

@property (nonatomic) long long conversationShortId;
@property (nonatomic) int conversationType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)conversationShortId;
- (void)setConversationShortId:(long long)arg0;
- (int)conversationType;
- (void)setConversationType:(int)arg0;
- (id)initWithRootObject:(id)arg0;

@end