//
//     Generated by private class-dump
//

@interface AWEInteractionReusableMsgModel : NSObject {
    unsigned int _flags;
    unsigned long long _state;
}

@property (nonatomic) unsigned int flags;
@property (nonatomic) unsigned long long state;

- (void)interactionSateDidChange:(unsigned long long)arg0;
- (unsigned long long)state;
- (void)setState:(unsigned long long)arg0;
- (void)setFlags:(unsigned int)arg0;
- (unsigned int)flags;

@end
