//
//     Generated by private class-dump
//

@class NSString;

@interface AWEWorkspaceDraftTask : NSObject {
    NSString *_draftID;
    NSString *_userID;
    NSString *_actionDescriprion;
    id /* block */ _action;
}

@property (readonly, copy, nonatomic) NSString *draftID;
@property (readonly, copy, nonatomic) NSString *userID;
@property (readonly, copy, nonatomic) NSString *actionDescriprion;
@property (copy, nonatomic) id /* block */ action;

- (id)draftID;
- (id)initWithDraftID:(id)arg0 actionDescriprion:(id)arg1;
- (BOOL)isCurrentUserTask;
- (id)actionDescriprion;
- (id)userID;
- (void).cxx_destruct;
- (void)setAction:(id /* block */)arg0;
- (id /* block */)action;
- (id)description;
- (void)dealloc;

@end
