//
//     Generated by private class-dump
//

@interface AWEIMDefaultLandingToMessageTabTrackerModel : NSObject {
    BOOL _enableCheckPreUnreadCount;
    BOOL _enableCheckPush;
    int _preUnreadCount;
    int _pushCount;
}

@property (nonatomic) BOOL enableCheckPreUnreadCount;
@property (nonatomic) BOOL enableCheckPush;
@property (nonatomic) int preUnreadCount;
@property (nonatomic) int pushCount;

- (int)preUnreadCount;
- (void)setPreUnreadCount:(int)arg0;
- (void)setEnableCheckPush:(BOOL)arg0;
- (void)setEnableCheckPreUnreadCount:(BOOL)arg0;
- (BOOL)enableCheckPreUnreadCount;
- (BOOL)enableCheckPush;
- (int)pushCount;
- (void)setPushCount:(int)arg0;

@end