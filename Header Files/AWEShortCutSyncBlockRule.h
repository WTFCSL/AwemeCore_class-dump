//
//     Generated by private class-dump
//

@class NSString;

@interface AWEShortCutSyncBlockRule : AWEExternalRouterBlockBaseRule {
    NSString *_shortcutItemType;
}

@property (retain, nonatomic) NSString *shortcutItemType;

- (BOOL)needBlockURLString:(id)arg0 context:(id)arg1 userActivity:(id)arg2 linkSession:(id)arg3;
- (id)syncHandleURLString:(id)arg0 context:(id)arg1 scene:(id)arg2 linkSession:(id)arg3;
- (void)setShortcutItemType:(id)arg0;
- (id)shortcutItemType;
- (void).cxx_destruct;
- (long long)ruleType;

@end
