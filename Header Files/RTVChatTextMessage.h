//
//     Generated by private class-dump
//

@class NSString;

@interface RTVChatTextMessage : RTVChatMessage {
    NSString *_text;
}

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSString *displayName;

- (id)initWithSender:(id)arg0 type:(unsigned long long)arg1 content:(id)arg2;
- (void).cxx_destruct;
- (id)initWithText:(id)arg0;
- (unsigned long long)type;
- (id)displayName;
- (id)text;
- (void)updateText:(id)arg0;
- (id)contentDictionary;

@end