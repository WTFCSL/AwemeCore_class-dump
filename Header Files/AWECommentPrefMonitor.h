//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface AWECommentPrefMonitor : NSObject {
    NSMutableDictionary *_sessions;
}

@property (retain, nonatomic) NSMutableDictionary *sessions;

+ (id)allocWithZone:(struct _NSZone { } *)arg0;
+ (id)sharedInstance;

- (void)clearSession:(id)arg0;
- (id)sessionWithAweme:(id)arg0;
- (id)sessions;
- (void).cxx_destruct;
- (void)setSessions:(id)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)arg0;

@end
