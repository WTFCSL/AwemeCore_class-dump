//
//     Generated by private class-dump
//

@protocol IESLiveLinkmicLinkMessageDelegate;

@protocol IESLiveLinkmicLinkMessage <NSObject>

@property (weak, nonatomic) id<IESLiveLinkmicLinkMessageDelegate> delegate;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) unsigned long long fallBackScene;

- (void)registMessage;
- (unsigned long long)fallBackScene;
- (void)setFallBackScene:(unsigned long long)arg0;
- (void)setScene:(unsigned long long)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (unsigned long long)scene;

@end