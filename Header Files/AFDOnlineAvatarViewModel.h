//
//     Generated by private class-dump
//

@class AFDOnlineAvatarViewContext;
@protocol AFDOnlineAvatarViewDelegate;

@interface AFDOnlineAvatarViewModel : NSObject {
    id<AFDOnlineAvatarViewDelegate> _delegate;
    AFDOnlineAvatarViewContext *_context;
    id /* block */ _refreshBlock;
}

@property (weak, nonatomic) id<AFDOnlineAvatarViewDelegate> delegate;
@property (retain, nonatomic) AFDOnlineAvatarViewContext *context;
@property (copy, nonatomic) id /* block */ refreshBlock;

- (id)avatarURLList;
- (BOOL)shouldHiddenOnlineView;
- (void)didUpdateActiveStatus;
- (id)user;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)delegate;
- (id)context;
- (void)setDelegate:(id)arg0;
- (void)updateWithContext:(id)arg0;
- (void)updateActiveStatus;
- (void)setRefreshBlock:(id /* block */)arg0;
- (id /* block */)refreshBlock;

@end
