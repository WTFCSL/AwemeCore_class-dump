//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface RTVChatInteractiveEmoticonMessage : RTVChatMessage {
    NSNumber *_imageID;
    NSString *_displayName;
}

@property (retain, nonatomic) NSNumber *imageID;
@property (readonly, copy, nonatomic) NSString *displayName;

- (id)initWithSender:(id)arg0 type:(unsigned long long)arg1 content:(id)arg2;
- (id)initWithImageID:(id)arg0 displayName:(id)arg1;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)displayName;
- (id)imageID;
- (id)contentDictionary;
- (void)setImageID:(id)arg0;

@end