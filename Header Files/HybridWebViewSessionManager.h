//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface HybridWebViewSessionManager : NSObject {
    NSMutableDictionary *_sessions;
    NSMutableDictionary *_containerIDToSessionIDDic;
    NSMutableDictionary *_sessionIDToFirstJumpDictionary;
    NSString *_closingSession;
}

@property (retain, nonatomic) NSMutableDictionary *sessions;
@property (retain, nonatomic) NSMutableDictionary *containerIDToSessionIDDic;
@property (retain, nonatomic) NSMutableDictionary *sessionIDToFirstJumpDictionary;
@property (retain, nonatomic) NSString *closingSession;

+ (id)sharedInstance;

- (void)registerContainerID:(id)arg0 inSession:(id)arg1;
- (void)closeSessionWithContainerID:(id)arg0 animated:(BOOL)arg1;
- (id)containerIDToSessionIDDic;
- (id)sessionIDToFirstJumpDictionary;
- (id)sessionIDForContainerID:(id)arg0;
- (void)closeSessionWithSessionID:(id)arg0 animated:(BOOL)arg1;
- (void)closeSessionWithSessionID:(id)arg0 animated:(BOOL)arg1 excludeContaienrIDs:(id)arg2;
- (id)closingSession;
- (void)setClosingSession:(id)arg0;
- (id)firstJumpURLForSession:(id)arg0;
- (void)registerSession:(id)arg0 withFirstJumpURLString:(id)arg1;
- (void)closeSessionWithContainerID:(id)arg0 animated:(BOOL)arg1 excludeContaienrIDs:(id)arg2;
- (id)firstJumpURLForContainerID:(id)arg0;
- (void)setContainerIDToSessionIDDic:(id)arg0;
- (void)setSessionIDToFirstJumpDictionary:(id)arg0;
- (id)init;
- (id)sessions;
- (void).cxx_destruct;
- (void)setSessions:(id)arg0;

@end
